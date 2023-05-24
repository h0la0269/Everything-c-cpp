 #include "Poly.h"

Term:: Term()
{
    exp = 0,coff = 0.0;
}

Term:: Term(double coe,int e)
{
    exp = e;
    coff = coe;
}

Term:: Term(const Term& ob)
{
    this->exp = ob.exp;
    this->coff = ob.coff;
}

Term Term:: operator+(const Term& ob)const
{
    Term res;

    res.coff = this->coff + ob.coff;
    res.exp = ob.exp;

    return res;
}

Term Term:: operator*(const Term& ob)const
{
    Term res;

    res.coff = this->coff * ob.coff;
    res.exp = this->exp + ob.exp;

    return res;
}

bool Term:: operator<(const Term& ob)const
{
    return this->exp < ob.exp;
}

bool Term:: operator>(const Term& ob)const
{
    return this->exp > ob.exp;
}

bool Term:: operator==(const Term& ob)const
{
    return ((this->exp == ob.exp) && (this->coff == ob.coff));
}

bool Term:: operator!=(const Term& ob)const
{
    return ((this->exp != ob.exp) && (this->coff != ob.coff));
}

Term& Term:: operator=(const Term& ob)
{
    if(this != &ob)
    {
        this->coff = ob.coff;
        this->exp = ob.exp;
    }

    return *this;
}

istream& operator>>(istream& in,Term& ob)
{
    in >> ob.coff >> ob.exp;

    return in;
}

ostream& operator<<(ostream& out,const Term& ob)
{
    out << ob.coff << "^" << ob.exp;

    return out;
}

Term :: ~Term()
{
    
}



Node :: Node(Term equation)
{
    eq = equation;
    this->next = NULL;
}

istream& operator>>(istream& in,Node& ob)
{
    in >> ob.eq;

    return in;
}

ostream& operator<<(ostream& out,const Node& ob)
{
    out << ob.eq;

    return out;
}



Polynomial :: Polynomial()
{
    this->head = NULL;
}

Polynomial :: Polynomial(const Polynomial &ob)
{
    Node *curr = ob.head, *t = this->head;

    while(curr != NULL)
    {
        t->eq = curr->eq;
        curr = curr->next;
        t = t->next;
    }
}

Term Polynomial:: operator+=(const Term& ob)
{
    Node* add = new Node(ob);
    Node* current = head;

    if(head == NULL)
    {
        head = add;
    }
    else
    {
        while(current->next != NULL)
        {
            current = current->next;
        }
        current = add;
    }
    return ob;
}

Polynomial Polynomial:: operator+(const Polynomial& ob)const
{
    Node *h1 = this->head, *h2 = ob.head;
    Polynomial p;

    while(h1 != NULL && h2 != NULL)
    {
        if(h1->eq > h2->eq)
        {
            p += h1->eq;
            h1 = h1->next; 
        }
        else if(h2->eq > h1->eq)
        {
            p += h2->eq;
            h2 = h2->next;
        }
        else
        {
            p += h1->eq;
            h1 = h1->next;
            h2 = h2->next;
        }
    }

    while(h1 != NULL)
    {
        p += h1->eq;
        h1 = h1->next;
    }

    while(h2 != NULL)
    {
        p += h2->eq;
        h2 = h2->next;
    }
    return p;
}

Polynomial Polynomial:: operator*(const Polynomial& ob)const
{
    Node *h1 = this->head, *h2 = ob.head;
    Polynomial p;

    while(h1 != NULL && h2 != NULL)
    {
        p += h1->eq * h2->eq;
        h1 = h1->next;
        h2 = h2->next;
    }

    while(h1 != NULL)
    {
        p += h1->eq;
        h1 = h1->next;
    }

    while(h2 != NULL)
    {
        p += h2->eq;
        h2 = h2->next;
    }
    return p;
}

Polynomial Polynomial:: operator*(const Term& ob)const
{
    Node* curr = this->head;
    Polynomial res;
    while(curr)
    {
        res += curr->eq * ob;
        curr = curr->next;
    }
    return res;
}

Polynomial& Polynomial:: operator=(const Polynomial &ob)
{
    Node *n1 = ob.head,*n2 = this->head;

    while(n1)
    {
        n1->eq = n2->eq;
        n1 = n1->next;
        n2 = n2->next;
    }
    return *this;
}
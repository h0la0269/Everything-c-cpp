#include<iostream>
using namespace std;

class Polynomial;
class Node;

class Term
{
    double coff;
    int exp;
    public:
        Term();
        Term(double cof, int exp);
        Term(const Term& ob);
        Term operator+(const Term& ob)const;
        Term operator*(const Term& ob)const;
        bool operator>(const Term& ob)const;
        bool operator<(const Term& ob)const;
        bool operator==(const Term& ob)const;
        bool operator!=(const Term& ob)const;
        Term& operator=(const Term& ob);
        friend ostream& operator<<(ostream &out, const Term& ob);
        friend istream& operator>>(istream &in, Term& ob);
        friend Node;
};

class Node
{
    Term eq;
    Node* next;
    public:
        Node(Term equation);
        friend istream& operator>>(istream& in,Node &ob);
        friend ostream& operator<<(ostream & out,const Node& ob);        
        friend Polynomial;
        friend istream& operator>>(istream& in,Polynomial& ob);
        friend ostream& operator<<(ostream& out,const Polynomial& ob);
};

class Polynomial
{
    Node* head = NULL;
    private:
        void del();
    public:
        Polynomial();
        Polynomial(const Polynomial& ob);
        Term Polynomial:: operator+=(const Term& ob);
        Polynomial operator+(const Polynomial& ob)const;
        Polynomial operator*(const Polynomial& ob)const;//multiply 2 polynomials
        Polynomial operator*(const Term& ob)const;//multiply a term with a polynomial
        Polynomial& operator=(const Polynomial& ob);
        friend istream& operator>>(istream& in,Polynomial& ob);
        friend ostream& operator<<(ostream& out,const Polynomial& ob);
        ~Polynomial();
        friend Term;
        friend Node;
};
#include<iostream>
using namespace std;
class Fraction
{
    int numerator,denominator;
    public:
        Fraction();
        Fraction(int num,int deno);
        Fraction operator+(Fraction a);
        Fraction operator-(Fraction a);
        Fraction operator*(Fraction a);
        bool operator==(Fraction a);
        Fraction& operator+=(const Fraction& rhs);
        Fraction& operator-=(const Fraction& rhs);
        Fraction& operator*=(const Fraction& rhs);
        friend istream& operator>>(istream &in,Fraction &ob);
        friend ostream& operator<<(ostream &out,const Fraction &ob);
    private:
        void minimize();
        int hcf(int num,int deno);


};
Fraction::Fraction()
{
    this->numerator=0;
    this->denominator=0;
}
Fraction::Fraction(int num,int deno)
{
    Fraction ob;

    ob.numerator=num;
    ob.denominator=deno;
    ob.minimize();
    this->numerator=ob.numerator;
    this->denominator=ob.denominator;
    
    

}
Fraction Fraction::operator+(Fraction a)
{
    Fraction res;
    int lcm,max;
    max=(this->denominator>a.denominator)?this->denominator:a.denominator;
    while(true)
    {
        if(max%this->denominator==0 && max%a.denominator==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    res.numerator=this->numerator*(lcm/this->denominator)+a.numerator*(lcm/a.denominator);
    res.denominator=lcm;
    res.minimize();
    return res;

}
Fraction Fraction::operator-(Fraction a)
{
    Fraction res;
    int lcm,max;
    max=(this->denominator>a.denominator)?this->denominator:a.denominator;
    while(true)
    {
        if(max%this->denominator==0 && max%a.denominator==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    res.numerator=this->numerator*(lcm/this->denominator)-a.numerator*(lcm/a.denominator);
    res.denominator=lcm;
    return res;

}
Fraction Fraction::operator*(Fraction a)
{
    Fraction res;
    res.numerator=this->numerator*a.numerator;
    res.denominator=this->denominator*a.denominator;
    return res;
}
bool Fraction::operator==(Fraction a)
{
    if(this->denominator==a.denominator && this->numerator==a.numerator)
        return true;
    else
        return false;
}
Fraction& Fraction::operator+=(const Fraction& rhs)
{
    int Max=max(this->denominator,rhs.denominator),lcm;
    while(true)
    {
        if(Max%this->denominator==0 && Max%rhs.denominator==0)
        {
            lcm=Max;
            break;
        }
        Max++;
    }
    this->numerator=this->numerator*(lcm/this->denominator)+rhs.numerator*(lcm/rhs.denominator);
    this->denominator=lcm;
    return *this;
}
Fraction& Fraction::operator-=(const Fraction& rhs)
{
    int Max=max(this->denominator,rhs.denominator),lcm;
    while(true)
    {
        if(Max%this->denominator==0 && Max%rhs.denominator==0)
        {
            lcm=Max;
            break;
        }
        Max++;
    }
    this->numerator=this->numerator*(lcm/this->denominator)-rhs.numerator*(lcm/rhs.denominator);
    this->denominator=lcm;
    return *this;
}
Fraction& Fraction::operator*=(const Fraction& rhs)
{
    this->numerator=this->numerator*rhs.numerator;
    this->denominator=this->denominator*rhs.denominator;
    return *this;

}
void Fraction::minimize()
{
    int fact_n,fact_d,h;
    
    h=hcf(this->numerator,this->denominator);
    this->numerator=this->numerator/h;
    this->denominator=this->denominator/h;

    /*if(num.denominator==num.numerator)
    {
        num.numerator=1;
        num.denominator=1;
    }
    else{
        for(int i=1;i<=num.numerator/2;++i)
        {
            if(num.numerator%i==0)
            {
                fact_n=i;
                break;
            }
            

        }
        for(int i=1;i<=num.denominator/2;++i)
        {
            if(num.denominator%i==0)
            {
                fact_d=i;
                break;
            }

        }
        if(fact_n!=1 && fact_d!=1)
        {
            num.numerator=fact_n;
            num.denominator=fact_d;

        }
    }*/
}
int Fraction::hcf(int num,int deno)
{
    if(deno==0)
        return num;
    else
        return hcf(deno,num%deno);


}
//istream& operator>>(istream &in,const Fraction &ob)
/*{
    in >> ob.numerator;
    in >> ob.denominator;
    return in;
}*/
ostream& operator<<(ostream &out,const Fraction &ob)
{
    out << ob.numerator << '/' << ob.denominator;
    return out;
    
}
int main()
{
    Fraction f1(2,4),f2(3,14),f3;
    f3=f1+f2;
    cout << f3;

    return 0;
}
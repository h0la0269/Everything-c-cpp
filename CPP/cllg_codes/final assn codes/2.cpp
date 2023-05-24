//WAP to overload a function Add as char* Add(char, char), char* Add(char, char*), char* Add(char*, char) to perform concatenation according as the arguments.
#include <iostream>
#include <string.h>
using namespace std;

char* add(char a, char b)
{
    char *c;
    c=new char[2];
    c[0]=a;
    c[1]=b;
    c[2]='\0';
    return c;
}

char* add(char a,const char *b)
{
    char *c;
    c=new char[strlen(b)+1];
    c[0]=a;
    for(int i=0; i<strlen(b); i++)
    {
        c[i+1]=b[i];
    }
    return c;
}

char* add(const char* a, char b)
{
    char *c;
    int i;
    c=new char[strlen(a)+1];
    for(i=0; i<strlen(a); i++)
    {
        c[i]=a[i];
    }
    c[i]=b;
    c[i+1]='\0';
    return c;
}

int main()
{
    cout<<add('x','y')<<endl;
    cout<<add('a'," country")<<endl;
    cout<<add("How are ",'u');
    return 0;
}
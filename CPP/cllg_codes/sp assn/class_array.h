#include<iostream>
#include<stdlib.h>
using namespace std;
class Matrix;
class Array{

    int * arr;
    int size;

    public:

    Array(); 
    Array(int size);
    friend Array operator+(Array &L1,Array &L2);
    int& operator[](int i);
    Array operator-(Array L);
    Array operator*(Array L);
    friend ostream &operator<<(ostream &out,Array &ob);
    friend istream &operator>>(istream &in,Array &ob);
    friend Matrix;


};
class Matrix
{
    Array *arr_object;
    int row,col;
    public:
        Matrix();
        Matrix(int r,int c);
        Array& operator[](int i);
        int& operator()(int i,int j);
        friend Matrix operator+(Matrix &a,Matrix &b);
        friend ostream &operator<<(ostream &out,Matrix &ob);
        friend istream &operator>>(istream &in,Matrix &ob);
};

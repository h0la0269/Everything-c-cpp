#include<iostream>
using namespace std;

class Matrix
{
    int **arr, rows, columns;

    public:
        // Matrix(int size);
        Matrix();
        Matrix(int row_size, int column_size);
        Matrix(int order);
        Matrix(const Matrix &ob);
        ~Matrix();
        Matrix operator+(const Matrix &ob);
        Matrix operator-(const Matrix &ob);
        Matrix operator*(const Matrix &ob);
        Matrix operator=(const Matrix &ob);
        void transpose();
        friend istream& operator>>(istream &in, Matrix &ob);
        friend ostream& operator<<(ostream &out, const Matrix &ob);
};

Matrix::Matrix()
{
    this->rows = this->columns = 0;
    this->arr = NULL;
}

Matrix::Matrix(int row_size, int column_size)
{
    this->rows = row_size, this->columns = column_size;
    this->arr = new int*[this->rows];
    for(int i = 0; i < this->rows; i++)
    {
        this->arr[i] = new int[this->columns]; 
    }
}

Matrix::Matrix(int order)
{
    this->rows = this->columns = order;
    this->arr = new int*[this->rows];
    for(int i = 0; i < this->rows; i++)
    {
        this->arr[i] = new int[this->columns]; 
    }
}

Matrix::Matrix(const Matrix &ob)
{
    if(this->arr != NULL && this->rows == 0 && this->columns == 0)
    {
        for(int i = 0; i < this->rows; i++)
        {
            delete[] this->arr[i];
        }
        this->arr = NULL;
        this->rows = this->columns = 0;
    }
    this->rows = ob.rows, this->columns = ob.columns;
    this->arr = new int*[this->rows];
    for (int i = 0; i < this->rows; i++)
    {
        this->arr[i] = new int[this->columns];
    }

    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->arr[i][j] = ob.arr[i][j];
        }
    }
}

Matrix Matrix::operator+(const Matrix &ob)
{
    Matrix res(this->rows, this->columns);
    for(int i = 0; i < this->rows; i++)
    {
        for(int j = 0; j < this->columns; j++)
        {
            res.arr[i][j] = this->arr[i][j] + ob.arr[i][j];
        }
    }
    return res;
}

Matrix Matrix::operator-(const Matrix &ob)
{
    Matrix res(this->rows, this->columns);
    for(int i = 0; i < this->rows; i++)
    {
        for(int j = 0; j < this->columns; j++)
        {
            res.arr[i][j] = this->arr[i][j] - ob.arr[i][j];
        }
    }
    return res;
}

Matrix Matrix::operator*(const Matrix &ob)
{
    Matrix res(this->rows, ob.columns);
    for(int i = 0; i < this->rows; i++)
    {
        for(int j = 0; j < ob.columns; j++)
        {
            res.arr[i][j] = 0;
            for(int k = 0; k < ob.rows; k++)
            {
                res.arr[i][j] += this->arr[i][k] * ob.arr[k][j];
            }
        }
    }
    return res;
}

Matrix Matrix::operator=(const Matrix &ob)
{
    if(this->arr != NULL && this->rows == 0 && this->columns == 0)
    {
        for(int i = 0; i < this->rows; i++)
        {
            delete[] this->arr[i];
        }

        this->arr = NULL;
        this->rows = this->columns = 0;
    }
    this->rows = ob.rows, this->columns = ob.columns;
    this->arr = new int*[this->rows];
    for (int i = 0; i < this->rows; i++)
    {
        this->arr[i] = new int[this->columns];
    }

    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->columns; j++)
        {
            this->arr[i][j] = ob.arr[i][j];
        }
    }

    return *this;
}

void Matrix::transpose()
{
    Matrix res(this->columns, this->rows);
    for(int i = 0; i < this->columns ; i++)
    {
        for(int j = 0; j < this->rows; j++)
        {
            res.arr[i][j] = this->arr[j][i];
        }
    }
    *this = res;
}

Matrix::~Matrix()
{
    for(int i = 0; i < this->rows; i++)
    {
       delete[] this->arr[i];
    }
    this->arr = NULL;
    this->rows = this->columns = 0;
    
}

istream& operator>>(istream &in, Matrix &ob)
{
    if(ob.rows == 0 && ob.columns == 0 && ob.arr == NULL)
    {
        cout<<"Enter the number of rows and columns of the Matrix :"<<endl;
        in>>ob.rows>>ob.columns;

        ob.arr = new int*[ob.rows];
        for(int i = 0; i < ob.rows; i++)
        {
            ob.arr[i] = new int[ob.columns]; 
        }
    }

    cout<<"Enter the elements of the Matrix : "<<endl;

    for(int i = 0; i < ob.rows; i++)
    {
        for(int j = 0; j < ob.columns; j++)
        {
            in>>ob.arr[i][j];
        }
    }
    return in;
}

ostream& operator<<(ostream &out, const Matrix &ob)
{
    out<<"Displaying the Matrix :"<<endl;
    for(int i = 0; i < ob.rows; i++)
    {
        for(int j = 0; j < ob.columns; j++)
        {
            out<<ob.arr[i][j]<<" ";
        }
        out<<endl;
    }
    return out;
}

int main()
{
    Matrix m1(3);
    cin>>m1;
    cout<<m1;

    Matrix m2(3,3);
    cin>>m2;
    cout<<m2;

    Matrix res;

    cout<<endl;
    cout<<"Working of Operator '+' after overloading for matrix :"<<endl;
    res = m1 + m2;
    cout<<res;


    cout<<endl;
    cout<<"Working of Operator '-' after overloading for matrix :"<<endl;
    res = m1 - m2;
    cout<<res;

    cout<<endl;
    cout<<"Working of Operator '*' after overloading for matrix :"<<endl;
    res = m1 * m2;
    cout<<res;

    cout<<"Working of Operator '=' after overloading for matrix :"<<endl;
    Matrix copy;
    copy = res = m2;
    cout<<copy;

    cout<<"Working of Copy Constructor for Matrix :"<<endl;
    Matrix m3(m1);
    cout<<m3;
    
    return 0;
}
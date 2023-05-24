#include<iostream>
//int count=0;

using namespace std;
class Matrix{
    int ** arr;
    int row,col;
    public:
        Matrix();
        Matrix(int row,int col);
        Matrix(const Matrix &ob);
        ~Matrix();
        int& operator()(int i,int j);
        Matrix& operator=(const Matrix& ob);
        friend Matrix operator+(Matrix a,Matrix b);
        friend Matrix operator*(Matrix a,Matrix b);
        void transpose();
        friend istream& operator>>(istream &in,Matrix &ob);
        friend ostream& operator<<(ostream &op,Matrix &ob);



        
};
Matrix::Matrix()
{
    this->row=0;
    this->col=0;
    this->arr=new int*[row];
    for(int i=0;i<row;++i)
        arr[i]=new int[col];
}
Matrix::Matrix(int row,int col)
{

    this->row=row;
    this->col=col;
    arr=new int*[row];
    int * p=new int[row*col];
    for(int i=0;i<row;++i)
        arr[i]=p+i*col;
    //count++;
    //cout << "Constructor executed"<<count << ' '<<endl;
    

}
Matrix::Matrix(const Matrix &ob)
{
    row=ob.row;
    col=ob.col;
    arr=new int*[ob.row];
    int * p=new int[ob.row*ob.col];
    for(int i=0;i<row;++i)
        arr[i]=p+i*col;
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
            arr[i][j]=ob.arr[i][j];
    }

}
int& Matrix::operator()(int i,int j)
{
    return arr[i][j];
}

Matrix& Matrix:: operator=(const Matrix& ob)
{
    //self assignment check
    if(this!=&ob)
    {
        delete[]arr ;
        arr=new int*[ob.row];
        this->row=ob.row;
        this->col=ob.col;
        for(int i=0;i<row;++i)
            arr[i]=new int[col];
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                arr[i][j]=ob.arr[i][j];
            }
        }

    }
    return *this;
}
Matrix operator+(Matrix a,Matrix b)
{
    Matrix res(a.row,a.col);
    if(a.row!=b.row || a.col!=b.col)
    {
        cout << "Addition wont happen with different rows and cols";
        

    }
    else{
        for(int i=0;i<res.row;++i)
        {
            for(int j=0;j<res.col;++j)
            {
                res(i,j)=a(i,j)+b(i,j);
                

            }
        }
        return res;
    }
    return res;
}
Matrix operator*(Matrix a,Matrix b)
{
    
    Matrix res(a.row,b.col);

    for(int i=0;i<a.row;++i)
    {
        for(int j=0;j<b.col;++j)
        {
            res(i,j)=0;
            for(int k=0;k<a.col;++k)
            {
                res(i,j)=res(i,j)+a(i,k)*b(j,k);
                
            }
        }
    }
    return res;


}
void Matrix::transpose()
{
    Matrix res(this->col,this->row);
    int temp=this->row;
    this->row=this->col;
    this->col=temp;
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            arr[i][j]=arr[j][i];
            
        }
    }
    //return res;
    

}
istream& operator>>(istream &in,Matrix &ob)
{
    for(int i=0;i<ob.row;++i)
    {
        for(int j=0;j<ob.col;++j)
        {
            in >> ob(i,j);
        }

    }
    return in;
}

ostream& operator<<(ostream &out,Matrix &ob)
{
    for(int i=0;i<ob.row;++i)
    {
        for(int j=0;j<ob.col;++j)
        {
           out<< ob(i,j) <<' ';
        }
        out << endl;

    }
    return out;

}
Matrix::~Matrix()
{
    delete arr;
    //cout << "Destructor is called "<< count;
    //--count;
    
    
}

int main()
{
    Matrix m1(1,4),m2(4,1),m3(1,1);
    cin >> m1;
    cout << m1;
    cout << "-------------------------\n";
    cin >> m2;
    cout << m2;
    cout << "-------------------------\n";
    m1.transpose();
    cout << m1;
    
    m1=m2;
    m2=m1+m2;
    cout << "-------------------------\n";
    cout << m1;
    cout << "-------------------------\n";
    cout << m2;
    m3=m1*m2;
    cout << "-------------------------\n";
    cout << m3;
    
    
    return 0;
}
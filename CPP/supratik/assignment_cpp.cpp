#include<iostream>
using namespace std;
class matrix
{
    friend void assign(matrix ob);
    friend void display(matrix ob);
    int **mat, row, col;
    public:
    matrix()
    {
        int i;
        row=2;col=2;
        mat= new int*[row];
        for(i=0;i<row;i++)
        {
            mat[i]=new int(col);
        }
    }
    matrix(int row, int col)
    {
        int i;
        this->row=row;
        this->col=col;
        mat= new int*[row];
        for(i=0;i<row;i++);
        {
            mat[i]=new int(col);
        }
    }
    int& operator()(int i, int j)
    {
        return mat[i][j];
    }
    matrix operator+(matrix );
    matrix operator*(matrix );

};

void assingn(matrix ob)
{
    int i,j;
    for (i=0;i<ob.row;i++)
    {
        for(j=0;j-<ob.col;j++)
        {
            int x;
            cout<<"Enter the number: ";
            cin>>x;
            ob(i,j)=x;
        }
    }
}
void display(matrix ob)
{
    int i.j;
    for (i=0;j<ob.row;i++)
    {
        for (j=0;j<ob.col;j++)
        {
            cout<<ob(i,j)<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

}

matrix matrix::operator*(matrix ob2)
{
    matrix ob3(this->row, ob2.col);
    int i,j,k;
}
         

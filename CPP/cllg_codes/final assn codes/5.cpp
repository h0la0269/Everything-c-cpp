//WAP to add, multiply and transpose two matrices using operator overloading. Use dynamic memory allocation: new, delete. Also provide suitable input and output functions. 
#include<iostream>
using namespace std;

class Mat{
	int **m,row,col;
	public:
	Mat();
	Mat(int, int);
	Mat(int);
	Mat(const Mat&);
	Mat operator+(const Mat&);
	Mat operator-(const Mat&);
	Mat operator*(const Mat&);
	void transpose();
	~Mat();
};

Mat::Mat(){
	row=2;
	col=2;
	m=new int *[row]; 
	for(int i=0;i<row;i++)
		m[i]=new int[col];
}
Mat::Mat(int row,int col){
	this->row=row;
	this->col=col;
	m=new int*[row];
	for(int i=0;i<row;++i)
		m[i]=new int[col];	
}
Mat::Mat(int order){
	this->row=this->col=order;
	m=new int*[row];
	for(int i=0;i<row;++i)
		m[i]=new int[col];
}
Mat::Mat(const Mat& obj){
	if(this->m!=NULL and this->row==0 and this->col==0){
		for(int i=0;i<row;++i)
			delete[] this->m[i];
		this->m=NULL;
		this->row=this->col=0;
	}
	this->row=obj.row;
	this->col=obj.col;
	m=new int*[this->row];
	for(int i=0;i<row;++i)
		m[i]=new int[this->col];
	for(int i=0;i<this->row;++i){
		for(int j=0;j<this->col;++j)
			this->m[i][j]=obj.m[i][j];
	}
}
Mat Mat:: operator+(const Mat& ob){
	Mat res(this->row, ob.col);
	for(int i=0;i<this->row;++i){
		for(int j=0;j<this->col;++j)
			res.m[i][j]=this->m[i][j]+ob.m[i][j];
	}
	return res;
}
Mat Mat::operator-(const Mat& ob){
	Mat res(this->row, ob.col);
	for(int i=0;i<this->row;++i){
		for(int j=0;j<this->col;++j)
			res.m[i][j]=this->m[i][j]-ob.m[i][j];
	}
	return res;
}

Mat Mat:: operator*(const Mat &ob){
	Mat res(this->row,this->col);
	for(int i=0;i<this->row;++i){
		for(int j=0;j<ob.col;++j){
			res.m[i][j]=0;
			for(int k=0;k<ob.row;++k)
				res.m[i][j]+=this->m[i][k]*ob.m[k][j];
		}
	}
	return res;
}

void Mat::transpose(){
	Mat res(this->col,this->row);
	for(int i=0;i<col;++i){
		for(int j=0;j<row;++j)
			res.m[i][j]=this->m[j][i];
	}
	*this=res;
}

Mat::~Mat(){
	for(int i=0;i<row;++i){
		delete[] this->m[i];
	}
	this->m=NULL;
	this->row=this->col=0;
}


int main(){
	Mat m1(3);
    cin>>m1;
    cout<<m1;

    Mat m2(3,3);
    cin>>m2;
    cout<<m2;

    Mat res;

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
    Mat copy;
    copy = res = m2;
    cout<<copy;

    cout<<"Working of Copy Constructor for Matrix :"<<endl;
    Mat m3(m1);
    cout<<m3;
	return 0;
}
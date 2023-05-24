//fractional knapsack
#include <iostream>
using namespace std;

class knapsack
{
    int n,*profit, *weight, *pwratio;
    int partition(int, int);
    void quicksort(int, int);
    void swap(int, int);
    public:
    knapsack()
    {
        int i;
        n=4;
        profit= new int[n];
        weight= new int[n];
        pwratio= new int[n];
        for(i=0; i<n; i++)
        {
            cout<<"Enter profit:\t";
            cin>>profit[i];
            cout<<"Enter corresponding weight:\t";
            cin>>weight[i];
            pwratio[i]=profit[i]/weight[i];

        }
    }
    knapsack(int a)
    {
        int i;
        n=a;
        profit= new int[n];
        weight= new int[n];
        pwratio= new int[n];
        for(i=0; i<n; i++)
        {
            cout<<"Enter profit:\t";
            cin>>profit[i];
            cout<<"Enter corresponding weight:\t";
            cin>>weight[i];
            pwratio[i]=profit[i]/weight[i];
        }
    }
    int totalprofit();
};

int knapsack::totalprofit()
{
    int i,c,maxp=0;
    this->quicksort(0,n-1);
    cout<<"Enter the capacity:\t";
    cin>>c;
    for(i=0;i<n;i++)
    {
        if(c>0)
        {
            cout<<weight[i]<<"\t"<<c<<endl;
            if(weight[i]<=c)    maxp+=profit[i];
            else    maxp+=((float)c/weight[i])*profit[i];
            c-=weight[i];
        }
        else break;
    }
    return maxp;
}

void knapsack::swap(int i,int j)
{
    int tmp;
    tmp=pwratio[i];
    pwratio[i]=pwratio[j];
    pwratio[j]=tmp;
    tmp=profit[i];
    profit[i]=profit[j];
    profit[j]=tmp;
    tmp=weight[i];
    weight[i]=weight[j];
    weight[j]=tmp;
}
int knapsack::partition(int low, int high)
{
    int i=low,j=low+1,pivot=low;
    while(j<=high)
    {
        if(pwratio[j]>pwratio[pivot])
        {
            i++;
            swap(i,j);
        }
        j++;
    }
    swap(i,pivot);
    return i;
}

void knapsack::quicksort(int low, int high)
{
    int i;
    if(low<high)
    {
        int q=partition(low,high);
        quicksort(low,q-1);
        quicksort(q+1,high);
    }
}

int main()
{
    knapsack ob; int maxp;
    maxp=ob.totalprofit();
    cout<<"The total profit is:\t"<<maxp;
    return 0;
}
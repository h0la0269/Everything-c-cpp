#include <iostream>
using namespace std;

class array{
    protected:
    int *arr;
    int size;
    public:
    void insert(int n)
    {
        this->arr = new int[n];
        this->size = n;
        for(int i=0;i<n;i++)
            cin>>this->arr[i];
    }
};

class sorted_array: public array{
    public:
    void swap(int& a,int& b)
    {
        int t=a;
        a=b;
        b=t;
    }
    int partition(int low, int high)
    {
        int pivot = this->arr[(low+high)/2];
        int i = (low-1);
        for(int j=low;j<=high-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return (i+1);
    }
    void quicksort(int low, int high)
    {
        if(low<high){
            int p = partition(low,high);
            quicksort(low,p-1);
            quicksort(p+1,high);
        }
    }
};
class search_array: public array{
    public:
    virtual int search()=0;
};

class linear_search: public search_array{
    public:
    int search(int val){
        for(int i=0;i<size;i++)
        {
            if(arr[i]==val)
                return i;
        }
    }
};
class binary_search: public sorted_array, public search_array{
    public:
    int search();
};
int main ()
{
    
    return 0;
}
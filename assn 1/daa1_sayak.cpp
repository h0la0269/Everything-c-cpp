/*Given an array. Let us assume that there can be duplicates in the list.
    Write a Program to search for an element in the list in such a way 
        that we get the highest index if there are duplicates.*/
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>array,int target)
{
    int i = 0;
    int j = array.size() - 1;
    int count = 0;
    while(i < j)
    {
        if(array[j] == target)
        {
            return j + 1;
        }
        if(array[i] == target)
        {
            count = i;
            i++;
        }
        else if(array[j] != target && array[i] != target)
        {
            j--;
            i++;
        }
    }
    if(count > 0)
    {
        return count + 1;
    }
    return 0;
}
int main()
{
    vector<int>array={1,5,8,6,9,1,4,1,8,6};
    int target = 5;
    int result = search(array,target);
    if(result == 0)
    {
        cout << "Key Not Available";
    }
    else
    {
        
        cout << "The  index of " << target <<" is: " << result <<" " <<" index start from 1 not from zero";
    }
    return 0;
}
// index of 5 is 2;
// because index start from 1
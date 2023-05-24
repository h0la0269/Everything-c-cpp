/*Write a program for finding ai and j in an array 
A for any key such that A[j]^2 + A[i]^2 == key*/
#include<bits/stdc++.h>
using namespace std;

pair<int,int> search(vector<int>arr,int target)
{
    pair<int,int>result;
    map<int,int>mp;
    for(int i = 0;i < arr.size();i++)
    {
        mp[arr[i]*arr[i]] = i;
    }

    for(int i = 0;i < arr.size();i++)
    {
        auto it = mp.find(target - (arr[i]*arr[i]));
        if(it != mp.end())
        {
            result.first = i + 1;
            result.second = mp[target - (arr[i]*arr[i])] + 1;
            break;
        }
    }
    return result;
}
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    pair<int,int>result;
    result = search(arr,25);
    if(result.first == 0 && result.second == 0)
    {
        cout << "No Combination Available";
    }
    else
    { 
       cout << "Index i is : " <<result.first << endl <<"Index j is : " << result.second;
       cout<< " index start from 1 not from zero";
    }
    
    return 0;
}
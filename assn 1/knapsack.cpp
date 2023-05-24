//fractional knapsack
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,pair<int,int>> m1, pair<int,pair<int,int>> m2){
    return m1.first> m2.first;
}

int profit(vector<pair<int,int>>& v,int sackWeight){
    int len=v.size(),sum=0, maxProfit=0,remainingWeight=sackWeight;
    vector<pair<int,pair<int,int>>> ratio;
    for(int i=0;i<len;i++){
        ratio.push_back(make_pair(v[i].first/v[i].second,make_pair(v[i].second,v[i].first)));
    }
    sort(ratio.begin(),ratio.end(),compare);
    for(auto i: ratio){
        int wgt=i.second.first;
        if(remainingWeight>0){
            if(wgt<=remainingWeight){
                maxProfit+=i.second.second;
            }
            else {
                maxProfit+=((float)remainingWeight/wgt)*i.second.second;
            }
            remainingWeight-=wgt;
        }
    }
    return maxProfit;
}

int main(){
    int n,pr,wt,w;
    vector<pair<int,int>> v;
    cout<<"\nFractional Knapsack\n\nEnter no.of items: ";
    cin>>n;
    while(n--){
        cout<<"Enter profit: ";
        cin>>pr;
        cout<<"Enter weight: ";
        cin>>wt;
        v.push_back(make_pair(pr,wt));
    }
    cout<<"Enter weight of the sack: ";
    cin>>w;
    cout<<"Total Profit:\t"<<profit(v,w)<<endl;
    return 0;
    
}
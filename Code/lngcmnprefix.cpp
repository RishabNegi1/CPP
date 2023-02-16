#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    unordered_map<int,int>um;
    for(i=0;i<n;i++)
    {
        um[a[i]]++;
    }
    vector<pair<int,int>>b;
    for(auto i=um.begin();i!=um.end();i++)
    {
        if(i->second>1)
        {
            cout<<i->first;
        }
    }
    
}
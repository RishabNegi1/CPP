#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    unordered_map<int,int>um;
    int i,sum=0,count=0,n,k,x=0;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum==k)
        {
            count++;
        }
        x=sum-k;
        if(um.find(x)!=um.end())
        {
            count=um[x]+count;
        }
        um[sum]++;
    }
    cout<<count;
}

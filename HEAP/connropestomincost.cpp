#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,sum=0;
    vector<int>a;

    cout<<"Enter the limit";
    cin>>n;

    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>mh;
    for(i=0;i<n;i++)
    {
        mh.push(a[i]);
    }
    while(mh.size()>=2)
    {
        int first=mh.top();
        mh.pop();
        int second=mh.top();
        mh.pop();
        sum=sum+first+second;
        mh.push(first+second);
    }
    cout<<"sum:- "<<sum<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,j,k;
    cout<<"enter the limit:- ";
    cin>>n;
    vector<vector<int>>a(2,vector<int>(n,0));

    cout<<"enter the element:- ";
    for(i=0;i<n;i++)
    {
        vector<int>c;
        for(j=0;j<2;j++)
        {
            cin>>x;
            c.push_back(x);
        }
        a.push_back(c);
    }

    cout<<"->"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j];
        }
    }
    cout<<"K closest from origin";
    cin>>k;
    priority_queue<pair<int,pair<int,int>>>mh;

    for(i=0;i<n;i++)
    {
        mh.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});

        while(mh.size()>k)
        {
            mh.pop();
        }
    }

    while(mh.size()>0)
    {
        pair<int,int>p =mh.top().second;
        cout<<p.first<<p.second<<endl;
        mh.pop();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int k,i,x,n;

    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the elements: - ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<"enter the Kth smallest no"<<endl;
    cin>>k;

    priority_queue<int,vector<int>,greater<int>>mih;

    for(i=0;i<n;i++)
    {
        mih.push(a[i]);
        if(mih.size()>k)
        {
            mih.pop();
        }
    }

    while(mih.size()>0)
    {
        cout<<"kth largest elements:- "<<mih.top()<<endl;
        mih.pop();
    }
    
}
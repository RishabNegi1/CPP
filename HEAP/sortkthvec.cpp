#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>a;
vector<int>b;
    int k,i,x,n;

    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the elements: - ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<"enter the K element for sorting"<<endl;
    cin>>k;

    priority_queue<int,vector<int>,greater<int>>mih;

    for(i=0;i<n;i++)
    {
        mih.push(a[i]);
        if(mih.size()>k)
        {
            b.push_back(mih.top());
            mih.pop();
        }
    }
    while(!mih.empty()){
        b.push_back(mih.top());
        mih.pop();
    }
    cout<<"sorted"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
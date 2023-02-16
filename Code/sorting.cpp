#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>a;
vector<int>b;
    int i,x,n;

    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the elements: - ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    priority_queue<int,vector<int>,greater<int>>mih;

    for(i=0;i<n;i++)
    {
        mih.push(a[i]);
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
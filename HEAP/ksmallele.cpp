#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int i,k,n,x;

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
    priority_queue<int>mh;

    for(i=0;i<n;i++)
    {
        mh.push(a[i]);
        if(mh.size()>k)
        {
            mh.pop();
        }
    }

    cout<<"Kth smallest element:- "<<mh.top()<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int k,i,x,n,y;

    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the elements: - ";
    for(i=0;i<n;i++)
    {
        cin>>y;
        a.push_back(y);
    }

    cout<<"enter the Kth smallest no"<<endl;
    cin>>k;
    cout<<"Enter the element x";
    cin>>x;

    priority_queue<pair<int,int>>mh;
    for(i=0;i<n;i++)
    {
        mh.push({abs(a[i]-x),a[i]});
        if(mh.size()>k)
        {
            mh.pop();
        }
    }
    while(mh.size()>0)
    {
        cout<<"The nearest elements:- "<<mh.top().second<<endl;
        mh.pop();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    stack<int>s;
    int i,n,x;

    cout<<"Enter the limit:- ";
    cin>>n;
    
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<"The Vector"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i] ;
    }

    vector<int>b;

    for(i=n-1;i>=0;i--)
    {
        s.push(a[i]);
        b.push_back(s.top());
    }


    cout<<"Stack"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i] ;
    }
    return 0;
}
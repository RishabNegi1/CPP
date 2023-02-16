#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;

    int m,n,cnt,med;
    
    cout<<"Enter the first limit:- ";
    cin>>n;
    
    cout<<"Enter the elements of first vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    cout<<"The first Vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Enter the second limit:- ";
    cin>>n;

    cout<<"Enter the elements of second vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }

    cout<<"The second Vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }

    set<int>s;
    vector<int>c;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(auto i=s.begin();i!=s.end();i++)
    {
        c.push_back(*i);
    }

    int x=s.size();

    s.clear();
    
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]);
    }
    for(auto i=s.begin();i!=s.end();i++)
    {
        c.push_back(*i);
    }
    int y=s.size();
    int z=x+y;

    sort(c.begin(),c.end());
    cout<<"Result:-"<<endl;
    for(int i=0;i<z;i++)
    {
        cout<<c[i]<<endl;
    }

    cout<<"Median:- ";
    if(z%2==0)
    {
        med=c[z/2]+c[(z/2)-1];
        cout<<med/2<<endl;
    }
    else{
        cout<<c[z/2]<<endl;
    }
    return 0;
}
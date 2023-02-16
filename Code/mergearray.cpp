#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;
    int i,n,x,y,m;
    cin>>n;
    cin>>m;
    
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cout<<"next"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>y;
        b.push_back(y);
    }

    for(i=0;i<m;i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());

    for(i=0;i<n+m;i++)
    {
        cout<<a[i];
    }

}
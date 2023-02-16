#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int i,n,x,c=0;

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

    unordered_map<int,int>um;
    for(i=0;i<n;i++)
    {
        um[a[i]]++;
    }
    for(auto i=um.begin();i!=um.end();i++)
    {
        if(i->second==1)
        {
            cout<<"no"<<endl;
        }
        else if(i->second==2 || i->second==3)
        {
            c+=1;
        }
        else if(i->second>3)
        {
            c+=i->second/2;
        }
    }
    cout<<"count"<<c<<endl;

}
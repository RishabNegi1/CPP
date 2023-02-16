#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];   
    int i,n,x,y,t;
    cout<<"Enter the limit string"<<endl;
    cin>>n;
    cout<<"Enter the string"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }

    cout<<"Freq"<<endl;
    vector<pair<char,int>>a;
    map<char,int>m;
    for(i=0;i<n;i++)
    {
        m[str[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<i->second;
    }
}
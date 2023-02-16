#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;
    int i,n,m;

    cout<<"Enter the limit:- ";
    cin>>n;
    
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    cout<<"Enter the second limit:- ";
    cin>>m;

    cout<<"The Vector"<<endl;
    for(i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }

    int mn=0;
    for(i=0;i<m;i++)
    {
        mn= mn ^ b[i];
    }

    for(i=0;i<n;i++)
    {
        mn= mn ^ a[i];
    }
    
    cout<<"Missing Elements:- "<<mn;
    return 0;
}
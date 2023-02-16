#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int>a;

    int i,n,k;

    cout<<"Enter the limit:- ";
    cin>>n;
    
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    cout<<"The Vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Rotate by:- "<<endl;
    cin>>k;

    stack<int>s;
    vector<int>b;
    vector<int>c;
    for(i=0;i<n;i++)
    {
        s.push(a[i]);
        if(i<=k)
        {
            b.push_back(s.top());
            s.pop();
        }
        else if(i>k){
            c.push_back(s.top());
            s.pop();
        } 
    }

    int x=b.size();
    int y=c.size();

    for(i=0;i<x;i++)
    {
        cout<<"Rotate by:- "<<endl;
        c.push_back(b[i]);
    }
    for(i=0;i<x+y;i++)
    {
        cout<<c[i]<<endl;
    }
    return 0;
}
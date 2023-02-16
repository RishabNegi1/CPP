#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0,c=1,d,i,n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<a<<b<<c;

    for(i=2;i<n;i++)
    {
        d=c+a+b;
        cout<<d;
        a=b;
        b=c;
        c=d;
    }
}
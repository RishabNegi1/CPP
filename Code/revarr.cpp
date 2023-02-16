#include<iostream>
using namespace std;

int main()
{
    int i,n,a[10],b[10];

    cout<<"Enter the limit:- ";
    cin>>n;
    
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=n-1;i>=0;i--)
    {
        b[i]=a[i];
    }

    cout<<"b"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
}

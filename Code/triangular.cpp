#include<iostream>
using namespace std;

int main()
{
    int a=1,b=1,c,i,n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<a;

    for(i=1;i<n;i++)
    {
        c=a+b+1;
        cout<<c;
        b++;
        a=c;
    }
}
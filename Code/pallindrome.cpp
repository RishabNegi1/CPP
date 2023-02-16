#include<iostream>
using namespace std;

int main()
{
    int n,i,rev=0,rem;
    cin>>n;
    int num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(num==rev)
    {
        cout<<num<<"is Pallin";
    }
}
#include<iostream>
using namespace std;


int lsearch(int a[], int n, int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10],i,k,n;
    cout<<"Enter the limit of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements to be found"<<endl;
    cin>>k;
    int j=lsearch(a,n,k);
    if(j==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<<j<<endl;
    }
    return 0;
}

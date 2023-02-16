#include<iostream>
using namespace std;

int binary(int a[], int n, int k, int l, int r)
{
    int i,mid;
    mid=l+(r - l)/2;
    if(k<mid)
    {
        binary(a,n,k,l,mid);
        for(i=0;i<n;i++)
          {
             if(k==a[i])
             {
                 return i;
             }
          }
    }
    else if(k>mid)
    {
         binary(a,n,k,mid+1,r);
         for(i=0;i<n;i++)
           {
             if(k==a[i])
             {
                 return i;
             }
           }
    }
    return -1;
}

int main()
{
   int a[10],i,k,n,r;
    cout<<"Enter the limit of the array"<<endl;
    cin>>n;
    r=n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements to be found"<<endl;
    cin>>k;
    int j=binary(a,n,k,0,n);
    if(j==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<<j<<endl;
    }
    return 0;
}

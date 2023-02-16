#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter limit"<<endl;
    cin>>n;

    int a[n],maxr[n],maxl[n],water[n],i,sum=0;

    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    maxl[0]=a[0];
    for(i=1;i<n;i++)
    {
        maxl[i]=max(maxl[i-1],a[i]);
    }

    maxr[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        maxr[i]=max(maxr[i+1],a[i]);
    }

    for(i=0;i<n;i++)
    {
        water[i]=min(maxl[i],maxr[i])-a[i];
    }

    for(i=0;i<n;i++)
    {
        sum=sum+water[i];
    }

    cout<<"Water Trapperd "<<sum<<endl;
    return 0;
}
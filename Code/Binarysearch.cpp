#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>a, int key, int n)
{
    int end=0,mid,start=0;
    start=0;
    
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;

        if(key==mid)
        {
            return mid;
        }
        else if(key<mid)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int>a;
    int i,n,key,x;

    cout<<"Enter the limit"<<endl;
    cin>>n;

    cout<<"Key to be found"<<endl;
    cin>>key;
    cout<<"Enter the Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    int mid = bs(a,key,n);
    for(i=0;i<n;i++)
    {
        if(a[i]==mid)
        {
            cout<<i;
        }
    }
    
}
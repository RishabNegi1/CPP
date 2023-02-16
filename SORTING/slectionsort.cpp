#include<iostream>
using namespace std;

void selection(int a[],int n){
    int i,j,min=0,pos=0;
    for(i=0;i<n;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
              min=a[j];
              pos=j;
            }
        }
        if(pos!=0)
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
}

int main(){
  int a[10],n,i,j;
  cout<<"Enter the limit"<<endl;
  cin>>n;
  cout<<"Enter the array elements"<<endl;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  selection(a,n);
  cout<<"Sorted array"<<endl;
  for(i=0;i<n;i++)
  {
      cout<<a[i];
  }
  return 0;
}


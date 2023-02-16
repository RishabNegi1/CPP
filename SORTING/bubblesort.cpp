#include<iostream>
using namespace std;

void bubble(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
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
  bubble(a,n);
  cout<<"Sorted array"<<endl;
  for(i=0;i<n;i++)
  {
      cout<<a[i];
  }
  return 0;
}

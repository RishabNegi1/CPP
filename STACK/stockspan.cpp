#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    stack<int>s;
    int i,n,x,c=1;

    cout<<"Enter the limit:- ";
    cin>>n;
    
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<"The Vector"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i] ;
    }

    vector<int>b;

    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            b.push_back(1);
        }
        else if(s.size()>0 && s.top()>a[i]){
            b.push_back(1);
        }
        else if(s.size()>0 && s.top()<=a[i])
        {
            while(s.size()>0 && s.top()<=a[i])
            {
                c++;
                s.pop();
            }
            if(s.size()==0)
            {
                b.push_back(1);
            }
            else{
                b.push_back(c);
            }
        }
        s.push(a[i]);
    }

    cout<<"Nearest Greatest"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i] ;
    }
    return 0;
}
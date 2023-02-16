#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int i,n,x,pi=-1;

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

    stack<pair<int,int>>s;
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            b.push_back(n);
        }
        else if(s.size()>0 && s.top().first<a[i]){
            b.push_back(i+1);
        }
        else if(s.size()>0 && s.top().first>=a[i])
        {
            while(s.size()>0 && s.top().first>=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                b.push_back(n);
            }
            else{
                b.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }
    while (s.size()>0)
    {
        s.pop();
    }
    

    reverse(b.begin(),b.end());

    vector<int>c;

    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            c.push_back(pi);
        }
        else if(s.size()>0 && s.top().first<a[i]){
            c.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=a[i])
        {
            while(s.size()>0 && s.top().first>=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                c.push_back(pi);
            }
            else{
                c.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }

    vector<int>e;
    cout<<"width"<<endl;
for(i=0;i<n;i++)
{
    int d=b[i]-c[i]-1;
    e.push_back(d);
    cout<<e[i]<<endl;
}

vector<int>max;
for(i=0;i<n;i++)
{
   int pr=a[i]*e[i];
    max.push_back(pr);
}
cout<<"ele"<<endl;
for(i=0;i<n;i++)
{
    cout<<max[i]<<endl;
}

int m=max[0];
for(i=0;i<n;i++)
{
    if(max[i]>m)
    {
        m=max[i];
    } 
}
cout<<"Max Area"<<m;
    return 0;
}
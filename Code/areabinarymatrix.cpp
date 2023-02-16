#include<bits/stdc++.h>
using namespace std;

int mah(vector<int>v)
{
    int i,pi=-1;
    
    vector<int>b;
    int n=v.size();
    stack<pair<int,int>>s;
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            b.push_back(n);
        }
        else if(s.size()>0 && s.top().first<v[i]){
            b.push_back(i+1);
        }
        else if(s.size()>0 && s.top().first>=v[i])
        {
            while(s.size()>0 && s.top().first>=v[i])
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
        s.push({v[i],i});
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
        else if(s.size()>0 && s.top().first<v[i]){
            c.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=v[i])
        {
            while(s.size()>0 && s.top().first>=v[i])
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
        s.push({v[i],i});
    }

vector<int>e;
for(i=0;i<n;i++)
{
    int d=b[i]-c[i]-1;
    e.push_back(d);
}

vector<int>maxi;
for(i=0;i<n;i++)
{
   int pr=v[i]*e[i];
    maxi.push_back(pr);
}

int m=maxi[0];
for(i=0;i<n;i++)
{
    if(maxi[i]>m)
    {
        m=maxi[i];
    } 
}

return m;

}


int main()
{
    vector<vector<int>>a;
    vector<int>v;
    int i,n,x,m,j,sum;

    cout<<"Enter the rows limit"<<endl;
    cin>>m;

    cout<<"Enter the col limit"<<endl;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    for(i=0;i<m;i++)
    {
        vector<int>c;
        for(j=0;j<n;j++)
        {
            cin>>x;
            c.push_back(x);
        }
        a.push_back(c);
    }

    cout<<"The Matrix"<<endl;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
       {
          cout<<a[i][j];
       }
    }

    for(int j=0;j<n;j++)
    {
        v.push_back(a[0][j]);
    }
    int mx=mah(v);

    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                v[j]=0;
            }
            else{
                v[j]+=a[i][j];
            }
            mx=max(mx,mah(v));
        }   
    }
    cout<<"max area "<<mx<<endl;
    return 0;
}
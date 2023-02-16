#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int k,i,x,n,y;

    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the elements: - ";
    for(i=0;i<n;i++)
    {
        cin>>y;
        a.push_back(y);
    }

    cout<<"Top K"<<endl;
    cin>>k;

    unordered_map<int,int>um;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater <pair<int,int>>>mh;

    for(i=0;i<n;i++)
    {
        um[a[i]]++;
    }
    for(auto i=um.begin();i!=um.end();i++)
    {
        mh.push({i->second,i->first});
        if(mh.size()>k)
        {
            mh.pop();
        }
    }
    while(mh.size()>0)
    {
        cout<<"The Highest frequency"<<mh.top().second;
        mh.pop();
    }
    return 0;
}
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

    unordered_map<int,int>um;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater <pair<int,int>>>mh;

    for(i=0;i<n;i++)
    {
        um[a[i]]++;
    }
    for(auto i=um.begin();i!=um.end();i++)
    {
        mh.push({i->second,i->first});
    }
    cout<<"The min frequency"<<mh.top().second;
    return 0;
}
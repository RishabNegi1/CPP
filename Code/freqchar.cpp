#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<char,int>>a;
    vector<pair<char,int>>b;
    unordered_map<char,int>m;
    int i,n;
    string str;

    getline(cin,str);

    n=str.size();
    for(i=0;i<n;i++)
    {
        m[str[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>1)
        {
            a.push_back(make_pair(i->first,i->second));
            //sort(a->second.i.begin(), a->second.i.end());
        }
        else{
            b.push_back(make_pair(i->first,i->second));
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a.at(i).first<<a.at(i).second<<endl;
    }
    
}
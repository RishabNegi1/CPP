#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{ 
    unordered_map<string,int>um;

    um["a"]=1;
    um["b"]=2;
    um["c"]=3;
    um["d"]=4;

    /*for(auto a : um)
    {
        cout<<a.first<<a.second<<endl;
    }
    cout<<" - "<<endl;
    for(auto i=um.begin();i!=um.end();i++)
    {
        cout<<i->first<<i->second<<endl;
    }

    cout<<" - "<<endl;
    */
   int c=0;
    string key="a";
    if(um.find(key)!=um.end())
    {
        c+=um[key];
        cout<<"f"<<endl;
    }
    cout<<"count"<<c<<endl;

    /*cout<<" - "<<endl;
    if(um.find(key)!=um.end())
    {
        auto temp=um.find(key);
        cout<<temp->first<<endl;
        cout<<temp->second<<endl;
    }

    cout<<" - "<<endl;

    um.insert(make_pair("e",5));
    for(auto i=um.begin();i!=um.end();i++)
    {
        cout<<i->first<<i->second<<endl;
    }
    */
}
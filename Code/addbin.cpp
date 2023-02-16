#include<iostream>
using namespace std;

int main()
{
    string s,str;
    getline(cin,s);
    getline(cin,str);
    int n=s.size();
    int m=str.size();
    int c=0,i=0;
    string ans="";
    while(i<n || i<m || c!=0)
    {
        int x=0;
        if(i<n && s[n-1]=='1')
        {
            x=1;
        }

        int y=0;
        if(i<m && str[m-1]=='1')
        {
            y=1;
        }

        ans=to_string((x+y+c)%2) + ans;
        c=(x+y+c)/2;
        i++;
    }
    cout<<ans;

}
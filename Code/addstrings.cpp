#include<iostream>
using namespace std;

int main()
{
    string s1="1282",s2="321";
    int l=s1.size()-1;
    int m=s2.size()-1;
    int carry=0,sum=0,val=0;
    while(l>=0 || m>=0 || carry!=0)
    {
        int ival=(s1.at(l)-'0');
        l--;
        int jval=(s2.at(m)-'0');
        m--;

        sum = carry+ival+jval;
        val = (sum%10) + val;
        carry=val/10;
    }
    cout<<val;
}



    

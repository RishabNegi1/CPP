#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums;
    int i,n,j,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int infpt=0;
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                infpt=i;
                break;
            }
        }
        if(infpt==0)
        {
            sort(nums.begin(),nums.end());
        }
        else{
            int toswap=nums[infpt-1];
            for(j=infpt;j<n;j++)
            {
                if(nums[j]-toswap>0)
                {
                    temp=nums[j];
                    nums[j]=nums[infpt-1];
                    nums[infpt-1]=temp;
                }
            }
            sort(nums.begin()+infpt,nums.end());
        }
        for(i=0;i<n;i++)
        {
            cout<<nums[i];
        }
}


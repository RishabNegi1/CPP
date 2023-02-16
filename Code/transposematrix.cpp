#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int>> vect;
	int i,j,n,m;
	cin>>n;
    cin>>m;
	
	for (i = 0; i < n; i++)
	{
		vector<int>c;
		for (j=0;j<m;j++)
		{
			int x;
			cin>>x;
			c.push_back(x);
		}	
		vect.push_back(c);
	}

    int mi=vect[0].size();
	int no=vect.size();
    cout<<mi<<no<<endl;

    for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
        {
            swap(vect[j][i],vect[i][j]);
        }
	}

    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
        {
            cout<<vect[i][j];
        }
        cout<<endl;
	}
    for(i=0;i<n;i++)
    {
        reverse(vect[i].begin(),vect[i].end());
    }
       cout<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
        {
            cout<<vect[i][j];
        }
        cout<<endl;
	}
}
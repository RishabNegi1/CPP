#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> vect;
	int i,g,n,m;
	cin>>n;
	cin>>m;
	
	for (i = 0; i < n; i++)
	{
		vector<int>c;
		for (g=0;g<m;g++)
		{
			int x;
			cin>>x;
			c.push_back(x);
		}	
		vect.push_back(c);
	}
	
	vector<int>b;
	
	int siz=b.size();
	int top=0;
	int left=0;
	int right=n-1;
	int bottom=m-1;
	int dir=0;
	while(top<=bottom && left<=right)
	{
		if(dir==0)
		{
			for(i=left;i<=right;i++)
		{
			b.push_back(vect[top][i]);
		}
		top++;
		}
		
		else if(dir==1)
		{
			for(i=top;i<=bottom;i++)
		{
			b.push_back(vect[i][right]);
		}
		right--;
		}
		
		else if(dir==2)
		{
			for(i=right;i>=left;i--)
		{
			b.push_back(vect[bottom][i]);
		}
		bottom--;
		}
		
		else if(dir==3)
		{
			for(i=bottom;i>=top;i--)
		{
			b.push_back(vect[i][left]);
		}
		left++;
		}
		dir=(dir+1)%4;
	}
	for(i=0;i<b.size();i++)
	{
		cout<<b[i];
	}
	return 0;
}

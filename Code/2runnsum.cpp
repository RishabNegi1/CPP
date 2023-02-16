#include <iostream>
#include <vector>
using namespace std;

void r(vector<int>a,int n) {
        int sum1=0,sum=0,b=2;
        for(int i=0;i<n;i+=b)
        {
            sum+=a[i];
        }
        for(int i=1;i<n;i+=b)
        {
            sum1+=a[i];
        }
        int s=max(sum1,sum);
        cout<<s;
}
int main() {
	vector<int>a;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
	r(a,n);
}
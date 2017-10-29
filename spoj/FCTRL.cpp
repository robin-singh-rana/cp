#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0,r=5;
		while(r<=n)

		{
			// cout<<",";
			ans=ans+n/r;
			r=r*5;

		}
		cout<<ans<<endl;
	}
}
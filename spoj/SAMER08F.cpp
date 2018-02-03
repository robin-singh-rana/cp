#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		int ans=0;
		int m=n;
		while(n--)
		{
			ans+=(m*m);
			m--;
		}
		cout<<ans<<endl;
	}
}
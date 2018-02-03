#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
			break;
		int a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0)
		{
			cout<<"-1\n";
			continue;
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>(sum/n))
				ans+=a[i]-(sum/n);
		}
		cout<<ans<<endl;
	}
}
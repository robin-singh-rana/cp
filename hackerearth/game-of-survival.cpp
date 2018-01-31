#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s[n],a[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>s[i];
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>a[i];
		}
		int flag;
		sort(a,a+n);
		sort(s,s+n);
		for(int i=0;i<n;i++)
		{
			if(s[i]>a[i])
			{
				flag=1;
				continue;
			}
			else
			{
				flag=0;
				break;
			}

		}
		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
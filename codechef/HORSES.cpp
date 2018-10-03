//nageen9211
#include "bits/stdc++.h"
using namespace std;
 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n],sum[n-1]={0};
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			/* code */
		}
		sort(a,a+n);
		for (int i = 0; i < n-1; ++i)
		{
			sum[i]=a[i+1]-a[i];
			/* code */
		}
		sort(sum,sum+n-1);
		cout<<sum[0]<<endl;
	}
	return 0;
}

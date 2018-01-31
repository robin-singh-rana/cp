#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}int p=0;
	vector < set <int> > v;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			for(int k=i;k<=j;k++)
				v[p].insert(a[k]);
			p++;
		}
		/* code */
	}
	cout<<v.size();
}
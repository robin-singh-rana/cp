#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<int> v;
		int a;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		std::vector<int> v1;
		for(int i=0;i+k-1<n;i++)
		{
			v1.push_back(v[i+k-1]-v[i]);

		}
		sort(v1.begin(), v1.end());
		cout<<v1[0]<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		v.push_back(t);
	}
	 
	long long int q;
	cin>>q;
	while(q--)
	{
		long long int l,r,k;
		cin>>l>>r>>k;
		long long sum=0;
		for(int i=l-1;i<r;i++)
		{
			if(v[i]>=k)
			{
			 sum = sum + v[i];
			}
			
		}
		cout<<sum<<endl;
			
	}
}
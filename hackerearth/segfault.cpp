#include<bits/stdc++.h>
using namespace std;
long long  M=1000000007;
int main()
{
	vector<pair< int, int> > v;
	v[0].first=1;
	v[0].second=3;
	v[1].first=8;
	v[1].second=17;
	for(int i=2;i<M%10;i++)
	{
		v[i].first=int(((int(v[i-1].first)+int(v[i-1].second))*2)%M)+int(((int(v[i-2].first)+int(v[i-2].second))*3)%M);
		v[i].second=v[i].first+pow(3,i);
	}
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cout<<v[k-1].first<<endl;
	}
	return 0;

}
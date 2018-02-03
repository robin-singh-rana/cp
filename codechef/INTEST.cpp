#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,p;
	cin>>n>>k;
	int count=0;
	while(n--)
	{
		cin>>p;
		if(p%k==0)
			count++;

	}
	cout<<count;
}
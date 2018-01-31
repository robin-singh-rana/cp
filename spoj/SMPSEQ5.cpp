#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q,flag;
	cin>>p;
	int a[p];
	for(int i=0;i<p;i++)
		cin>>a[i];
	cin>>q;
	int b[q];
	for(int i=0;i<q;i++)
		cin>>b[i];
	for(int i=0;i<min(p,q);i++)
	{
		if(a[i]==b[i])
				{
					cout<<i+1<<" ";
				}
	}
	cout<<"\n";
}

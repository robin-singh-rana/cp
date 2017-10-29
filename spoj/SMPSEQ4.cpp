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
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			if(a[i]==b[j])
				{
					flag=1;
					break;
				}
				else
					flag=0;
		}
		if(flag==1)
			cout<<a[i]<<" ";
	}
}

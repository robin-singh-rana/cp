#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q,x,flag;
	cin>>p>>x;
	int a[p];
	for(int i=0;i<p;i++)
		cin>>a[i];
	
	int b[p];
	for(int i=0;i<p;i++)
		cin>>b[i];
	for(int i=0;i<p;i++)
	{
		int m=i-x;
		if(m<0)
			m=0;
		for(int j=m;j<i+1+x;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
				continue;
			}
		}
		if(flag==1)
		cout<<i+1<<" ";
	}
	cout<<"\n";
}

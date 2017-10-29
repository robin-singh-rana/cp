#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,flag=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j!=0)
					flag=0;
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
				if(i!=1)
				cout<<i<<"\n";

		}
		cout<<"\n";
	}
}
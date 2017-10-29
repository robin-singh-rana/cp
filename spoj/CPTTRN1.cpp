#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)

	{
		int l ,c ,flag=3;
		cin>>l>>c;
		for(int i=1;i<=l;i++)
		{
			flag=3;
			for(int j=1;j<=c;j++)
			{

				if(flag==3)
				{
					if(i%2==0)
				{
					cout<<".";
					flag=0;
					continue;
				}
				else
				{
					cout<<"*";
					flag=1;
					continue;
				}
				}
				if(flag==0)
				{
					cout<<"*";
					flag=3;
					continue;
				}
				else if(flag=1)
				{
					cout<<".";
					flag=3;
					continue;
				}
			}
			cout<<"\n";
		}
		cout<<"\n";

	}
}
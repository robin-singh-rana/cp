#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)

	{
		int l,c,h,w;
		cin>>l>>c>>h>>w;
			for(int j=1;j<=((w+1)*c+1);j++)
			{
					cout<<"*";
			}
			cout<<"\n";
		for(int i=1;i<=l;i++)
		{
			int x=h;
			while(x--)
			{
				for(int j=1;j<=((w+1)*c+1);j++)
				{
					if(j==1)
					{
						cout<<"*";
							continue;
					}
					else
					{
						for(int s=1;s<=w;s++)
						{
							cout<<".";
						}
						cout<<"*";
						
						j=j+w;
						continue;
					}

				}cout<<"\n";
				
			}
				for(int j=1;j<=((w+1)*c+1);j++)
				{
				
					cout<<"*";
				}
				cout<<"\n";
				



		}
		cout<<"\n";

		

	}
}
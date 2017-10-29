#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)

	{
		int l,c;
		cin>>l>>c;
		for(int i=1;i<=l;i++)
		{
			for(int j=1;j<=c;j++)
			{
				if(i==1||i==l)
				{
					cout<<"*";
					continue;
				}
				else 
				{
					if(j==1||j==c)
						cout<<"*";
					else
						cout<<".";
				}

			}
			cout<<"\n";

		}
		cout<<"\n";

	}
}
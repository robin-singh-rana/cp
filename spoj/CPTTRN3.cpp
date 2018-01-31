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
			for(int j=1;j<=(3*c+1);j++)
			{
					cout<<"*";
			}
			cout<<"\n";
		for(int i=1;i<(3*l+1);i++)
		{
			int x=2;
			while(x--)
			{
				for(int j=1;j<=(3*c+1);j++)
				{
					if(j==1)
					{
						cout<<"*";
							continue;
					}
					else
					{
						cout<<"..*";
						j=j+2;
						continue;
					}

				}cout<<"\n";
				
			}
				for(int j=1;j<=(3*c+1);j++)
				{
				
					cout<<"*";
				}
				cout<<"\n";
				i=i+2;



		}
		cout<<"\n";

		

	}
}
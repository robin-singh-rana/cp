#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag,flag1;
	cin>>t;
	
		std::vector<int> v;
		int a;
		for(int i=0;i<t;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		if(v[0]%2==0)
			flag=1;
		else
			flag=2;
		cout<<flag<<endl;
		if(t==1)
			return 0;
		for(int i=1;i<t;i++)
		{
			if(flag==1)
			{
				if(v[i]%2==0)
				{
					flag1=2;
				}
				else
				{
					flag1=flag;
				}
				flag=flag1;

			}
			else
			{
				if(v[i]%2==0)
				{
					flag1=1;
				}
				else
				{
					flag1=2;
				}
				flag=flag1;
			}

				
				cout<<flag1<<endl;

		}
	
}
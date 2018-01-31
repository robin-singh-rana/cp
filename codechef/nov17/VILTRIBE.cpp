#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a=0,b=0,d=0,flag=0,f=0;
		for(int i=0;i<s.length();i++)
		{
			
			if(s[i]=='A')
			{
				f=1;
				a++;
				if(flag==1)
				{
					a=a+d;
				}
				flag=1;
				d=0;
			}
			else if(s[i]=='B')
			{
				f=1;
				b++;
				if(flag==0)
				{
					b=b+d;
				}
				flag=0;
				d=0;
			}
			else if(s[i]=='.')
			{
				if(f==1)
				{
					d++;
				}
			}
		}
		cout<<a<<" "<<b<<endl;

	}
}
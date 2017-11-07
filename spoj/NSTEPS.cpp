#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if((a==0&&b==0)||a==1&&b==1)
			cout<<a<<endl;
		else if((a==0&&b!=0)||(a>2&&b==0))
			cout<<"No Number"<<endl;
		else

		if(a==b)
			if(a%2==0)
				cout<<2*a<<endl;
			else
				cout<<2*a-1<<endl;
		else if(a<b)
			cout<<"No Number"<<endl;
		else
		{
			if((a+b)%2!=0)
				cout<<"No Number"<<endl;
			else if(a%2==0&&b%2==0)
				 cout<<a+b<<endl;
			else
				cout<<a+b-1<<endl;
		}
	}
}
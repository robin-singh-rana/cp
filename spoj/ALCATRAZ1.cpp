#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int sum=0;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			sum=sum+s[i]-48;
		}
		cout<<sum<<endl;
	}
}
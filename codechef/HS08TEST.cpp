#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	float x;
	cin>>n>>x;
	if(n+0.5>x||n%5!=0)
		cout<<setprecision(2)<<fixed<<x<<endl;
	else
	{
		float bal=x-n-0.5;
		cout<<setprecision(2)<<fixed<<bal;
	}
}
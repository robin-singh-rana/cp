#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n;
	cin>>n;
	while(1)
	{
		n=n/2;
		if(n>=2)
			continue;
		else
			break;
	}
	if(1-n==0)
		cout<<"TAK";
	else
		cout<<"NIE";
}
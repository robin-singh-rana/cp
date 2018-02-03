#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	while(1)
	{
		int a,b,c;	
		cin>>a>>b>>c;
		if(a == b&&b == c&&c== 0)
		{
			break;
		}
		if((c-b)==(b-a))
		{
			cout<<"AP "<<c+(c-b)<<endl;
		}
		else
		{
			cout<<"GP "<<c*(c/b)<<endl;
		}

	}
	return 0;
}
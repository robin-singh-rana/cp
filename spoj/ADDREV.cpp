#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,A=0,B=0,sum,SUM=0,r;
		cin>>a>>b;
		while(a!=0)
		{
			r=a%10;
			A=A*10+r;
			a=a/10;

		}
		while(b!=0)
		{
			r=b%10;
			B=B*10+r;
			b=b/10;
		}
		sum=A+B;
		while(sum!=0)
		{
			r=sum%10;
			SUM=SUM*10+r;
			sum=sum/10;
		}
		cout<<SUM<<endl;
	}

}
#include<bits/stdc++.h>
using namespace std;
int  mult(int x ,int res [],int size)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int p=x*res[i]+carry;
		carry=p/10;
		res[i]=p%10;
	}
	while(carry)
	{
		res[size]=carry%10;
		carry=carry/10;
		size++;
	}
	return size;
}
void factorial(int x)
{
	int res[160];
	res[0]=1;
	int size=1;
	for(int i=2;i<=x;i++)
	{
		size=mult(i,res,size);
	}
	for(int i=size-1;i>=0;i--)
		cout<<res[i];
	cout<<endl;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		factorial(n);
		
	}
	return 0;
}

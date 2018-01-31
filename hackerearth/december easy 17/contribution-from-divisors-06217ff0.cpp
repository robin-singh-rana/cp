 //not solved 
//tle and wrong answer
#include<bits/stdc++.h>
using namespace std;
int fun1(int n)
{
	int sum=0;
	int j;
	while(n!=0)
	{
		j=n%10;
		n=n/10;
		if(j%2!=0)
		sum=sum+j;
	}
	return(sum);	
}
int factors(int n)
{

}
int main()
{
	int q,ans=0;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int n;
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			if(n%j==0)
				ans=ans+fun1(j);

		}
		cout<<ans<<endl;
		
	}
}
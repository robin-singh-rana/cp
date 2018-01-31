// SOLVED
#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int yr)
{
	if((yr%4==0) && (yr%100!=0))
	{
		return true;
	}
	else if(yr%100==0)
	{
		return false;
	}
	else if(yr%400==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int oddDays(int n)
{
	if(isLeapYear(n))
		return (2);
	else
		return(1);
}
int year(int n)
{
	int ans=0;
	ans=ans+oddDays(n);
	while(ans%7!=0)
	{
		n++;
		//cout<<ans;
		ans=ans+oddDays(n);

	}
	return n+1;
}
int main()
{
	int n,m;
	cin>>n;
	if(isLeapYear(n))
		{
			n=n+28;
			m=n;
			if(isLeapYear(n))
				cout<<n;
			else
			{
				while(1)
				{
					m=year(m);
					if(isLeapYear(m))
					{
						cout<<m;
						break;
					}					
				}								
			}
		}
	else
	{
		int ans=year(n);
		cout<<ans;
	}
}
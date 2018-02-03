//https://www.hackerearth.com/problem/algorithm/sallu-bhai-and-ias-8838ac8d
#include<bits/stdc++.h>
using namespace std;
#define M 1000000000000
long long int special_sum(long long int n)
{
	long long int i,sum=0;
	while(n!=0)
	{
		i=n%10;
		n=n/10
		sum=sum+pow(i,i);
	}
	return sum;
}
bool s_troop(long long n, long long int sum)
{
	int i,flag;
	while(n!=0)
	{
		i=n%10;
		n=n/10
		if(i!=0)
		{
			if(sum%i==0)
			{
				flag=1;
				continue;
			}
			else
			{
				flag=0;
				break;
			}

		}
	}
	if(flag==1)
		return true;
	else
		retrun false;
}
using namespace std;
int main()
{
	int q;
	cin<<q;
	while(q--)
	{
		vector <long long int> v(M,0);
		
		long long int l,r,count=0;
		cin>>l>>r;
		for(long long int i=l;i<=r;i++)
		{
			if(v[i]!=0)
			{
				long long int sum=special_sum(i);
				if(s_troop(i,sum))
					{
						v[i]=1;
						count++
					}
				else
				{
					v[i]=2;
				}
			}
			else if(v[i]==1)
				count++;
			else
				continue;
		}
		cout<<count<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<int, greater<int> > s;
		int sum=0;
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				if(n/i==i)
					s.insert(i);
				else
				{
					s.insert(i);
					s.insert(n/i);
				}

			}
			
			
			
		}
		set<int, greater <int>  > :: iterator it;
		for(it = s.begin();it!=s.end();it++)
			{
				if((*it)%2!=0)
				sum=sum+(*it);
			}
		cout<<sum<<endl;	
		
	}
}

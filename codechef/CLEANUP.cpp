#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m;
		vector<int> cook,assistant,finished(n+1,0);
		while(m--)
		{
			cin>>k;
			finished[k]++;
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			//cout<<finished[i]<<"fd";	
			if(finished[i]==0)
				if(flag==0)
				{
					cook.push_back(i);
					flag=1;
				}
				else
				{
					assistant.push_back(i);
					flag=0;
				}
		}
		for(int i=0;i<cook.size();i++)
			cout<<cook[i]<<" ";
		cout<<"\n";
		for(int i=0;i<assistant.size();i++)
			cout<<assistant[i]<<" ";
		cout<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp,c,sum=0,happiness=0;
		cin>>n>>c;
		vector< pair<int,int> > v(n);
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			sum=sum+temp;
			v[i].first=temp;
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>temp;
			happiness=happiness+temp;
			v[i].second=temp;
		}
		if(sum<=c)
		{
			cout<<happiness<<endl;
		}
		else
		{
			sum=0;
			sort(v.begin(), v.end());
			for(int i=0;i<v.size();i++)
			{
				if(sum<c)
				{
					if(v[i].second!=0)
					sum=sum+v[i].second;
				}
				else
				{
					break;
				}

			}
			cout<<sum<<endl;

		}
		


	}
}
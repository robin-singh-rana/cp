#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n;
		vector< pair<int,int> > v;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(),v.end());
		// cout<<endl;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;
		// }
		int count=1,i,j,k=0;
		for( i=1;i<n;i++)
		{
			for(j=k;j<i;j++)
			{
				if(v[j].second<=v[i].first)
				{
					// cout<<"here at "<<i<<" "<<j<<" first :"<<v[i].first<<" second : "<<v[j].second<<endl;
					count++;
					k=i;
					break;
				}
			}

		}
		cout<<count<<endl;

	}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	map< pair <int ,int> ,int > distance;
	int sum,sum2;
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			sum=0;
			sum2=0;
			for(int k=i;k<j;k++)
				sum+=a[k];
			for(int m=j;m<n;m++)
				sum2+=a[m];
			for(int m=0;m<i;m++)
				sum2+=a[m];

			distance.insert(make_pair(make_pair(i,j),min(sum,sum2)));

		}
	}
	map< pair <int ,int> ,int> :: iterator res; 
	// for(res=distance.begin();res!=distance.end();++res)
	// {
	// 	cout<<res->first.first<<" "<<res->first.second<<"   "<<res->second<<endl;
	// }

	while(q--)
	{
		int q1,q2,temp;
		cin>>q1>>q2;
		if(q1>q2)
		{
			temp=q1;
			q1=q2;
			q2=temp;

		}
		 res=distance.find(make_pair(q1,q2));
		cout<<res->second<<endl;

	}
}
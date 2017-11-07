#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int required, friends;
		cin>>required>>friends;
		int stamps[friends];
		for(int j=0;j<friends;j++)
			cin>>stamps[j];
		sort(stamps,stamps+friends);
		int sum=0,number=0;
		int j=friends-1;
			while(sum<required&&j>=0)
			{
				sum=sum+stamps[j];
				number++;
				j--;
				

			}
		
		cout<<"Scenario #"<<i<<":"<<endl;
		if(sum>=required)
			cout<<number<<endl<<endl;
		else
			cout<<"impossible"<<endl<<endl;

	}
}
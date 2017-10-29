#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l;
	cin>>n>>k>>l;
	vector<int> t;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		t.push_back(a);
	}
	sort(t.begin(),t.end());
	int screws=0;
	a=0;
	for(int i=n-1;i>=0;i--)
	{
		screws=screws+t[i];
		if(screws>=l*k)
		{
			a++;
			break;
		}
		a++;
	}
	cout<<a;
}
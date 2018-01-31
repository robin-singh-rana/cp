#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a;
	cin>>n;
	vector<int> s;
	int mex=0,m=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.push_back(a);
		sort(s.begin(), s.end());
		if(s[m]>mex)
		{
			cout<<mex<<" ";
			continue;
		}
		else
		{
			for(int i=m;i<s.size();i++)
			{
				if(s[i]<=mex)
				{
					mex=s[i]+1;
					continue;
				}
				else
				{
					cout<<mex<<" ";
					m=i;
					break;

				}
					

			}

		}

	}
}
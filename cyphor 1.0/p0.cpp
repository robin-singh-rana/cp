#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int a[10]={0};
		string v;
		cin>>v;
		for(int i=0;i<v.length();i++)
		{
			if(v[i]=='0')
				a[0]++;
			else if(v[i]=='1')
				a[1]++;
			else if(v[i]=='2')
				a[2]++;
			else if(v[i]=='3')
				a[3]++;
			else if(v[i]=='4')
				a[4]++;
			else if(v[i]=='5')
				a[5]++;
			else if(v[i]=='6')
				a[6]++;
			else if(v[i]=='7')
				a[7]++;
			else if(v[i]=='8')
				a[8]++;
			else if(v[i]=='9')
				a[9]++;
		}
		// sort(v.begin(), v.end());
		// cout<<v<<endl;
		// for(int i=0;i<10;i++)
		// 	cout<<a[i]<<" mmm";
		int ans;
		ans=a[0]*6+a[1]*2+a[2]*5+a[3]*5+a[4]*4+a[5]*5+a[6]*6+a[7]*3+a[8]*7+a[9]*6;
		cout<<ans<<endl;
	}
}
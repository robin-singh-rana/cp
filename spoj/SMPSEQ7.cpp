#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	sort(a,a+t);
	int f1=1,f2=0,f3=0;
	if(t==1)
	{
		cout<<"No"<<endl;
		return 0;
	}
	else
	{
		for(int i=1;i<t;i++)
		{
			if(f1==1)
			{
				if(a[i]==a[i-1])
				{
					f2=1;
					f1=0;
					continue;
				}

			}
			if(f2==1)
			{
				if(a[i]==a[i-1])
				{
					f3=1;
					break;
				}
				else
				{
					f1=1;
				}

			}
			
		}
		if(f3==1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;

	}
	
}
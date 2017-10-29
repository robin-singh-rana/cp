#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,r1,x2,y2,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		int d;
		d=sqrt(pow(float(x1-x2),2)+pow(float(y1-y2),2));
		//cout<<d;
		int r;
		r=abs(r1-r2);
		if(d<r)
			cout<<"I\n";
		else if(d==r)
			cout<<"E\n";
		else
			cout<<"O\n";

	}
}
#include<bits/stdc++.h>
using namespace std;
int lcm(int n1 , int n2)
{
	int minMultiple;
	minMultiple = (n1>n2) ? n1 : n2;
	while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            return(minMultiple);
            break;
        }
        ++minMultiple;
    }
    
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v;
		for (int i = 1; i <= n; i++)
   		{
     		if(n%i == 0)
     		{
     			v.push_back(i);
     		}
        
   		}
   		int l=v.size();
   		int count=0;
   		vector< pair<int, int> > p;
   		for(int i=0;i<l;i++)
   		{
   			for(int j=l-1;j>=i;j--)
   			{
   				if(lcm(v[i],v[j])==n)
   				{
   					count++;
   					p.push_back(make_pair(v[i],v[j]));
   				}

   			}
   		}
   		cout<<count<<endl;
   		sort(p.begin(),p.end());
   		for(int i=0;i<p.size();i++)
   		{
   			cout<<p[i].first<<" "<<p[i].second<<endl;
   		}
	}

}
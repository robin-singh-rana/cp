#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int flag=1;
       int a,n;
       cin>>a>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a!=0)
            {
                if(arr[i]==0)
                {
                a--;
                }
                else
                {
                    
                    a+=2;
                }
            }
            else
            {
                if(i==(n-1))
                {
                    cout<<"Yes 0"<<endl;
                    break;
                    //flag=0;
                }
                
                else
                {
                    cout<<"No "<<i<<endl;
                    flag=0;
                    break;
                }
                
                
            }
        }
        if(flag!=0)
        cout<<"Yes "<<a<<endl;
   }
   
    return 0;
}

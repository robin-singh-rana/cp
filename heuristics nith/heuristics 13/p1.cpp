#include<bits/stdc++.h>

using namespace std;

int main()
{
	typedef struct {
      unsigned int mantissa_low:32;     
      unsigned int mantissa_high:20;
      unsigned int exponent:11;        
      unsigned int sign:1;
    } tDoubleStruct;
int t;
cin>>t;
while(t--)
{
	double a ;
cin>>a;
tDoubleStruct* b = reinterpret_cast<tDoubleStruct*>(&a);
cout<<b;
}


}
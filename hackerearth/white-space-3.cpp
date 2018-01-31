#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin , s);
	//cout<<s.length();
	int count=0,a=32;
	for(int i=0;i<s.length();i++)
		if(s[i]==a||s[i]=='\t')
			count++;
		cout<<count;
}
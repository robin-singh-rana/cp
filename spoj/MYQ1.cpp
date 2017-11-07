#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int seatNo;
		cin>>seatNo;
		if(seatNo==1)
			cout<<"poor conductor\n";
		else
		{
			 long long int row=seatNo/5;
			 int m=row;
			if(seatNo%5)
				row++;


			if(m*5+1==seatNo)
				row--;
			if(row%2==0)
			{
				if(seatNo%5==0)
					cout<<row<<" A L"<<endl;
				else if(seatNo%5==1)
					cout<<row<<" W L"<<endl;
				else if(seatNo%5==2)
					cout<<row<<" W R"<<endl;
				else if(seatNo%5==3)
					cout<<row<<" M R"<<endl;
				else
					cout<<row<<" A R"<<endl;


			}
			else
			{
				if(seatNo%5==0)
					cout<<row<<" M R"<<endl;
				else if(seatNo%5==1)
					cout<<row<<" W R"<<endl;
				else if(seatNo%5==2)
					cout<<row<<" W L"<<endl;
				else if(seatNo%5==3)
					cout<<row<<" A L"<<endl;
				else
					cout<<row<<" A R"<<endl;

			}
		}
	}
}
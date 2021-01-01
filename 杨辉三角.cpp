//ÕıÈı½Ç 
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i,j,a;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cout<<setw(a-i+1)<<setfill(' ');
		for(j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<endl; 
	}
	system("pause");
	return 0;
 } 
 

//µ¹Èı½Ç 
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i,j,a;
	cin>>a;
	for(i=a-1;i>=1;i--)
	{
		cout<<setw(a-i)<<setfill(' ');
		for(j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<endl;
	 } 
	 system("pause");
	 return 0;
}


#include<iostream>

using namespace std;

int main()
{
	int n,i=2;
	cout<<"ÇëÊäÈë n :";
	cin>>n;
	do{
		while(n%i==0)
		{
			cout<<i;
			n/=i;
			if(n!=1) cout<<"*";
		}
		i++;
	}while(n!=1);
	cout<<endl;
	system("pause");
	return 0;
}

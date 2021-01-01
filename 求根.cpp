#include<iostream> 
#include<cmath>

using namespace std;

int main()
{
	float a,x0,x1;
	cout<<"Enter a positive number: ";
	cin>>a;
	x0=a/2; /*对 x 赋初值 a/2*/
	x1=(x0+a/x0)/2; /*递推公式求出下一个x1*/
	do{
		x0=x1;  /*将 x1 赋值给 x0    得出下一个 x1*/
		x1=(x0+a/x0)/2;
	}while(fabs(x1-x0)>=1e-5);  /* 直到 x1-x0 的绝对值不超过 1e-5*/
	cout<<"The square root of "<<a<<" is "<<x1<<endl;
	system("pause");
	return 0;
}

#include<iostream> 
#include<cmath>

using namespace std;

int main()
{
	float a,x0,x1;
	cout<<"Enter a positive number: ";
	cin>>a;
	x0=a/2; /*�� x ����ֵ a/2*/
	x1=(x0+a/x0)/2; /*���ƹ�ʽ�����һ��x1*/
	do{
		x0=x1;  /*�� x1 ��ֵ�� x0    �ó���һ�� x1*/
		x1=(x0+a/x0)/2;
	}while(fabs(x1-x0)>=1e-5);  /* ֱ�� x1-x0 �ľ���ֵ������ 1e-5*/
	cout<<"The square root of "<<a<<" is "<<x1<<endl;
	system("pause");
	return 0;
}

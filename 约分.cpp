#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,f;
	cout<<"please input a,b,c,d: "<<endl;
	cin>>a>>b>>c>>d;
	e=a*d+c*b;
	f=b*d;
	
	int q;
	
	if(e>f)/*�ٷ���*/
	{
		int e2=f,f2=e;
		q=f2%e2;
		while(q!=0)
	{
		f2=e2;e2=q;q=f2%e2;
	}
		e/=e2;f/=e2;
	 } 
	
	
	else/*�����*/ 
	{
		int e1=e,f1=f; /*Ӧ�������������������Ҫ��ʾ�����ֽ��в���*/ 
		q=f1%e1;/*շת��������Լ�� ����Լ��*/
		while(q!=0)
	{
		e1=f1;f1=q;q=f1%e1;
	}
		e/=e1;f/=e1;
	}
	
	cout<<e<<"/"<<f<<endl;
	system("pause");
	return 0;
}

//Լ��
/*
	int m=����,n=��ĸ;
	int ����q;
	����q= m % n;
	while(����q!=0)
	{
		m = n;n = q;q = m % n ;
	}
	����/=n;��ĸ/=n; 
*/ 

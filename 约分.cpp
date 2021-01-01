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
	
	if(e>f)/*假分数*/
	{
		int e2=f,f2=e;
		q=f2%e2;
		while(q!=0)
	{
		f2=e2;e2=q;q=f2%e2;
	}
		e/=e2;f/=e2;
	 } 
	
	
	else/*真分数*/ 
	{
		int e1=e,f1=f; /*应定义其他变量避免对需要显示的数字进行操作*/ 
		q=f1%e1;/*辗转相除求最大公约数 进行约分*/
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

//约分
/*
	int m=分子,n=分母;
	int 余数q;
	余数q= m % n;
	while(余数q!=0)
	{
		m = n;n = q;q = m % n ;
	}
	分子/=n;分母/=n; 
*/ 

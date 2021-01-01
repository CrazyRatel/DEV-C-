#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("请输入一个三位数："); 
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=a-b*100-c*10;
	printf("个位：%d\n",d);
	printf("十位：%d\n",c);
	printf("百位：%d\n",b);
	return 0;
}

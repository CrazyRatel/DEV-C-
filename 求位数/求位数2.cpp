#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("������һ����λ����"); 
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=a-b*100-c*10;
	printf("��λ��%d\n",d);
	printf("ʮλ��%d\n",c);
	printf("��λ��%d\n",b);
	return 0;
}

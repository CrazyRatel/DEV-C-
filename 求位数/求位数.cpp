#include<stdio.h >
#include<stdlib.h> 
int main()
{
	int number;
	printf("������һ����λ����");
	scanf("%d",&number);
	printf("��λ����%d\n",number%10);     /*��ʮ��ģ��*/ 
	printf("ʮλ����%d\n",number/10%10);
	printf("��λ����%d\n",number/100%10);
	system("pause");
	return 0;
}

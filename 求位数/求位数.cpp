#include<stdio.h >
#include<stdlib.h> 
int main()
{
	int number;
	printf("请输入一个三位数：");
	scanf("%d",&number);
	printf("个位数：%d\n",number%10);     /*除十求模法*/ 
	printf("十位数：%d\n",number/10%10);
	printf("百位数：%d\n",number/100%10);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;/*控制输入的变量*/
    char y[5];/*存放年份*/
    scanf("%s",y);
    l=strlen(y);
	if(l!=4)/*辨别输入的年份是否满四位  若不满足，则向后错位*/
	{
		for(i=0;i<4-l;i++)/*每次错一位 共错4-l次*/ 
		{
			for(j=3;j>0;j--)
			{
				y[j]=y[j-1];
			}
			y[i]='0';	/*将空出的位置  用字符‘0’补齐  不能用数字0*/
			y[5]='\0';
		}
	}
	printf("%s",y); 
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;/*控制输入的变量*/
	float n;
    char y[5];
    scanf("%s %f",y,&n);
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
	int k=-1;/*获得比较的次数*/
	int m=1;
	int a=0;/*年龄*/ 
	for(;y[0]=='3'&&y[1]=='0';)
	{
		for(i=0;i<3;i++)
	{
		for(j=1;j<4;j++)
		{
			if(y[i]!=y[j])
				k++;
		}
	 }
	 m+=k/2;k=-1;
	if(m==n)
	{
		printf("%d %s",a,y);
		break;
	}
	m=1;
	if(y[3]=='9')
	{
		y[3]='0';
		if(y[2]=='9')
		{
			y[2]='0';
			if(y[1]=='9')
			{
				y[1]='0';
				y[0]+=1;
			}
			else y[1]+=1;
		}
		else y[2]+=1;
	}
	else y[3]+=1;
	 a++;
	}
    for(;y[0]!='3';)
    {
	for(i=0;i<3;i++)
	{
		for(j=1;j<4;j++)
		{
			if(y[i]!=y[j])
				k++;
		}
	 }
	 m+=k/2;k=-1;
	if(m==n)
	{
		printf("%d %s",a,y);
		break;
	}
	m=1;
	if(y[3]=='9')
	{
		y[3]='0';
		if(y[2]=='9')
		{
			y[2]='0';
			if(y[1]=='9')
			{
				y[1]='0';
				y[0]+=1;
			}
			else y[1]+=1;
		}
		else y[2]+=1;
	}
	else y[3]+=1;
	 a++;
    }
    
    return 0;
}

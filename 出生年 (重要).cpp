#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;/*��������ı���*/
	float n;
    char y[5];
    scanf("%s %f",y,&n);
    l=strlen(y);
	if(l!=4)/*������������Ƿ�����λ  �������㣬������λ*/
	{
		for(i=0;i<4-l;i++)/*ÿ�δ�һλ ����4-l��*/ 
		{
			for(j=3;j>0;j--)
			{
				y[j]=y[j-1];
			}
			y[i]='0';	/*���ճ���λ��  ���ַ���0������  ����������0*/
			y[5]='\0';
		}
	}
	int k=-1;/*��ñȽϵĴ���*/
	int m=1;
	int a=0;/*����*/ 
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

#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;/*��������ı���*/
    char y[5];/*������*/
    scanf("%s",y);
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
	printf("%s",y); 
	return 0;
}

#include<stdio.h>
main()
{
	int i,a,b=0,x,n;
	printf("������������²������");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		printf("��һ��(�Ǹ���Ŷ):");
		scanf("%d",&a);
		if(a<0)
		{
			printf("Game over!\n");
			break;
		} 
		b++;
		if(a>x) printf("Too big!\n");
		if(a<x) printf("Too small!\n");
		if(a==x)
		{
			if(b==1) 
			{
				printf("Bingo!\n");
				break;
			}
			if(b>1&&b<=3)
			{
				printf("Lucky you!\n");
				break;
			} 
			if(b>3&&b<=n)
			{
				printf("Good guess!\n");
				break;
			} 
		}
		if(a!=x&&b==n) printf("Game over!\n");
	}
}

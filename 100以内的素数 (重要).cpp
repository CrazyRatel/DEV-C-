#include<stdio.h>
#include<math.h> 
int main()
{
	int i,j,s,k=0;
	for(i=2;i<100;i++)
	{
		for(j=1,s=0;j<=sqrt(i);j++)
		{
			if(i%j==0) s+=j;
		}
		if(s==1)
		{
			printf("%6d",i);k++;
		}
		if(k==10)
		{
			printf("\n");
			k=0;
		}
	}
    return 0;
}

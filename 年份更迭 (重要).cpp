#include<stdio.h>
int main()
{
	char y[5];
	gets(y);
    if(y[3]=='9')   /*Äê·İ¸üµü*/
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
	return 0;
}

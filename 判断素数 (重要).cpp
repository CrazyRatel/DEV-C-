#include<stdio.h>
#include<math.h>
int main()
{
  long a[10],i,j,s;
  int l,x,g=0,n;
  scanf("%d",&x);
  for(l=0;l<x;l++)
  {
  	for(n=0;n<x;n++)
  	{
  	scanf("%ld",&a[n]);
    for(i=a[n];i>0;i--)
    {
      for(j=1,s=0;j<sqrt(i);j++)/*提升程序效率*/
      {
        if(i%j==0) s+=j;
      }
      if(s==1)
      {printf("Yes\n");g++;break;
	  }
      else if(s!=i)
      {printf("No\n"); g++;break;
	  }
    }
    if(g==x) break;
    }
    if(g==x) break;
  }
  return 0;
}

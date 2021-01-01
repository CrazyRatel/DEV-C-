#include<stdio.h>
#include<string.h>
int main()
{
  int i,k;
  char a[10000];
  gets(a);
  k=strlen(a); 
  for(i=0;i<k;i++)
  {
    if(a[i]>='0'&&a[i]<='9'){
    	if(a[i+1]=='.'||a[i+1]>='0'&&a[i+1]<='9') printf("%c",a[i]);
    	else printf("%c\n",a[i]);
	}
	else if(a[i]=='-'){
		if(a[i-1]>='0'&&a[i-1]<='9'||a[i+1]>='0'&&a[i+1]<='9'&&a[i-1]!='('&&i!=0) printf("%c\n",a[i]);
		else printf("%c",a[i]);
	}
	else if(a[i]=='+'){
		if(i==0) printf("%c",a[i]);
		else printf("%c\n",a[i]);
	}
	else if(a[i]=='.')
	printf("%c",a[i]);
	else printf("%c\n",a[i]);
  }
  return 0;
}

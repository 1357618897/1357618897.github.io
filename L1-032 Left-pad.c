#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char c;
	scanf("%d %c\n",&n,&c);
	char a[100000],b[100000];
	gets(a);
	int len=strlen(a);
	if(n<=len)
	{	
		for(i=len-n;i<len;i++)
		{
			printf("%c",a[i]);
		}
	}
	else
	{
		for(i=0;i<n-len;i++)
		{
			printf("%c",c);
		}
		printf("%s",a);
	}
	puts(b);
	return 0;
}



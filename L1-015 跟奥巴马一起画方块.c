#include<stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int line = n / 2 + n % 2;
	int i,j;
	for(i=1;i<=line;i++)
	{
		for(j=1; j<=n; j++)	
		{
			printf("%c",c);	
		}
		printf("\n");
	}	
}

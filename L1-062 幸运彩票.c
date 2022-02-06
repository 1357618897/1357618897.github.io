#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char num[6];
	int i,j;
	while(n--)
	{
		scanf("%s",&num);
		int a = 0;
		int b = 0;
		for(i=0; i<3; i++)
		{
			a += num[i] - '0'; 
		}
		for(j=3; j<6; j++)
		{
			b += num[j] - '0';
		}
//		printf("%d %d\n",a,b);
		if(a == b)
		{
			printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
 } 

#include<stdio.h>
int main()
{
	int i = 1;
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n == 250)
		{
			break;
		}
		i++;
	}
	printf("%d",i);
}

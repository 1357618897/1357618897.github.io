#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int sum = 0;
	int i;
	int cnt=0;
	for(i=m; i<=n; i++)
	{
		
		printf("%5d",i);
		cnt++;
		sum+=i;
		if(cnt==5)
		{
			printf("\n");
			cnt=0;
		}
		else if(i == n)
		{
			printf("\n");
		}
		
	}
	printf("Sum = %d",sum);
}

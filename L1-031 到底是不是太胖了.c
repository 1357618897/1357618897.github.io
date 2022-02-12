#include<stdio.h>
#include<math.h>
int n, a, b, c,i,j;
 
main()
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
 
		scanf("%d %d", &a, &b);
		c = (a - 100)*1.8;
 
 
 
		if (fabs(b - c) < (c*0.1))
		{
			printf("You are wan mei!\n");
		}
		if ((fabs(b - c) >= (c*0.1)) && b < c)
		{
			printf("You are tai shou le!\n");
		}
		if ((fabs(b - c) >= (c*0.1)) && b > c)
		{
			printf("You are tai pang le!\n");
		}
	}
 
}




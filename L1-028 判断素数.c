#include <stdio.h>
#include <math.h>
 
int check(int n)
{
	int i;
	if(n==1)
	{
		return 0;
	}
	for(i = 2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
 
int main()
{
	int N,n;
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n);
		if(check(n))
		{
			puts("Yes");
		}
		else
		{
			puts("No");
		}
	}
	return 0;
}
 

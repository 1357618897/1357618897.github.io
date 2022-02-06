#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double num[1010];
	int i;
	// ‰»Î 
	for(i=0; i<n; i++)
	{
		scanf("%lf",&num[i]);
	}
	double sum = 0;
	for(i=0; i<n; i++)
	{
		sum += 1 / num[i];
	}
	printf("%.2f",1 / (sum / n));
	
}

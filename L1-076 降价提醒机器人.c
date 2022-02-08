#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	double price;
	while(n--)
	{
		scanf("%lf",&price);
		if(price < m)
		{
			printf("On Sale! %.1f\n",price);
		}
	}
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char c;
		double a,sum=0;
		scanf("%c %lf",&c,&a);
		getchar();
		if(c == 'M')
		{
			sum = a / 1.09;
			printf("%.2f\n",sum);
		}
		else if(c == 'F')
		{
			sum = a * 1.09;
			printf("%.2f\n",sum);
		}
	}
}

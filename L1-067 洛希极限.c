#include<stdio.h>
int main()
{
	double a,c;
	int b;
	scanf("%lf %d %lf",&a,&b,&c);
	double sum = 0;
	switch(b)
	{
		case 1:
			sum = a * 1.26;
			printf("%.2f ",sum);
			if(sum < c)
			{
				printf("^_^");
			}
			else
			{
				printf("T_T");
			}
			break;
		case 0:
			sum = a * 2.455;
			printf("%.2f ",sum);
			if(sum < c)
			{
				printf("^_^");
			}
			else
			{
				printf("T_T");
			}
			break;
	}
}

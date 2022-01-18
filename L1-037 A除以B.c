#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	double c;
	c = a * 1.0 / b;
	if(b > 0)
	{
		printf("%d/%d=%.2f",a,b,c);
	}
	else if(b == 0)
	{
		printf("%d/%d=Error",a,b);
	}
	else
	{
		printf("%d/(%d)=%.2f",a,b,c);
	}
}

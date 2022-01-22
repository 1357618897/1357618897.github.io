#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char name[5];
		int a,b;
		scanf("%s %d %d",name,&a,&b);
		if(a < 15 || a > 20 || b <50 ||b > 70)
		{
			printf("%s\n",name);
		}
	}
}

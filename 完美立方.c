#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	for(a=2; a<=n; a++)
	{
		for(b=2; b<a; b++)
		{
			for(c=b; c<a; c++)
			{
				for(d=c; d<a; d++)
				{
					if(pow(a,3)==pow(b,3) + pow(c,3) + pow(d,3))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}
	}
} 

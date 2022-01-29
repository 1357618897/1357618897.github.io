#include<stdio.h>
int main()
{
	int n,m,sum=0;
	int i;
	int a[10010];
	scanf("%d %d",&n,&m);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);  //数组存放日期 
	}
	for(i=1; i<n; i++) 
	{
		if(a[i] - a[i-1] <= m)
		{
			sum += a[i] - a[i-1];
		}
		else if(a[i] - a[i-1] > m)
		{
			sum += m;
		}
	}
	sum += m;
	printf("%d",sum);
 } 

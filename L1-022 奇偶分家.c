#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,num;
	int cnt1 = 0;
	int cnt2 = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			cnt2++;
		}
		else
		{
			cnt1++;
		}
	}
	printf("%d %d",cnt1,cnt2);
}

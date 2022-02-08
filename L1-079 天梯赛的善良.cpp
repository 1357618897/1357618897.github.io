#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[100010];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int cntmax = 0;
	int cntmin = 0;
	int max = a[0];
	int min = a[0];
	//寻找最大值 
	for(i=1; i<n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	 } 
	 //寻找最小值 
	 for(i=1; i<n; i++)
	 {
	 	if(a[i] < min)
	 	{
	 		min = a[i];
		 }
	 }
	 //计数 
	 for(i=0; i<n; i++)
	 {
	 	if(a[i] == min)
	 	{
	 		cntmin++;
		 }
		 if(a[i] == max)
		 {
		 	cntmax++;
		 }
	 }
	 printf("%d %d\n",min,cntmin);
	 printf("%d %d\n",max,cntmax);
}

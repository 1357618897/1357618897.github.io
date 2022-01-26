#include<stdio.h>
#include<string.h>
struct stu
{
	char name[10];
	int num;
};
int main()
{
	int n;
	scanf("%d",&n);
	struct stu one[n];
	int i,j;
	int sum = 0;
	for(i=0; i<n; i++)
	{
		scanf("%s %d",one[i].name ,&one[i].num );	
	}
	for(i=0; i<n; i++)
	{
		sum += one[i].num ;
	}	
	int average = sum / (2 * n);
	int min = one[0].num - average;  //谁离的最近意思就是差法绝对值最小 
	for(i=1; i<n; i++)				//无非就是先将第一个设为最小，然后寻找最小的下标，跟数组很像 
	{
		if(abs(one[i].num - average )< min)  	//关键是绝对值函数，abs 
		{
			min = abs(one[i].num - average);
			j = i;			//定义j记住最小的下标 
		}
	}
	printf("%d %s",average,one[j].name );
}

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
	int min = one[0].num - average;  //˭��������˼���ǲ����ֵ��С 
	for(i=1; i<n; i++)				//�޷Ǿ����Ƚ���һ����Ϊ��С��Ȼ��Ѱ����С���±꣬��������� 
	{
		if(abs(one[i].num - average )< min)  	//�ؼ��Ǿ���ֵ������abs 
		{
			min = abs(one[i].num - average);
			j = i;			//����j��ס��С���±� 
		}
	}
	printf("%d %s",average,one[j].name );
}

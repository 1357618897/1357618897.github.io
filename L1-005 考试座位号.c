#include<stdio.h>
struct student
{
	char a[1001];
	int number1;
	int number2;
};

struct hero
{
	int num;
};

int main()
{
	int n; 
	scanf("%d",&n);
	struct student stu[1001];
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%s %d %d",&stu[i].a ,&stu[i].number1 ,&stu[i].number2 );	
	}
	int k;
	scanf("%d",&k);
	struct hero one[1001];
	for(i=0; i<k; i++)
	{
		scanf("%d",&one[i].num );
	}
	int j;
	for(i=0; i<k; i++)
	{
		for(j=0; j<n; j++)
		{
			if(one[i].num == stu[j].number1 )
			{
				printf("%s %d\n",stu[j].a ,stu[j].number2 );
			}
		}
	}
}

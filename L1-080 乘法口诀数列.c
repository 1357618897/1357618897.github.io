#include<stdio.h>
int main()
{
	int a,b,n,i,j,t;;
	scanf("%d %d %d",&a,&b,&n);
	int num[20050];
	//定义循环变量I和变量t 
	if(n == 1)
	{
		printf("%d",a);
	}
	else
	{
		num[0] = a;
		num[1] = b;
		for(i=2,j=2; i<n; i++,j++)
		{
			//前两项之积小于10 
			t = num[i-2] * num[i-1];
			if(t < 10)
			{
				num[j] = t;
			}
			//前两项之积大于10
			//这里最多之积为两位数，不需要考虑三位数以上 
			else
			{
				num[j] = t / 10;
				num[++j] = t % 10;
			}
		}
		for(i=0; i<n; i++)
		{
			printf("%d",num[i]);
			if(i != n-1)
			{
				printf(" ");
			}
		}
	}
	
 } 

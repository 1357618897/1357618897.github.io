#include<stdio.h>
int main()
{
	int a,b,n,i,j,t;;
	scanf("%d %d %d",&a,&b,&n);
	int num[20050];
	//����ѭ������I�ͱ���t 
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
			//ǰ����֮��С��10 
			t = num[i-2] * num[i-1];
			if(t < 10)
			{
				num[j] = t;
			}
			//ǰ����֮������10
			//�������֮��Ϊ��λ��������Ҫ������λ������ 
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

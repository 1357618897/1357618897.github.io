#include<stdio.h>
int main()
{
	int a[24];
	int i,t;
	//�洢 
	for(i=0; i<24; i++)
	{
		scanf("%d",&a[i]);
	}
	while(1)
	{
		scanf("%d",&t);
		//����Ƿ�����������ѭ�� 
		if(t < 0 || t > 23)
		{
			break;
		}
		if(a[t] > 50)
		{
			printf("%d Yes\n",a[t]);
		}
		if(a[t] <= 50)
		{
			printf("%d No\n",a[t]);
		}
	}
 } 

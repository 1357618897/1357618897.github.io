#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char a[10];
	scanf("%d",&n);
	int cnt = 0;
	while(scanf("%s",a))   //����һ�����һ�� 
	{
		if(strcmp(a,"End") == 0)
		{
			break;
		}
		if(cnt != n)   //������������ʵ�ָ�����ƽ��һ�� 
		{
			if(strcmp(a,"ChuiZi") == 0)
			{
				printf("Bu\n");
			}
			else if(strcmp(a,"JianDao") == 0)
			{
				printf("ChuiZi\n");
			}
			else if(strcmp(a,"Bu") == 0)
			{
				printf("JianDao\n");
			}
			cnt++;
		}
		else
		{
			printf("%s\n",a);
			cnt = 0;
		}
	}
	return 0;
 } 

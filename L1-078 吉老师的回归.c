#include<stdio.h>
#include<string.h>
int main()
{
	//line��������n����ɵĸ��� 
	int line,n,i,cnt = 0;
	scanf("%d %d",&line,&n);
	//getchar��������scanf�еĻ��з� 
	getchar();
	char a[line][1000];
	//b����������copy������ 
	char b[line][1000];
	//�洢 
	for(i=0; i<line; i++)
	{
		gets(a[i]);
	}
	//��ʼ���� 
	for(i=0; i<line; i++)
	{
		if(strstr(a[i],"easy") == NULL && strstr(a[i],"qiandao") == NULL)
		{
			//���û����copy 
			strcpy(b[cnt++],a[i]);
		}
	}
	if(n >= cnt)
	{
		printf("Wo AK le");
	}
	else
	{
		printf("%s",b[n]);
	}
	return 0;
	
}

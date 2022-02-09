#include<stdio.h>
#include<string.h>
int main()
{
	//line是行数，n是完成的个数 
	int line,n,i,cnt = 0;
	scanf("%d %d",&line,&n);
	//getchar用来接收scanf中的换行符 
	getchar();
	char a[line][1000];
	//b数组是用来copy的数组 
	char b[line][1000];
	//存储 
	for(i=0; i<line; i++)
	{
		gets(a[i]);
	}
	//开始遍历 
	for(i=0; i<line; i++)
	{
		if(strstr(a[i],"easy") == NULL && strstr(a[i],"qiandao") == NULL)
		{
			//如果没有则copy 
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

#include<stdio.h>
#include<string.h>
struct stu		//定义结构体数组 
{
	char name[20];
	int score;
};

int main()
{
	struct stu student[100];		
	char str[20];	//用来存放insert 和 find 
	int cnt = 0;				
	while(scanf("%s",str))	
	{
		if(strcmp(str,"end") == 0)   
		{
			break;
		}
		if(strcmp(str,"insert") == 0)		//存入 
		{
			scanf("%s %d",&student[cnt].name,&student[cnt].score);
			cnt++;
		}
		if(strcmp(str,"find") == 0)		//查找 
		{
			char cmp[10];
			int flag = 0;
			scanf("%s",cmp);
			int i;
			for(i=0; i<cnt; i++)
			{
				if(strcmp(cmp,student[i].name) == 0)		//找到标记1 
				{
					printf("%d\n",student[i].score);
					flag = 1;
					break;
				}
			}
			if(flag == 0)		//那么标记0的输出-1 
			{
				printf("-1\n");
			}
		}
	}	
}

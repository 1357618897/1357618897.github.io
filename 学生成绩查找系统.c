#include<stdio.h>
#include<string.h>
struct stu		//����ṹ������ 
{
	char name[20];
	int score;
};

int main()
{
	struct stu student[100];		
	char str[20];	//�������insert �� find 
	int cnt = 0;				
	while(scanf("%s",str))	
	{
		if(strcmp(str,"end") == 0)   
		{
			break;
		}
		if(strcmp(str,"insert") == 0)		//���� 
		{
			scanf("%s %d",&student[cnt].name,&student[cnt].score);
			cnt++;
		}
		if(strcmp(str,"find") == 0)		//���� 
		{
			char cmp[10];
			int flag = 0;
			scanf("%s",cmp);
			int i;
			for(i=0; i<cnt; i++)
			{
				if(strcmp(cmp,student[i].name) == 0)		//�ҵ����1 
				{
					printf("%d\n",student[i].score);
					flag = 1;
					break;
				}
			}
			if(flag == 0)		//��ô���0�����-1 
			{
				printf("-1\n");
			}
		}
	}	
}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000][11];
	int i = 1; //������ʼ��Ϊ1 
	scanf("%s",a[i]);
	while(strcmp(a[i],".") != 0) //�������е�������Ϊ.ʱ������洢 
	{
		i++;    
		scanf("%s",a[i]);		
	}
	i--;  //��Ϊ����и�.�����Լ�ȥ1 
	if(i<2)   //����洢������Ϊ1
	{
		printf("Momo... No one is for you ...");	
	}
	else if(i>=2&&i<14)   
	{
		printf("%s is the only one for you...",a[2]);
	}
	else
	{
		printf("%s and %s are inviting you to dinner...",a[2],a[14]);
	}
	return 0;
	
 } 

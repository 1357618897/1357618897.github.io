#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000][11];
	int i = 1; //变量初始化为1 
	scanf("%s",a[i]);
	while(strcmp(a[i],".") != 0) //当数组中的姓名不为.时候继续存储 
	{
		i++;    
		scanf("%s",a[i]);		
	}
	i--;  //因为最后有个.，所以减去1 
	if(i<2)   //如果存储的人数为1
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

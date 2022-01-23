#include<stdio.h>
#include<string.h>
int main()
{
	int num;
	scanf("%d",&num);
	int	line,list;  //line行,list列
	char str[1005]; //输入的字符串
	char b[105][1005]; //二维数组用于按照格式输出字符串
	getchar(); //用于接受回车
	gets(str);
	line =  num; //行数等于num
//	然后计算列数
	if(strlen(str) % line == 0)  //整除 
	{
		list = strlen(str) / line;  
	 } 
	else //未被整除列数+1 
	{
		list = strlen(str) / line + 1;
	}
	int i,j,k=0;
	for(i=0; i<line; i++)
    {
        b[i][0] = ' ';  //首先让第一列设为空格，不然通不过 
    }
	//输入到二维数组之中
	for(j=list-1; j>=0; j--) //双重循环使得从左向右从上向下输入数组
		for(i=0; i<line; i++)
		{
			b[i][j] = str[k++];
			if(k == strlen(str))  //K++如果k超过字符串长度跳出循环 
			{
				break;
			}
		 }
	//输出 
	for(i=0; i<line; i++)
	{
		for(j=0; j<list; j++)
		{
			putchar(b[i][j]);
		}
		if(i<line-1)
		{
			printf("\n");
		}
	}
 } 

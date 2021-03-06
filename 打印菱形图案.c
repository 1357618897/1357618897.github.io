#include<stdio.h>
//打印菱形图案，从最中间的一行分两部分
//分别进行 
int main()
{
	int n;
	scanf("%d",&n);
	int k = n / 2 + 1; //定义K为最中间的一行
	//上半部分
	int i;//定义i为行数，初始化为1
	int j;//定义k为列数 
	for(i=1; i<=k; i++) //第1行到最中间的行都是满足相同的等差数列规律的 
	{
		/*依次按顺序打印*/
		//首先打印空格
		//例如第一行，在第一个*之前有6个空格 
		for(j=1; j<=n-(2*i-1); j++)  //根据等差数列算出，先打印空格 
		{
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++)//打印完空格之后，再计算出要打印几个*,根据格式是要求*+空格  
		{
			printf("* ");
		}
		printf("\n");//每一行打印结束换行 
	 }
	 for(i=2; i<=n-k+1; i++)//下一部分，i不从1开始是因为，如果从1开始，那么就重复了最中间那一行 
	 {
	 	for(j=1; j<=n-(-2*i+2+n); j++)//根据等差算式 
	 	{
	 		printf(" ");
		 }
		 for(j=1; j<=(-2*i+2+n); j++)
		 {
		 	printf("* ");
		 }
		 printf("\n");
	 }
	 return 0;
	 /*总结*/
	 //1.对于这种打印图形，首先看图形规律，例如菱形就分两部分
	 //2.计算出第一个有效符号前面空格的规律和有效图形每一行数量的规律，大多都是等差数列
	 //3.根据算式写出代码 
} 

#include<stdio.h>
int max(int a, int b)
{
	int t;
	while(b!=0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return a;   //辗转相除法求最大公因式 
}
int main()
{
	int n;
	int a,b,a1,b1,x;       //a,a1是分子，b，b1是分母 
	scanf("%d",&n);
	scanf("%d/%d",&a,&b);
	int i;
	int t;
	for(i=1; i<n; i++)
	{
		scanf("%d/%d",&a1,&b1);
		a = a * b1 + a1 * b;   //两个分式想加时的通分过程 
		b = b * b1;				
		t = max(a,b);           //求最大公因式进行化简 
		a = a / t;				
		b = b / t;
	}
	if(b==1)
	{
		printf("%d",a);        //如果化简结果分母为1，直接输出分子 
	}
	else if(a > b)           //如果分子比分母大 
	{
		t = a % b;			//提出整数后的分子 
		x = a / b;			//整数 
		printf("%d %d/%d",x,t,b);
	}
	else
	{
		printf("%d/%d",a,b);  //如果a比b小直接输出 
	}
	return 0;
}

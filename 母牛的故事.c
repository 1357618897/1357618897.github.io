#include<stdio.h>
/*
一:  1
二： 1+1=2  -1
三： 1+1+1=3  -2 -1
四： 1+1+1+1=4 -3 -2  -1
五:  1+1+1+1+1+1=6  -4 -3 -2 -1
123是初始
f(n) = f(n-3) + f(n-1) 
*/

int f(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 2;
	}
	else if(n==3)
	{
		return 3;
	}
	else
	{
		return f(n-3) + f(n-1);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
 } 

#include<stdio.h>
int main()
{
	/*分析
	15i + 9j + k = 3n;
	i + j + k = n;*/ 
	int n;
	scanf("%d",&n);
	//定义三个变量，用来表示公鸡母鸡小鸡的个数
	int i,j,k;
	int sign = 0;//让该变量为0，当有解得时候为1，无解时候为0 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(15 * i + 9 * j + k == 3*n && i + j + k == n) //利用两个数学等式来寻找 
				{
					printf("%d %d %d\n",i,j,k);
					sign = 1;
					
				}	
			
				}
		}
	
	 }
	 if(sign == 0) //做判断，当无解的时候输出 
	 {
	 	printf("No Answer.");
	  } 
	 return 0;
}


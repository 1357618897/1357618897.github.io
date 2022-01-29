#include<stdio.h>
int n,i,j,a[1000000];  //定义全局变量 

void quicksort(int left, int right)   
{
	int temp,t;   //temp变量是基准，t变量是用来交换的第三变量 
	if(left > right)   //跳出循环的第一个条件 
	{
		return;
	}
	
	temp = a[left];   //此时选用的是第一个数当做基准 
	i = left;     //i是1 
	j = right;     //j是n 
	while(i != j)     //当i,j没有走到一块的时候 
	{
		while(a[j] >= temp && i<j)   //j一步一步左移，查找比基准值小的数 
		{
			j--;
		}
		while(a[i] <= temp && i<j)   //i一步一步右移，查找比基准值大的数 
		{
			i++;
		}
		if(i < j)
		{
			t = a[i];    //将j查到的比基准值的数与i查到的比基准值小的数交换 
			a[i] = a[j];  //即将小的数放在基准值左边 
			a[j] = t;      //将大的数放在基准值右边 
		}
	}
	  //将基准值归位 
	a[left] = a[i];    //当循环结束时，i=j，在中间某一位置 
	a[i] = temp;      //将那一位置的数与基准值交换 
	
	//递归 ，将基准值左边分为一部分
   //将基准值右边分为一部分 
	quicksort(left,i-1);     //继续处理左半部分的数    
	quicksort(i+1,right);   //继续处理右半部分的数 
	return ;
}
int main()
{
			scanf("%d",&n);	
			int i,j;
			for(i=1; i<=n; i++)
			{
				scanf("%d",&a[i]);
			}
			//快速排序
			quicksort(1,n);

			int cnt = 0;
			i = n / 2;
			j = n;
			while(i)
			{
				if(a[j] >= 2 * a[i])
				{
					cnt++;
					i--;
					j--;
				}
				else
				{
					i--;
				}
			}
			int sum = (n - 2 * cnt + cnt);
			printf("%d",sum);
			
}


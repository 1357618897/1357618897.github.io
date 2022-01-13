#include<stdio.h>
int main()
{
	int hh,mm,i;
	int cnt = 0;
	scanf("%d:%d",&hh,&mm);
	if(hh >= 0 && hh <= 12)
	{
		printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}
	else
	{
		cnt = hh - 12 + ceil(mm * 1.0 / 60);
		for(i=1; i<=cnt; i++)
		{
			printf("Dang");
		}
	}
}
//ceil函数
/*向上取整
1.1  -> 2
3.1   ->4
*/ 

#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	int n;
	scanf("%d",&n);
	int cnt1 = 0;
	int cnt2 = 0;
	int A1,A2,B1,B2;
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d %d",&A1,&A2,&B1,&B2);
		if(A1+B1 == A2 && A1+B1 != B2)   
		{
			cnt1++;
		}
		if(A1+B1 == B2 && A1+B1 != A2)    //判断条件是  喝的酒 == 最大酒量 + 1 谁就输  
		{									//注意！三个条件是并列的，可同时满足，不是if else if 
			cnt2++;
		}
		if(cnt1 == a+1 || cnt2 == b+1)
		{
			break;
		}
	}
	if(cnt1 == a+1)
	{
		printf("A\n");
		printf("%d",cnt2);
	}
	else
	{
		printf("B\n");
		printf("%d",cnt1);
	}
}

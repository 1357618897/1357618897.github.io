#include<stdio.h>
int main()
{
	//�����ĸ���̥��̥ѹֵ
	//a����ͱ���
	//b�Ƿ�ֵ 
	int num[4];
	int a,b;
	int i,j;
	for(i=0; i<4; i++)
	{
		scanf("%d",&num[i]);
	 } 
	 scanf("%d %d",&a,&b);
	 //�����ֵ
	 int max = num[0]; 
	 for(i=1; i<4; i++)
	 {
	 	if(num[i] > max)
	 	{
	 		max = num[i];
		 }
	  } 
//	  printf("%d",max);
	 //����
	 //�����ֵΪdiff
	 int diff; 
	 int cnt = 0;
	 //������ 
	 for(i=0; i<4; i++)
	 {
	 	diff = max - num[i];
		if(num[i] < a || diff > b)
		 {
		 	cnt++;
		 	j = i;
		 }
	} 
	if(cnt == 0)
	{
		printf("Normal");
	}
	else if(cnt == 1)
	{
		printf("Warning: please check #%d!",j+1);
	}
	else if(cnt >= 2)
	{
		printf("Warning: please check all the tires!");
	}
 } 

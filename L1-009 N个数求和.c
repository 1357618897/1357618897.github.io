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
	return a;   //շת������������ʽ 
}
int main()
{
	int n;
	int a,b,a1,b1,x;       //a,a1�Ƿ��ӣ�b��b1�Ƿ�ĸ 
	scanf("%d",&n);
	scanf("%d/%d",&a,&b);
	int i;
	int t;
	for(i=1; i<n; i++)
	{
		scanf("%d/%d",&a1,&b1);
		a = a * b1 + a1 * b;   //������ʽ���ʱ��ͨ�ֹ��� 
		b = b * b1;				
		t = max(a,b);           //�������ʽ���л��� 
		a = a / t;				
		b = b / t;
	}
	if(b==1)
	{
		printf("%d",a);        //�����������ĸΪ1��ֱ��������� 
	}
	else if(a > b)           //������ӱȷ�ĸ�� 
	{
		t = a % b;			//���������ķ��� 
		x = a / b;			//���� 
		printf("%d %d/%d",x,t,b);
	}
	else
	{
		printf("%d/%d",a,b);  //���a��bСֱ����� 
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[55];
	gets(a);
	int i;
	double p1,p2;
	p1 = p2 = 1.0;
	int cnt = 0;
	double sum = 0;
	double length;
	int k = strlen(a);   //���ַ������� 
	if(a[0] == '-')   //�����һ�������Ǹ��� 
	{
		p1 = 1.5;
	}
	if((a[k-1] - '0') % 2 == 0)   //������һ��������ż�� 
	{
		p2 = 2.0;
	}
	for(i=0; i<k; i++) 
	{
		if(a[i] == '2')   //����2�ĸ��� 
		{
			cnt++;
		}
	}
	if(p1 == 1.0)
	{
		printf("%.2f%%",1.0 * cnt / k * p1 * p2 *100);
	}
	else
	{
		printf("%.2f%%",1.0 * cnt / (k - 1) * p1 * p2 * 100);
	}
	
}

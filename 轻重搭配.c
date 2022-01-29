#include<stdio.h>
int n,i,j,a[1000000];  //����ȫ�ֱ��� 

void quicksort(int left, int right)   
{
	int temp,t;   //temp�����ǻ�׼��t���������������ĵ������� 
	if(left > right)   //����ѭ���ĵ�һ������ 
	{
		return;
	}
	
	temp = a[left];   //��ʱѡ�õ��ǵ�һ����������׼ 
	i = left;     //i��1 
	j = right;     //j��n 
	while(i != j)     //��i,jû���ߵ�һ���ʱ�� 
	{
		while(a[j] >= temp && i<j)   //jһ��һ�����ƣ����ұȻ�׼ֵС���� 
		{
			j--;
		}
		while(a[i] <= temp && i<j)   //iһ��һ�����ƣ����ұȻ�׼ֵ����� 
		{
			i++;
		}
		if(i < j)
		{
			t = a[i];    //��j�鵽�ıȻ�׼ֵ������i�鵽�ıȻ�׼ֵС�������� 
			a[i] = a[j];  //����С�������ڻ�׼ֵ��� 
			a[j] = t;      //����������ڻ�׼ֵ�ұ� 
		}
	}
	  //����׼ֵ��λ 
	a[left] = a[i];    //��ѭ������ʱ��i=j�����м�ĳһλ�� 
	a[i] = temp;      //����һλ�õ������׼ֵ���� 
	
	//�ݹ� ������׼ֵ��߷�Ϊһ����
   //����׼ֵ�ұ߷�Ϊһ���� 
	quicksort(left,i-1);     //����������벿�ֵ���    
	quicksort(i+1,right);   //���������Ұ벿�ֵ��� 
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
			//��������
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


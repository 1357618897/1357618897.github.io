#include<stdio.h>
int main()
{
	/*����
	15i + 9j + k = 3n;
	i + j + k = n;*/ 
	int n;
	scanf("%d",&n);
	//��������������������ʾ����ĸ��С���ĸ���
	int i,j,k;
	int sign = 0;//�øñ���Ϊ0�����н��ʱ��Ϊ1���޽�ʱ��Ϊ0 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(15 * i + 9 * j + k == 3*n && i + j + k == n) //����������ѧ��ʽ��Ѱ�� 
				{
					printf("%d %d %d\n",i,j,k);
					sign = 1;
					
				}	
			
				}
		}
	
	 }
	 if(sign == 0) //���жϣ����޽��ʱ����� 
	 {
	 	printf("No Answer.");
	  } 
	 return 0;
}


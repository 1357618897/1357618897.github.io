#include<stdio.h>
#include<string.h>
int main()
{
	int num;
	scanf("%d",&num);
	int	line,list;  //line��,list��
	char str[1005]; //������ַ���
	char b[105][1005]; //��ά�������ڰ��ո�ʽ����ַ���
	getchar(); //���ڽ��ܻس�
	gets(str);
	line =  num; //��������num
//	Ȼ���������
	if(strlen(str) % line == 0)  //���� 
	{
		list = strlen(str) / line;  
	 } 
	else //δ����������+1 
	{
		list = strlen(str) / line + 1;
	}
	int i,j,k=0;
	for(i=0; i<line; i++)
    {
        b[i][0] = ' ';  //�����õ�һ����Ϊ�ո񣬲�Ȼͨ���� 
    }
	//���뵽��ά����֮��
	for(j=list-1; j>=0; j--) //˫��ѭ��ʹ�ô������Ҵ���������������
		for(i=0; i<line; i++)
		{
			b[i][j] = str[k++];
			if(k == strlen(str))  //K++���k�����ַ�����������ѭ�� 
			{
				break;
			}
		 }
	//��� 
	for(i=0; i<line; i++)
	{
		for(j=0; j<list; j++)
		{
			putchar(b[i][j]);
		}
		if(i<line-1)
		{
			printf("\n");
		}
	}
 } 

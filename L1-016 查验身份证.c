#include <stdio.h>
#include <stdlib.h>
#define ID_Len 18
//�����0��ʼ����
int main()
{
    int N;
    scanf("%d",&N);//��Ҫ��������֤����
    int weight[17]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//Ȩֵ
    char ID[19];//���֤��
    char M[11]= {'1','0','X','9','8','7','6','5','4','3','2'};//У����
    int flag=1;//��ʶ
    int i,j; 
    for(i=0; i<N; i++)
    {
        int sum=0;//ÿ������������
        scanf("%s",ID);//����ID
        for(j=0; j<17; j++)
        {
            sum+=(ID[j]-'0')*weight[j];//��ǰ17λ���ּ�Ȩ���
        }
        sum=sum%11;
        if(M[sum]!=ID[17])//�����Ƿ�Ϊ���֤���һλ
        {
            flag=0;//��ʶֵ�ı�
            printf("%s\n",ID);//�������������֤��
        }
    }
    if(flag==1)
    {
        printf("All passed");//���֤ȫ����ȷ
    }
}

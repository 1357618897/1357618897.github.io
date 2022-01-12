#include <stdio.h>
#include <stdlib.h>
#define ID_Len 18
//数组从0开始计数
int main()
{
    int N;
    scanf("%d",&N);//需要输入的身份证个数
    int weight[17]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//权值
    char ID[19];//身份证号
    char M[11]= {'1','0','X','9','8','7','6','5','4','3','2'};//校验码
    int flag=1;//标识
    int i,j; 
    for(i=0; i<N; i++)
    {
        int sum=0;//每次求和完后清零
        scanf("%s",ID);//输入ID
        for(j=0; j<17; j++)
        {
            sum+=(ID[j]-'0')*weight[j];//对前17位数字加权求和
        }
        sum=sum%11;
        if(M[sum]!=ID[17])//检验是否为身份证最后一位
        {
            flag=0;//标识值改变
            printf("%s\n",ID);//输出有问题的身份证号
        }
    }
    if(flag==1)
    {
        printf("All passed");//身份证全部正确
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char str[85];
int first_index=-1;//��һ�����ϵ�δ֪
int s_count=0;//������ĸ���
int t_count=0;//���ϵĸ���



int main(){
    while(1){
        gets(str);//һ������ÿһ�仰
        if(strcmp(".",str)==0)
            break;
        s_count++;//�����ȫ������
        char *p=strstr(str,"chi1 huo3 guo1");//str�Ǳ������ַ���������ġ� ����������Ҫ���ҵ��ַ���
        if(p!=NULL){
            if(first_index<0)
                first_index=s_count;//�жϵ�һ�γ������ڵ�δ֪
            t_count++;//���ڳԻ���ĸ���
        }
    }
    
    printf("%d\n",s_count);
    if(t_count==0)
        printf("-_-#");
    else 
        printf("%d %d\n",first_index,t_count);
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char str[85];
int first_index=-1;//第一个符合的未知
int s_count=0;//总输入的个数
int t_count=0;//符合的个数



int main(){
    while(1){
        gets(str);//一次输入每一句话
        if(strcmp(".",str)==0)
            break;
        s_count++;//输入的全部个数
        char *p=strstr(str,"chi1 huo3 guo1");//str是被查找字符串，后面的“ ”里面是需要超找的字符串
        if(p!=NULL){
            if(first_index<0)
                first_index=s_count;//判断第一次出现所在的未知
            t_count++;//存在吃火锅的个数
        }
    }
    
    printf("%d\n",s_count);
    if(t_count==0)
        printf("-_-#");
    else 
        printf("%d %d\n",first_index,t_count);
}


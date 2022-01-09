#include<stdio.h>
int main()
{
    int a[3];
    int i,j;
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d",a[i]);
        if(i<2)
        {
            printf("->");
        }
    }
    
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,x,y,n,m,a[124][124],b[124][124],c;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(y!=m)
    {
        printf("Error: %d != %d",y,m);
    }
    else
    {
        printf("%d %d\n",x,n);
        for(i=0;i<x;i++)
        {
            if(i)
            printf("\n");
            for(j=0;j<n;j++)
            {
                c=0;
                for(k=0;k<y;k++)
                {
                    c+=a[i][k]*b[k][j];
                }
                if(j)
                printf(" ");
                printf("%d",c);
            }
        }
    }
}

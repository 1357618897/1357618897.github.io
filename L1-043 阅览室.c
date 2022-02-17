#include <stdio.h>
#include <string.h>
int main()
{
    int x,y,z,i,j;
    char a[5];
    int sum=0,s=0,n,b[1005];
    scanf("%d",&n);
    for(i=0;i<1005;i++)
    b[i]=-1;
    for(j=1;j<=n;j++)
    {
        while(1)
        {
            scanf("%d %s %d:%d",&x,a,&y,&z);
            if(x==0)
            {
                if(s!=0)
                    printf("%d %0.0f\n",s,(double)sum/s);
                else
                    printf("0 0\n");
                sum=0;
                s=0;
                break;
            }
            else
            {
                if(a[0]=='S')
                    b[x]=y*60+z;
                else if(a[0]=='E'&&b[x]!=-1)
                {
                    s++;
                    sum=sum+y*60+z-b[x] ;
                    b[x]=-1;
                }
            }
        }
    }
    return 0;
}


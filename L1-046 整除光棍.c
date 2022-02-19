#include<stdio.h>
int n;
char ans[1005];
int main()
{
    while(~scanf("%d", &n))
    {
        int p = 0;
        int now = 1;
        int len;
        for (len = 1; ; ++len)
        {
            if(p || now / n)ans[p++] = '0' + now / n;
            now %= n;
            if (now == 0)
            {
                ans[p] = 0;
                printf("%s %d\n", ans, len);
                break;
            }
            now = now * 10 + 1;
        }
    }
    return 0;
}

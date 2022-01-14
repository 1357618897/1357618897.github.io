#include<stdio.h>
#include<string.h>
int main()
{
	char a[10010];
	gets(a);
	int  g,p,l,t;
	g = p = l = t = 0;
	int k = strlen(a);
	int i;
	for(i=0; i<k; i++)
	{
		if(a[i] == 'G' || a[i] == 'g')
		{
			g++;
		}
		if(a[i] == 'P' || a[i] == 'p')
		{
			p++;
		}
		if(a[i] == 'L' || a[i] == 'l')
		{
			l++;
		}
		if(a[i] == 'T' || a[i] == 't')
		{
			t++;
		}
	}
	while(1)
	{
		if(g==0 && p==0 && l==0 && t==0)
		{
			break;
		}
		if(g > 0)
		{
			printf("G");
			g--;
		}
		if(p > 0)
		{
			printf("P");
			p--;
		}
		if(l > 0)
		{
			printf("L");
			l--;
		}
		if(t > 0)
		{
			printf("T");
			t--;
		}
	}
}

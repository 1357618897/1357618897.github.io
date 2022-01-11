#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001];
	char b[10001];
	char t[10001];
	gets(a);
	gets(b);
	int i;
	for(i=0; i<strlen(b); i++)
	{
		t[b[i]]++;                     //再次见到了桶 
	}
	for(i=0; i<strlen(a); i++)
	{
		if(t[a[i]] == 0)
		{
			printf("%c",a[i]);
		}
	}
	return 0;
} 

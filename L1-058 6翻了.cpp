#include<stdio.h>
#include<string.h>
int main()
{
	char str[1010];
	gets(str);
	int k = strlen(str);
	int i,j;
	int cnt = 0;
	for(i=0; i<k; i++)
	{
		if(str[i] == '6')
		{
			cnt++;
			if(str[i+1]!='6' && cnt < 4)
			{
				for(j=0; j<3; j++)
				{
					printf("6");
					cnt = 0;
				}
			}
			else if(str[i+1] != '6' && cnt > 5)
			{
				printf("9");
				cnt = 0;
			}
			else if(str[i+1] != '6' && cnt > 9)
			{
				printf("27");
				cnt = 0;
			}
		}
		else 
		{
			printf("%c",str[i]);
		}
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	char num[20];
	scanf("%s",&num);
	int i;
	for(i=0; i<strlen(num); i++)
	{
		switch(num[i])
		{
			case '-':
				printf("fu");
				break;
			case '0':
				printf("ling");
				break;
			case '1':
				printf("yi");
				break;
			case '2':
				printf("er");
				break;
			case '3':
				printf("san");
				break;
			case '4':
				printf("si");
				break; 
			case '5':
				printf("wu");
				break;
			case '6':
				printf("liu");
				break;
			case '7':
				printf("qi");
				break;
			case '8':
				printf("ba");
				break;
			case '9':
				printf("jiu");
				break;
		}
		if(i<strlen(num)-1)
		{
			printf(" ");
		}
	}
	return 0;
 } 

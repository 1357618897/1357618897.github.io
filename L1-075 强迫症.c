#include <stdio.h>
#include <string.h>
int main()
{
	char a[7];
	gets(a);
	if (strlen(a) == 4)
	{
		if ((a[0] - '0') * 10 + (a[1] - '0') < 22)
			printf("20%c%c-%c%c", a[0], a[1], a[2], a[3]);
		else
			printf("19%c%c-%c%c", a[0], a[1], a[2], a[3]);
	}
	else
		printf("%c%c%c%c-%c%c", a[0], a[1], a[2], a[3], a[4], a[5]);

	return 0;
}


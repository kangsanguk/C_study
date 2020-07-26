#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define max 20
int main()
{
	char string[max];
	int len,rest,i, empty[max];
	i = 0;
	printf("* 문자열 입력:");
	scanf("%s", string);
	len = strlen(string);
	rest = len%2;
	while (i < max)
	{
		empty[i] = ' ';
		i++;
	}
	i = 0;
	if (rest == 0)
	{
		printf("[");
		while (i < (len / 2))
		{
			printf("%c", empty[i]);
			i++;
		}
		i = 0;
		while (i < (len / 2))
		{
			printf("%c", string[i]);
			i++;
		}
		printf("...]");
	}
	else
	{
		printf("[");
		while (i < len / 2 + 1)
		{
			printf("%c", empty[i]);
			i++;
		}
		i = 0;
		while (i < (len / 2 +1))
		{
			printf("%c", string[i]);
			i++;
		}
		printf("...]");
	}
	return 0;
}
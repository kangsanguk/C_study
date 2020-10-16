#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 99

void myflush();
int strCheck(char *aVal1, char aVal2, int len);
int input(char *aVal1, char *aVal2);

int main()
{
	int len, check;
	char str[MAX];
	char charac;
	len = input(str, &charac);
	check = strCheck(str, charac, len);
	while (len != -1)
	{
		if (check == -1)
		{
			printf("\"%s\"문자열 안에 \'%c\'문자는 존재하지 않습니다.\n", str, charac);
		}
		else
		{
			printf("\"%s\"문자열 안에 \'%c\'문자는 %d번에 존재합니다.\n", str, charac, check);
		}
		len = input(str, &charac);
		check = strCheck(str, charac, len);
	}
	return 0;
}

int input(char *aVal1, char *aVal2)
{
	int len;
	printf(" * 문자열을 입력하시오 :");
	fgets(aVal1, MAX, stdin);
	len = strlen(aVal1);
	if (len == 1)
	{
		return -1;
	}
	aVal1[len - 1] = NULL;
	if (strcmp(aVal1, "end\0") == 0)
	{
		return -1;
	}
	printf(" * 문자를 입력하시오 :");
	scanf("%c", aVal2);
	myflush();
	return len;
}
int strCheck(char *aVal1, char aVal2, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (aVal2 == aVal1[i])
		{
			return i;
		}
		else
		{
			if (i == len - 1)
			{
				return -1;
			}
		}
	}
}

void myflush()
{
	while (getchar() != '\n');

	return;
}
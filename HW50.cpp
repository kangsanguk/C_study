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
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� �������� �ʽ��ϴ�.\n", str, charac);
		}
		else
		{
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� %d���� �����մϴ�.\n", str, charac, check);
		}
		len = input(str, &charac);
		check = strCheck(str, charac, len);
	}
	return 0;
}

int input(char *aVal1, char *aVal2)
{
	int len;
	printf(" * ���ڿ��� �Է��Ͻÿ� :");
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
	printf(" * ���ڸ� �Է��Ͻÿ� :");
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
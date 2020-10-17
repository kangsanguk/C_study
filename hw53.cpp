#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 20

int checkStr(int len, char *p);
int input(char *p);
void print(int i, char *p);

int main()
{
	char str[MAX];
	int len,check;
	len = input(str);
	while (strcmp("end\0", str) != 0)
	{
		check = checkStr(len, str);
		print(check, str);
		printf("\n");
		len = input(str);
	}
}

int input(char *p)
{
	int len;
	printf(" # 단어 입력 : ");
	fgets(p, MAX, stdin);
	len = strlen(p);
	p[len-1] = '\0';
	return len;
}

int checkStr(int len, char *p)
{
	int check = len / 2;
	for (int i = 0; i < check; i++)
	{
		if (p[i] == p[(len - 2) - i])
		{
			;
		}
		else
		{
			if (p[i] - p[(len - 2) - i] == 32)
			{
				;
			}
			else if (p[(len - 2) - i] - p[i] == 32)
			{
				;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}
void print(int i,char *p)
{
	if (i == 1)
	{
		printf("\"%s\" : 회문입니다!",p);
	}
	else
	{
		printf("\"%s\" : 회문이 아닙니다!", p);
	}

}
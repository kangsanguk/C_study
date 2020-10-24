#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>

void input(char(*p)[20]);
void myflush();
void sort(char(*p)[20]);
void output(char(*p)[20]);

int main()
{
	char str[5][20];
	input(str);
	sort(str);
	output(str);

	return 0;
}

void input(char(*p)[20]) 
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("# %d번 문자열을 입력하시오 : ", i + 1);
		scanf("%s", p[i]);
		while (getchar() != '\n')
		{
			myflush();
			printf("# %d번 문자열을 입력하시오 : ", i + 1);
			scanf("%s", p[i]);
		}
	}

	return;
}

void myflush()
{
	while (getchar() != '\n');

	return;
}

void sort(char(*p)[20])
{
	int i, k, n;
	char temp[20];
	for (i = 0; i < 5; i++)
	{
		for (k = 4; k > i; k--)
		{
			n = strcmp(&p[i][0], &p[k][0]);
			if (n > 0)
			{
				strcpy(temp, p[i]);
				strcpy(p[i], p[k]);
				strcpy(p[k], temp);
			}
		}
	}

	return;
}

void output(char(*p)[20])
{
	int len, i;
	for (i = 0; i < 5; i++)
	{
		len = strlen(p[i]);
		printf("str[%d] = %s  %c  %c\n", i, p[i], p[i][0], p[i][len-1]);
	}

	return;
}
#include<stdio.h>
#pragma warning(disable:4996)

void myflush();

int main()
{
	int n, i, k;
	char ch, ch1;
	printf("* 영문자 대문자 입력('A'~ 'Z') : ");
	scanf(" %c", &ch);
	while (ch < 41 || ch > 90)
	{
		myflush();
		printf("* 영문자 대문자 입력('A'~ 'Z') : ");
		scanf(" %c", &ch);
	}
	n = ch - 'A';
	for (i = 1; i <= n+1; i++)
	{
		ch1 = ch;
		for (k = 0; k < i; k++)
		{
			printf("%c", ch1);
			ch1 -= 1;
		}
		printf("\n");
	}

	return 0;
}

void myflush()
{
	while (getchar() != '\n');

	return;
}
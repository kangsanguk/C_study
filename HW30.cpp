#include<stdio.h>
#pragma warning(disable:4996)

int input(const char *msg);
void myflush();

int main()
{
	int tenNum, res, x;
	tenNum = input(" * 10진수 정수를 입력하시오 :");
	printf("%d(10) = ", tenNum);
	for (int i = 31; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				x = 1;
			}
			else
			{
				x *= 2;
			}
		}
		res = tenNum & (x);
		res = res >> i;
		if (tenNum < 0)
		{
			if (i == 31)
			{
				printf("%d", res + 2);
			}
			else
			{
				printf("%d", res);
			}
		}
		else
		{
			printf("%d", res);
		}

	}
	printf("(2)");
}

int input(const char *msg)
{
	int value;
	printf("%s", msg);
	scanf("%d", &value);
	while (getchar() != '\n')
	{
		myflush();
		printf("%s", msg);
		scanf("%d", &value);
	}
	return value;
}

void myflush()
{
	while (getchar() != '\n');
}
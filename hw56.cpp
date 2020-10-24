#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void input(int(*p)[5]);
void calcu(int(*p)[5], int *sum);
void print(int(*p)[5], int *sum);

int main()
{
	int str[5][5], sum[3] = {0,0,0};
	srand(time(NULL));
	input(str);
	calcu(str, sum);
	print(str, sum);
}
void input(int (*p)[5])
{
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			p[i][j] = (rand() % 20) + 1;
		}
	}
}
void calcu(int (*p)[5], int *sum)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			sum[0] += p[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum[1] += p[i][i];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum[2] += p[i][j];
		}
	}
}
void print(int(*p)[5], int *sum)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d¹ø Çà :", i);
		for (int j = 0; j < 5; j++)
		{
			printf("%2d  ",p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("sum%d = %d\n", i + 1, sum[i]);
	}
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void help(int(*p)[4]);
void output(int(*p)[4]);

int main()
{
	int num[3][4];
	srand((unsigned int)time(NULL));
	help(num);
	output(num);

	return 0;
}

void help(int(*p)[4])
{
	int i, k;
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			p[i][k] = rand() % 9 + 1;
		}
	}
	
	return;
}

void output(int(*p)[4])
{
	int i, k;
	int rsum, csum;
	for (i = 0; i < 3; i++)
	{
		rsum = 0;
		printf("%d행     : ", i);
		for (k = 0; k < 4; k++)
		{
			printf("%2d ", p[i][k]);
			rsum += p[i][k];
		}
		printf("  %d행의 합 : %d\n", i, rsum);
	}
	printf("열의 합 : ");
	for (k = 0; k < 4; k++)
	{
		csum = 0;
		for (i = 0; i < 3; i++)
		{
			csum += p[i][k];
		}
		printf("%2d ", csum);
	}
}
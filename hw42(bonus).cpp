#include<stdio.h>

int main()
{
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = (i * 4) + 2; k <= (i * 4) + 5;k++)
			{
				printf("%d * %d = %2d\t", k, j, k*j);
			}
			printf("\n");
		}
		printf("\n");
	}
}
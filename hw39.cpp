#include<stdio.h>

int main()
{
	int n, i, k;
	for (i = 0; i < 10; i++)
	{
		n = i;
		for (k = 0; k < 10; k++)
		{
			printf("%d ", n);
			n += 10;
			if (k == 9) printf("\n");
		}
	}

	return 0;
}
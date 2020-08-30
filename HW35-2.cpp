#include<stdio.h>

int main()
{
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0) printf("%3d", i);
			else printf("  *");
		}
		else if (i % 5 == 0) printf("  #");
		else printf("%3d", i);
		if (i % 10 == 0) printf("\n");
	}

	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, coin = 1, count = 1, i, total = 0;
	printf("* 기사의 근무일수를 입력하시오 : ");
	scanf("%d", &n);
	while (1)
	{
		for (i = 1; i <= coin; i++)
		{
			total += coin;
			count++;
			if (count > n) break;
		}
		if (count > n) break;
		coin++;
	}
	printf("  근무일 : %d 일 / 총 금화 수 : %d 개\n", n, total);

	return 0;
}
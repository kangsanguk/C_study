#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, coin = 1, count = 1, i, total = 0;
	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
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
	printf("  �ٹ��� : %d �� / �� ��ȭ �� : %d ��\n", n, total);

	return 0;
}
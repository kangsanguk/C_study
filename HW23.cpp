#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b;
	while (1)
	{
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		if (scanf("%d %d", &a, &b) != 2) break;
		if (a < b) printf("%d - %d = %d\n", b, a, b - a);
		else printf("%d - %d = %d\n", a, b, a - b);
	}

	return 0;
}
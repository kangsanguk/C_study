#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i;
	double height, s = 0, avg;
	for (i = 1; i <= 5; i++)
	{
		printf("%d�� �л��� Ű��? ", i);
		scanf("%lf", &height);
		s += height;
	}
	avg = s / 5;
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", avg);

	return 0;
}
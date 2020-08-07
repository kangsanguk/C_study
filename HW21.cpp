#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i;
	double height, s = 0, avg;
	for (i = 1; i <= 5; i++)
	{
		printf("%d번 학생의 키는? ", i);
		scanf("%lf", &height);
		s += height;
	}
	avg = s / 5;
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", avg);

	return 0;
}
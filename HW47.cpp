#include<stdio.h>
#pragma warning(disable:4996)

double input(int i);
void myflush();
double Max(int i, double *p, double max);
double Min(int i, double *p, double min);
void output(double max, double min);

int main()
{
	int i;
	double a[5], max = 0, min = 0;
	for (i = 0; i < 5; i++)
	{
		a[i] = input(i);
		max = Max(i, a, max);
		min = Min(i, a, min);
	}
	output(max, min);

	return 0;
}

double input(int i)
{
	double n;
	printf("%d 번 방 값 : ", i);
	scanf("%lf", &n);
	while (getchar() != '\n')
	{
		myflush();
		printf("%d 번 방 값 : ", i);
		scanf("%lf", &n);
	}

	return n;
}

void myflush()
{
	while (getchar() != '\n');

	return;
}

double Max(int i, double *p, double max)
{
	if (i == 0)
	{
		max = p[0];
		return p[0];
	}
	else
	{
		if (max < p[i]) return p[i];
		else return max;
	}
}

double Min(int i, double *p, double min)
{
	if (i == 0)
	{
		min = p[0];
		return p[0];
	}
	else
	{
		if (min > p[i]) return p[i];
		else return min;
	}
}

void output(double max, double min)
{
	printf("\n가장 큰 값 : %.2lf\n", max);
	printf("가장 작은 값 : %.2lf\n", min);

	return;
}
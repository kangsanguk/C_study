#include<stdio.h>
#pragma warning (disable:4996)

double input();
void output(double c);

int main()
{
	double c, f;
	f = input();
	c = (double)5 / 9 * (f - 32);
	output(c);
	
	return 0;
}

double input()
{
	double f;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%lf", &f);
	
	return f;
}

void output(double c)
{
	printf("섭씨 온도는 %.1lf도입니다.\n", c);
}
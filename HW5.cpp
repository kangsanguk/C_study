#include<stdio.h>
#pragma warning (disable:4996)

int input();
void output(double final);

int main()
{
	double total, final, ext;
	int use;
	use = input();
	total = 660 + use * 88.5;
	ext = total * 0.09;
	final = total + ext;
	output(final);

	return 0;
}

int input()
{
	int use;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &use);

	return use;
}

void output(double final)
{
	printf("전기 사용요금은 %lf원 입니다.\n", final);
}
#include<stdio.h>
#pragma warning (disable : 4996)

int input();
int glossPay(int time);
int taxes(int total);
void output(int total, int taxe, int real);


int main()
{
	int total, taxe, real, time;
	time = input();
	total = glossPay(time);
	taxe = taxes(total);
	real = total - taxe;
	output(total, taxe, real);

	return 0;
}

int input()
{
	int time;
	printf("*1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &time);

	return time;
}

int glossPay(int time)
{
	int money;
	if (time <= 40) money = time * 3000;
	else money = 40 * 3000 + (int)((time - 40) * 3000 * 1.5);
	
	return money;
}

int taxes(int total)
{
	int taxe;
	if (total <= 100000) taxe = (int)(total * 0.15);
	else taxe = (int)(100000 * 0.15) + (int)((total - 100000) * 0.25);

	return taxe;
}

void output(int total, int taxe, int real)
{
	printf("# 총수입 : %6d원\n# 세  금 : %6d원\n# 실수입 : %6d원\n", total, taxe, real);
}
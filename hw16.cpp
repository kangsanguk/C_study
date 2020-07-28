#include<stdio.h>
#pragma warning(disable:4996)

int input();
int calcu(int val);
void print(int value);

int main()
{
	int sta,charge;
	sta = input();
	charge = calcu(sta);
	print(charge);
	return 0;
}
int input()
{
	int value;
	printf("역수를 입력하시오:");
	scanf("%d", &value);
	return value;
}
int calcu(int val)
{
	int value;
	if (val < 6)
	{
		value = 600;
	}
	else
	{
		if (val < 11)
		{
			value = 800;
		}
		else
		{
			int more;
			int rest;
			more = (val - 10);
			rest = more  - ((more / 2) * 2);
			if (rest == 0)
			{
				value = 800 + ((more / 2)*100);
			}
			else
			{
				value = 800 + (((more / 2) + 1) * 100);
			}
		}
	}
	return value;
}

void print(int value)
{
	printf("요금 : %d원", value);
}
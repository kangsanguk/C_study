#include<stdio.h>
#pragma warning(disable:4996)

int input1();
int input2();
void output(int price, int discount, int ext);

int main()
{
	int age, num, price, ext, discount;
	age = input1();
	num = input2();
	if (num < 5)
	{
		discount = 0;
		if (age < 7)
		{
			price = 500 * num;
			ext = price;
		}
		else
		{
			if (age < 14)
			{
				price = 700 * num;
				ext = price;
			}
			else
			{
				if (age < 20)
				{
					price = 1000 * num;
					ext = price;
				}
				else
				{
					if (age < 56)
					{
						price = 1500 * num;
						ext = price;
					}
					else
					{
						price = 500 * num;
						ext = price;
					}
				}
			}
		}
	}
	else
	{
		if (age < 7)
		{
			price = 500 * num;
			discount = price / 10;
			ext = price - discount;
		}
		else
		{
			if (age < 14)
			{
				price = 700 * num;
				discount = price / 10;
				ext = price - discount;
			}
			else
			{
				if (age < 20)
				{
					price = 1000 * num;
					discount = price / 10;
					ext = price - discount;
				}
				else
				{
					if (age < 56)
					{
						price = 1500 * num;
						discount = price / 10;
						ext = price - discount;
					}
					else
					{
						price = 500 * num;
						discount = price / 10;
						ext = price - discount;
					}
				}
			}
		}
	}
	output(price, discount, ext);

	return 0;
}

int input1()
{
	int age;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}

int input2()
{
	int num;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}

void output(int price, int discount, int ext)
{
	printf("\n입장료 => %d원\n할인금액 => %d원\n결제금액 => %d원\n", price, discount, ext);
}
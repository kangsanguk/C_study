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
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}

int input2()
{
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}

void output(int price, int discount, int ext)
{
	printf("\n����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��\n", price, discount, ext);
}
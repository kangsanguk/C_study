#include<stdio.h>
#pragma warning(disable:4996)

int input(const char *msg);

int main()
{
	int money, cream, shrimp, coke;
	money = input("현재 당신의 소유 금액을 입력하시오 :");
	while (money != -1)
	{
		money = money - 1600;
		for (int i = 0; i <= money / 500; i++)
		{
			cream = 1 + i;
			for (int j = 0; j <= (money - i * 500) / 700; j++)
			{
				shrimp = 1 + j;
				for (int k = 0; k <= ((money - i * 500) - j * 700) / 400; k++)
				{
					coke = 1 + k;
					if (((money - i * 500) - j * 700) - k * 400 == 0)
					{
						printf("크림빵(%d개), 새우깡(%d개), 콜라(%d개)\n", cream, shrimp, coke);
					}
				}
			}
		}
		printf("어떻게 구입하겠습니까?\n");
		money = input("\n현재 당신의 소유 금액을 입력하시오 :");
	}
}

int input(const char *msg)
{
	int value;
	printf("%s", msg);
	scanf("%d", &value);
	while (getchar() != '\n')
	{
		return -1;
	}
	return value;
}
#include<stdio.h>
#pragma warning (disable:4996)

char menu();
void myflush();
int inputInt(const char *msg);
int deposit(int in, int total);
int withdraw(int total, int out);

int main()
{
	char select;
	int  in, out, total = 0;
	printf("* 현재 잔액은 %d원 입니다.\n", total);
	while (1)
	{
		select = menu();
		if (select == 'i')
		{
			in = inputInt("# 입금액을 입력하세요 : ");
			if (in < 0) in = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
			else
			{
				total = deposit(in, total);
				printf("* 현재 잔액은 %d원 입니다.\n", total);
			}

		}
		else if (select == 'o')
		{
			out = inputInt("# 출금액을 입력하세요 : ");
			if (out < 0) in = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
			else
			{
				if (total < out)
				{
					printf("* 잔액이 부족합니다.\n");
					printf("* 현재 잔액은 %d원 입니다.\n", total);
				}
				else
				{
					total = withdraw(total, out);
					printf("* 현재 잔액은 %d원 입니다.\n", total);
				}
			}
		}
		else break;
	}

	return 0;
}

char menu()
{
	char select;
	printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
	scanf("%c", &select);
	while (select != 'i' && select != 'o' && select != 'q')
	{
		myflush();
		printf("\n# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &select);
	}
	return select;
}

void myflush() 
{
	while (getchar() != '\n');

	return;
}

int inputInt(const char *msg)
{
	int in;
	printf("%s", msg);
	scanf("%d", &in);
	while (getchar() != '\n')
	{
		myflush();
		printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
		scanf("%d", &in);
	}

	return in;
}

int deposit(int in, int total) 
{
	total += in;

	return total;
}

int withdraw(int total, int out)
{
	total -= out;

	return total;
}
#include<stdio.h>
#pragma warning(disable:4996)
#define TAX_RATE 1.05

void myflush();
int input(int * aVal1, int *aVal2);
int calcu(int aVal1, int aVal2);
void myflush();
void print(int aVal1, int aVal2, int aVal3);

int main()
{
	int menu, useValue,charge,total;
	charge = input(&menu, &useValue);
	total = calcu(useValue, charge);
	print(menu, useValue, total);
}

int input(int *aVal1, int *aVal2)
{
	int check = 1, charge;
	printf(" * 사용자 코드를 입력하시오 :");
	scanf("%d", aVal1);
	while (check == 1)
	{
		check = 0;
		switch (*aVal1)
		{
			case 1:
			{
				charge = 50;
				break;
			}
			case 2:
			{
				charge = 45;
				break;
			}
			case 3:
			{
				charge = 30;
				break;
			}
			default:
			{
				myflush();
				printf(" * 사용자 코드를 입력하시오 :");
				scanf("%d", aVal1);
				check = 1;
			}
		}
	}
	printf(" * 사용량을 입력하시오 (ton단위) : ");
	scanf("%d", aVal2);
	while (getchar() !='\n')
	{
		myflush();
		printf(" * 사용량을 입력하시오 (ton단위) : ");
		scanf("%d", aVal2);
	}
	return charge;
}
void myflush()
{
	while (getchar() != '\n');
	{
		;
	}
}

int calcu(int aVal1,int aVal2)
{
	int value;
	value = (int)((aVal1*aVal2)*TAX_RATE);
	return value;
}

void print(int aVal1,int aVal2,int aVal3)
{
	printf("\n # 사용자 코드 : %d", aVal1);
	switch (aVal1)
	{
		case 1:
		{
			printf("(가정용)\n");
			break;
		}
		case 2:
		{
			printf("(상업용)\n");
			break;
		}
		case 3:
		{
			printf("(공업용)\n");
			break;
		}
		default :
		{
			break;
		}
	}
	printf(" # 사용량 : %d ton\n", aVal2);
	printf(" # 총수도요금 : %d원", aVal3);
}
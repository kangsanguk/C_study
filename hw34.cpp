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
	printf(" * ����� �ڵ带 �Է��Ͻÿ� :");
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
				printf(" * ����� �ڵ带 �Է��Ͻÿ� :");
				scanf("%d", aVal1);
				check = 1;
			}
		}
	}
	printf(" * ��뷮�� �Է��Ͻÿ� (ton����) : ");
	scanf("%d", aVal2);
	while (getchar() !='\n')
	{
		myflush();
		printf(" * ��뷮�� �Է��Ͻÿ� (ton����) : ");
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
	printf("\n # ����� �ڵ� : %d", aVal1);
	switch (aVal1)
	{
		case 1:
		{
			printf("(������)\n");
			break;
		}
		case 2:
		{
			printf("(�����)\n");
			break;
		}
		case 3:
		{
			printf("(������)\n");
			break;
		}
		default :
		{
			break;
		}
	}
	printf(" # ��뷮 : %d ton\n", aVal2);
	printf(" # �Ѽ������ : %d��", aVal3);
}
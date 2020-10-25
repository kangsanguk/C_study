#include<stdio.h>
#pragma warning(disable:4996)
#define MAX 1000

int inputAmount();
void inputNum(int * p, int amount);
int checkNum(int *p, int amount);

int main()
{
	int amount, ary[MAX], total;
	amount = inputAmount();
	while (amount != 0)
	{
		inputNum(ary, amount);
		total = checkNum(ary, amount);
		printf("   ���� �ٸ� ������ ���� : %d\n\n", total);
		amount = inputAmount();
	}
}
int inputAmount()
{
	int amount;
	printf(" * �Է��� ������ ���� : ");
	scanf("%d", &amount);
	if (getchar() != '\n')
	{
		return 0;
	}
	return amount;
}
void inputNum(int * p, int amount)
{
	printf(" * ���� �Է� :");
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &p[i]);
	}
}
int checkNum(int *p,int amount)
{
	int dif=1;
	for (int i = 0; i < amount-1; i++)
	{
		for (int j = i+1; j < amount; j++)
		{
			if (p[i] == p[j])
			{
				break;
			}
			else
			{
				if (j == amount - 1)
				{
					dif++;
				}
			}
		}
	}
	return dif;
}
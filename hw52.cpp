#include<stdio.h>
#pragma warning(disable:4996)
#define MAX 15

int input(int *ary);
void sort(int num, int * ary);
void print(int*ary,int check);

int main()
{
	int num[MAX],check;
	for (int i = 0; i < 3; i++)
	{
		check = input(num);
		sort(check, num);
		print(num, check);
	}
}

int input(int *ary)
{
	int check=0;
	printf(" # 소트 전 데이터 : ");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &ary[i]);
		if (ary[i] == 0)
		{
			break;
		}
		check++;
	}
	check - 1;
	return check;
}

void sort(int num,int * ary)
{
	int temp;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num-1; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void print(int*ary,int check)
{
	printf(" # 소트 후 데이터 : ");
	for (int i = 0; i < check; i++)
	{
		printf("%d ", *(ary+i));
	}
	printf("\n\n");
}

#include<stdio.h>
#pragma warning(disable:4996)

void input(int * sta, int * fin);
void myflush();
int choice(int  aVal1, int aVal2);
void print(int aVal1, int aVal2, int choose);

int main()
{
	int sta, fin,choose;
	input(&sta, &fin);
	choose = choice(sta, fin);
	print(sta, fin, choose);
}

void input(int * sta,int * fin)
{
	printf(" # ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", sta);
	while (getchar() != '\n')
	{
		myflush();
		printf(" # ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", sta);
	}
	while (*sta < 0)
	{
		printf(" # ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", sta);
		while (getchar() != '\n')
		{
			myflush();
			printf(" # ���� ���� �Է��Ͻÿ� : ");
			scanf("%d", sta);
		}
	}
	printf(" # �� ���� �Է��Ͻÿ� : ");
	scanf("%d", fin);
	while (getchar() != '\n')
	{
		myflush();
		printf(" # �� ���� �Է��Ͻÿ� : ");
		scanf("%d", fin);
	}
	while (*fin <= *sta)
	{
		printf(" # �� ���� �Է��Ͻÿ� : ");
		scanf("%d", fin);
		while (getchar() != '\n')
		{
			myflush();
			printf(" # �� ���� �Է��Ͻÿ� : ");
			scanf("%d", fin);
		}
	}
}
int choice(int  aVal1,int aVal2)
{
	char ch;
	printf(" * %d ~ %d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:/o) : ", aVal1, aVal2);
	scanf("%c", &ch);
	while (1)
	{
		switch (ch)
		{
			case 'e':
			{
				return 2;
				break;
			}
			case 'o':
			{
				return 1;
				break;
			}
			default :
			{
				myflush();
				printf(" * %d ~ %d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:/o) : ",aVal1,aVal2);
				scanf("%c", &ch);
			}
		}
	}
}
void print(int aVal1,int aVal2,int choose)
{
	int sum = 0;
	switch (choose)
	{
		case 1:
		{
			printf("%5d���� %d������ Ȧ��(",aVal1,aVal2);
			for (int i = aVal1; i <= aVal2; i++)
			{
				if (i % 2 == 1)
				{
					sum += i;
					printf("%d  ", i);
				}
			}
			printf("\b\b)�� ���� %d �Դϴ�.", sum);
			break;
		}
		default:
		{
			printf("%5d���� %d������ ¦��(",aVal1,aVal2);
			for (int i = aVal1; i <= aVal2; i++)
			{
				if (i % 2 == 0)
				{
					sum += i;
					printf("%d  ", i);
				}
			}
			printf("\b\b)�� ���� %d �Դϴ�.", sum);
		}
	}
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
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
	printf(" # 시작 값을 입력하시오 : ");
	scanf("%d", sta);
	while (getchar() != '\n')
	{
		myflush();
		printf(" # 시작 값을 입력하시오 : ");
		scanf("%d", sta);
	}
	while (*sta < 0)
	{
		printf(" # 시작 값을 입력하시오 : ");
		scanf("%d", sta);
		while (getchar() != '\n')
		{
			myflush();
			printf(" # 시작 값을 입력하시오 : ");
			scanf("%d", sta);
		}
	}
	printf(" # 끝 값을 입력하시오 : ");
	scanf("%d", fin);
	while (getchar() != '\n')
	{
		myflush();
		printf(" # 끝 값을 입력하시오 : ");
		scanf("%d", fin);
	}
	while (*fin <= *sta)
	{
		printf(" # 끝 값을 입력하시오 : ");
		scanf("%d", fin);
		while (getchar() != '\n')
		{
			myflush();
			printf(" # 끝 값을 입력하시오 : ");
			scanf("%d", fin);
		}
	}
}
int choice(int  aVal1,int aVal2)
{
	char ch;
	printf(" * %d ~ %d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:/o) : ", aVal1, aVal2);
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
				printf(" * %d ~ %d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:/o) : ",aVal1,aVal2);
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
			printf("%5d부터 %d까지의 홀수(",aVal1,aVal2);
			for (int i = aVal1; i <= aVal2; i++)
			{
				if (i % 2 == 1)
				{
					sum += i;
					printf("%d  ", i);
				}
			}
			printf("\b\b)의 합은 %d 입니다.", sum);
			break;
		}
		default:
		{
			printf("%5d부터 %d까지의 짝수(",aVal1,aVal2);
			for (int i = aVal1; i <= aVal2; i++)
			{
				if (i % 2 == 0)
				{
					sum += i;
					printf("%d  ", i);
				}
			}
			printf("\b\b)의 합은 %d 입니다.", sum);
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
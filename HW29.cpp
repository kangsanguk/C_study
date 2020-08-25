#include<stdio.h>
#pragma warning(disable:4996)

int inputUInt();
void myflush();
int transNumber(int i);
void output(int i);
void output1(int check);

int main()
{
	int n, i, count, check = 0;
	printf("시작 값(P1) : 100\n끝 값(P2) : 9999\n");
	n = inputUInt();
	printf("고집수가 %d인 숫자 출력\n", n);
	for (i = 100; i < 10000; i++)
	{
		count = transNumber(i);
		if (count == 5)
		{
			check++;
			output(i);
		}
	}
	output1(check);

	return 0;
}

int inputUInt()
{
	int n;
	printf("고집수(N) : ");
	scanf("%d", &n);
	while (getchar() != '\n' || n < 0)
	{
		myflush();
		printf("고집수(N) : ");
		scanf("%d", &n);
	}

	return n;
}

void myflush()
{
	while (getchar() != '\n');

	return;
}

int transNumber(int i)
{
	int a, b, c, d, count= 0;
	while (1)
	{
		if (i >= 100 && i < 1000)
		{
			a = i / 100; //100
			b = (i % 100) / 10; //10
			c = (i % 100) % 10; //1
			if (a == 0)
			{
				if (b == 0) break;
				else
				{
					i = b*c;
					count++;
				}
			}
			else
			{
				i = a*b*c;
				count++;
			}
		}
		else
		{
			a = i / 1000; //1000
			b = (i % 1000) / 100; //100
			c = ((i % 1000) % 100 )/ 10; //10
			d = ((i % 1000) % 100) % 10; //1
			if (a == 0)
			{
				if (b == 0)
				{
					if (c == 0) break;
					else
					{
						i = c * d;
						count++;
					}
				}
				else
				{
					i = b * c * d;
					count++;
				}
			}
			else
			{
				i = a * b * c * d;
				count++;
			}
		}
	}

	return count;
}

void output(int i)
{
	printf("%d\n", i);

	return;
}

void output1(int check)
{
	printf("총 개수 : %d개\n", check);

	return;
}
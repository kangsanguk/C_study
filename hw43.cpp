#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int input();
int primeNumber(int i);

int main()
{
	int n, i, check, count = 0;
	n = input();
	for (i = 2; i <= n; i++)
	{
		check = primeNumber(i);
		if (check == 1)
		{
			printf("%-5d", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.\n", n, count);

	return 0;
}

int input()
{
	int n;
	printf("*정수값 하나를 입력하시오 : ");
	scanf("%d", &n);

	return n;
}

int primeNumber(int i)
{
	int k, check=0;
	for (k = 2; k <= sqrt(i); k++)
	{
		if (i % k == 0) check++;
	}
	if (check == 0) return 1;
	else return 0;
}
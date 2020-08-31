#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n, i = 1, a = 1, b = 1, c, sum = 2;
	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf("%d", &n);
	printf("%d + %d", a, b);
	while (i <= (n-2))
	{
		c = a + b;
		printf(" + %d", c);
		sum += c;
		a = b;
		b = c;
		i++;
	}
	printf(" = %d\n", sum);

	return 0;
}
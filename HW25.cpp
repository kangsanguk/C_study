#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

int input(int n);
void myflush(int n);

int main()
{
	int n, num;
	srand((unsigned int)time(NULL));
	n = rand() % 100 + 1;
	num = input(n);
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", num);

	return 0;
}

int input(int n)
{
	int num, count = 0, min=0, max=100;
	while (1)
	{
		printf("# 숫자를 입력하시오 : ");
		scanf("%d", &num);
		while (1 > num || num > 100)
		{
			myflush(num);
			printf("# 숫자를 입력하시오 : ");
			scanf("%d", &num);
		}
		while (getchar() != '\n') {
			myflush(num);
			printf("#숫자를 입력하시오");
			scanf("%d", &n);
		}
		count++;
		if (n < num)
		{
			max = num;
			printf("%d 보다는 크고 %d 보다는 작습니다.\n", min, max);
		}
		else if (n > num)
		{
			min = num;
			printf("%d 보다는 크고 %d 보다는 작습니다.\n", min, max);
		}
		else break;
	}

	return count;
}

void myflush(int num)
{
	while (1 > num && num > 100) ;
	while (getchar() != '\n');
}
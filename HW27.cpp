#include<stdio.h>
#pragma warning(disable:4996)

int input();
void myflush();

int main()
{
	int result;
	result = input();
	if (result == 1) printf("\n***달걀 포장이 끝났습니다.\n");

	return 0;
}

int input()
{
	int weight, count = 1, result;
	while (count <= 10)
	{
		printf("# 계란의 무게를 입력하세요(단위 : g) : ");
		scanf("%d", &weight);
		while (getchar() != '\n')
		{
			myflush();
			printf("# 계란의 무게를 입력하세요(단위 : g) : ");
			scanf("%d", &weight);
		}
		if (weight < 150) printf("* 메추리알 가지고 장난하지 마시오~^^\n");
		else if (weight > 500) printf("* 타조알 가지고 장난하지 마시오~^^\n");
		else
		{
			printf("* 현재 달걀의 수 : %d\n", count);
			count++;
		}
	}
	result = 1;
	return result;
}

void myflush()
{
	while (getchar() != '\n');

	return;
}
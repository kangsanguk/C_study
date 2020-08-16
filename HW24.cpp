#include<stdio.h>
#pragma warning(disable : 4996)

int input();
int math(int deep);
void output(int deep, int day);

int main()
{
	int deep, day;
	deep = input();
	day = math(deep);
	output(deep, day);
}

int input()
{
	int deep;
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &deep);

	return deep;
}

int math(int deep)
{
	int distance = 0, count = 1;
	while (1)
	{
		if (deep == 0) count = 0;
		distance += 50;
		if (distance >= deep) break;
		distance -= 20;
		count++;
	}

	return count;
}

void output(int deep, int day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", (double)deep/100, day);
}
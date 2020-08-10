#include<stdio.h>
#pragma warning(disable : 4996)

int intput();
void myflush();

int main()
{
	int num, i;
	num = intput();
	for (i = 1; i <= num; i++)
	{
		printf("*");
		if (i % 5 == 0) printf("\n");
	}
	printf("\n");

	return 0;
}

int intput()
{
	int n;
	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &n);
	while (getchar() != '\n')
	{
		myflush();
		printf("# 정수값을 입력하세요 : ");
		scanf("%d", &n);
	}
	
	return n;
}

void myflush() 
{
	while (getchar() != '\n');
}
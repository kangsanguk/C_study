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
	printf("# �������� �Է��ϼ��� : ");
	scanf("%d", &n);
	while (getchar() != '\n')
	{
		myflush();
		printf("# �������� �Է��ϼ��� : ");
		scanf("%d", &n);
	}
	
	return n;
}

void myflush() 
{
	while (getchar() != '\n');
}
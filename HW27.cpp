#include<stdio.h>
#pragma warning(disable:4996)

int input();
void myflush();

int main()
{
	int result;
	result = input();
	if (result == 1) printf("\n***�ް� ������ �������ϴ�.\n");

	return 0;
}

int input()
{
	int weight, count = 1, result;
	while (count <= 10)
	{
		printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
		scanf("%d", &weight);
		while (getchar() != '\n')
		{
			myflush();
			printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
			scanf("%d", &weight);
		}
		if (weight < 150) printf("* ���߸��� ������ �峭���� ���ÿ�~^^\n");
		else if (weight > 500) printf("* Ÿ���� ������ �峭���� ���ÿ�~^^\n");
		else
		{
			printf("* ���� �ް��� �� : %d\n", count);
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
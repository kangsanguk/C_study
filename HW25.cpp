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
	printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d ��° ���� ���߼̽��ϴ�.\n", num);

	return 0;
}

int input(int n)
{
	int num, count = 0, min=0, max=100;
	while (1)
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		while (1 > num || num > 100)
		{
			myflush(num);
			printf("# ���ڸ� �Է��Ͻÿ� : ");
			scanf("%d", &num);
		}
		while (getchar() != '\n') {
			myflush(num);
			printf("#���ڸ� �Է��Ͻÿ�");
			scanf("%d", &n);
		}
		count++;
		if (n < num)
		{
			max = num;
			printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", min, max);
		}
		else if (n > num)
		{
			min = num;
			printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", min, max);
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
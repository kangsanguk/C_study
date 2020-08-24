#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>

int input();
void myflush();
void output(int type);;

int main()
{
	int choice, com, count1=0, count2=0, type;
	srand((unsigned int)time(NULL));
	while (1)
	{
		com = rand() % 3 + 1;
		choice = input();
		if (com == 1)
		{
			if (choice == 1)
			{
				type = 1;
				count1++;
			}
			else if (choice == 3)
			{
				type = 2;
				count2++;
			}
			else
			{
				type = 7;
				break;
			}
		}
		else if (com == 2)
		{
			if (choice == 2)
			{
				type = 3;
				count1++;
			}
			else if (choice == 1)
			{
				type = 4;
				count2++;
			}
			else
			{
				type = 8;
				break;
			}
		}
		else
		{
			if (choice == 3)
			{
				type = 5;
				count1++;
			}
			else if (choice == 2)
			{
				type = 6;
				count2++;
			}
			else
			{
				type = 9;
				break;
			}
		}
		output(type);
	}
	printf("���Ӱ�� : %d �� %d ��\n", count2, count1);

	return 0;
}

int input()
{
	int n;
	printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	scanf("%d", &n);
	while (1 > n || n > 3 || getchar() != '\n')
	{
		myflush();
		printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &n);
	}

	return n;
}

void myflush()
{
	while (getchar() != '\n') ;

	return;
}

void output(int type)
{
	switch (type)
	{
		case 1: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n"); break;
		case 2: printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n"); break;
		case 3: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n"); break;
		case 4: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n"); break;
		case 5: printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n"); break;
		case 6: printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n"); break;
		case 7: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n"); break;
		case 8: printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n"); break;
		case 9: printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ�.\n"); break;
		default: ;
	}

	return;
}
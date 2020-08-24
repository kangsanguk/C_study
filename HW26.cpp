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
	printf("게임결과 : %d 승 %d 무\n", count2, count1);

	return 0;
}

int input()
{
	int n;
	printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	scanf("%d", &n);
	while (1 > n || n > 3 || getchar() != '\n')
	{
		myflush();
		printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
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
		case 1: printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n"); break;
		case 2: printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n"); break;
		case 3: printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n"); break;
		case 4: printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n"); break;
		case 5: printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n"); break;
		case 6: printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n"); break;
		case 7: printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 당신이 졌습니다.\n"); break;
		case 8: printf("당신은 보 선택, 컴퓨터는 가위 선택 : 당신이 졌습니다.\n"); break;
		case 9: printf("당신은 바위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다.\n"); break;
		default: ;
	}

	return;
}
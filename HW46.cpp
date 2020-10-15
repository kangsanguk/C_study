#include<stdio.h>
#pragma warning(disable:4996)

int yearCheck(int year);
void input(int *year, int *month, int *day);
void myflush();
int Total(int year, int month, int day);
void output(int fin, int year, int month, int day);

int main()
{
	int year, month, day, total, fin;
	input(&year, &month, &day);
	total = Total(year, month, day);
	fin = total % 7;
	output(fin, year, month, day);

	return 0;
}

int yearCheck(int year)
{
	int check;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0) check = 1;
			else check = 0;
		}
		else check = 1;
	}
	else check = 0;

	return check;
}

void input(int *year, int *month, int *day)
{
	int check, a;
	while (1)
	{
		printf("* 년 월 일을 입력하시오 : ");
		scanf("%d %d %d", year, month, day);
		a = *year;
		check = yearCheck(a);
		if (getchar() != '\n') break;
		else
		{
			if (check == 0) //평년
			{
				if (*month == 2)
				{
					while (*year < 1900 || *month > 12 || *month < 1 || *day < 1 || *day > 28)
					{
						myflush();
						printf("* 년 월 일을 입력하시오 : ");
						scanf("%d %d %d", year, month, day);
						if (getchar() != '\n') break;
						if (*month != 2 && (*day == 29 || *day == 30 || *day == 31)) break;
					}
				}
				else
				{
					while (*year < 1900 || *month > 12 || *month < 1 || *day < 1 || *day > 31 || (*month == 2 && (*day == 29 || *day == 30 || *day == 31)))
					{
						myflush();
						printf("* 년 월 일을 입력하시오 : ");
						scanf("%d %d %d", year, month, day);
						if (getchar() != '\n') break;
					}
				}
			}
			else //윤년
			{
				if (*month == 2)
				{
					while (*year < 1900 || *month > 12 || *month < 1 || *day < 1 || *day > 29)
					{
						myflush();
						printf("* 년 월 일을 입력하시오 : ");
						scanf("%d %d %d", year, month, day);
						if (getchar() != '\n') break;
						if (*month != 2 && (*day == 30 || *day == 31)) break;
					}
				}
				else
				{
					while (*year < 1900 || *month > 12 || *month < 1 || *day < 1 || *day > 31 || (*month == 2 && (*day == 30 || *day == 31)))
					{
						myflush();
						printf("* 년 월 일을 입력하시오 : ");
						scanf("%d %d %d", year, month, day);
						if (getchar() != '\n') break;
					}
				}
			}
			break;
		}
	}

	return;
}

void myflush()
{
	while (getchar() != '\n');
	
	return;
}

int Total(int year, int month, int day)
{
	int i, total = 0, check, k;
	for (i = 1900; i <= year; i++)
	{
		check = yearCheck(i);
		if (check == 0) 
		{
			if ((year - i) == 0)
			{
				for (k = 1; k <= month; k++)
				{
					if ((month - k) == 0) total += day;
					else
					{
						if (k == 2) total += 28;
						else if (k == 4 || k == 6 || k == 9 || k == 11) total += 30;
						else total += 31;
					}
				}
			}
			else total += 365;
		}
		else 
		{
			if ((year - i) == 0)
			{
				for (k = 1; k <= month; k++)
				{
					if ((month - k) == 0) total += day;
					else
					{
						if (k == 2) total += 29;
						else if (k == 4 || k == 6 || k == 9 || k == 11) total += 30;
						else total += 31;
					}
				}
			}
			else total += 366;
		}
	}

	return total;
}

void output(int fin, int year, int month, int day)
{
	switch (fin)
	{
		case 0: printf("%d년 %d월 %d일은 일요일입니다.\n", year, month, day); break;
		case 1: printf("%d년 %d월 %d일은 월요일입니다.\n", year, month, day); break;
		case 2: printf("%d년 %d월 %d일은 화요일입니다.\n", year, month, day); break;
		case 3: printf("%d년 %d월 %d일은 수요일입니다.\n", year, month, day); break;
		case 4: printf("%d년 %d월 %d일은 목요일입니다.\n", year, month, day); break;
		case 5: printf("%d년 %d월 %d일은 금요일입니다.\n", year, month, day); break;
		case 6: printf("%d년 %d월 %d일은 토요일입니다.\n", year, month, day); break;
		default : ;
	}

	return;
}
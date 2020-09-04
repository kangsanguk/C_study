#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

unsigned char reverse(unsigned char aVal1, int aVal2);
int twoPow(int aVal);
void displayFan(unsigned char aVal);
int menu(const char *msg);
unsigned char openFan(const char *msg, unsigned char aVal);
unsigned char offFan(const char *msg, unsigned char aVal);
void myflush();

int main()
{
	int mValue,nfValue;
	unsigned char data=0,a = 8,b ;
	mValue = 5;
	/*b = a & 4;
	printf("a = %d, b = %d", a, b);*/
	while (mValue != 4)
	{
		mValue = menu(" 1.환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 :");
		switch (mValue)
		{
			case 1:
			{
				data = openFan(" * OPEN 할 FAN 번호를 입력하시오 : ",data);
				break;
			}
			case 2:
			{
				data = offFan(" * OFF 할 FAN 번호를 입력하시오 : ",data);
				break;
			}
			case 3:
			{
				printf("\t\t\t전체 전환 작업 실행 화면\n");
				printf("\n-----------------------------------------------------------------\n\n");
				for (int i = 8; i >= 1; i--)
				{
					data = reverse(data,i);
					if (i == 1)
					{
						displayFan(data);
					}
				}
				break;
			}
			default :
			{
				break;
			}
		}
	}
	return 0;
}

int menu(const char *msg)
{
	int value,check=1;
	printf("%s", msg);
	scanf("%d", &value);
	printf("\n-----------------------------------------------------------------\n\n");
	while (check == 1)
	{
		check = 0;
		switch (value)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			default :
			{
				printf("\n-----------------------------------------------------------------\n\n");
				myflush();
				printf("%s", msg);
				scanf("%d", &value);
				check = 1;
			}
		}
	}
	return value;
}

unsigned char openFan(const char *msg,unsigned char aVal)
{
	int value,check1=1,check2;
	printf("\t\t\tFAN 열기 작업 실행 화면\n");
	printf("\n-----------------------------------------------------------------\n\n");
	printf("%s", msg);
	scanf("%d", &value);
	while (check1 ==1)
	{
		if (value >= 1 && value <= 8)
		{
			printf("\n-----------------------------------------------------------------\n\n");
			check1=0;
		}
		else
		{
			printf("\n-----------------------------------------------------------------\n\n");
			myflush();
			printf("%s", msg);
			scanf("%d", &value);
		}
	}
	check2 = aVal & twoPow(value);
	if (check2 != 0)
	{
		printf("\t\t\t이미 열려 있습니다.\n");
		printf("\n-----------------------------------------------------------------\n\n");
		displayFan(aVal);
	}
	else
	{
		aVal = reverse(aVal,value);
		displayFan(aVal);
	}
	return aVal;
}
unsigned char offFan(const char *msg, unsigned char aVal)
{
	int value, check1 = 1,check2;
	printf("\t\t\tFAN 닫기 작업 실행 화면\n");
	printf("\n-----------------------------------------------------------------\n\n");
	printf("%s", msg);
	scanf("%d", &value);
	while (check1 == 1)
	{
		if (value >= 1 && value <= 8)
		{
			printf("\n-----------------------------------------------------------------\n\n");
			check1 = 0;
		}
		else
		{
			printf("-----------------------------------------------------------------\n\n");
			myflush();
			printf("%s", msg);
			scanf("%d", &value);
		}
	}
	check2 = aVal & twoPow(value);
	if (check2 == 0)
	{
		printf("\t\t\t이미 닫혀 있습니다.\n");
		printf("\n-----------------------------------------------------------------\n\n");
		displayFan(aVal);
	}
	else
	{
		aVal = reverse(aVal, value);
		displayFan(aVal);
	}
	return aVal;
}

unsigned char reverse(unsigned char aVal1, int aVal2)
{
	unsigned char change;
	change = twoPow(aVal2);
	aVal1 = (aVal1 ^ change);
	return aVal1;
}
int twoPow(int aVal)
{
	int value;
	for (int i = 0; i <= (aVal-1); i++)
	{
		if (i == 0)
		{
			value = 1;
		}
		else
		{
			value *= 2;
		}
	}
	return value;
}
void displayFan(unsigned char aVal)
{
	int i;
	unsigned char value;
	for ( i = 8; i >= 1; i--)
	{
		printf("%d번FAN\t ", i);
		if (i == 1)
		{
			printf("\n");
		}
	}
	for ( i = 8; i >= 1; i--)
	{
		value = aVal & twoPow(i);
		if (value == 0)
		{
			printf("  OFF\t");
		}
		else
		{
			printf("  ON\t");
		}
		if (i == 1)
		{
			printf("\n\n-----------------------------------------------------------------\n\n");
		}
	}
	return;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}
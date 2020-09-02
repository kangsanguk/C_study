#include<stdio.h>
#pragma warning(disable:4996)

int inputUInt(const char *msg);
double inputDouble(const char *msg);
int ipow(int aVal1,int aVal2);
double fpow(double aVal1, int aVal2);
void myflush();

int main()
{
	int num1, pNum,result1;
	double num2,result2;
	num1 = inputUInt(" * ���� ���� ���� �Է��Ͻÿ�:");
	pNum = inputUInt(" * ���� ���� ���� �Է��Ͻÿ�:");
	result1 = ipow(num1, pNum);
	printf("%d�� %d����  %d �Դϴ�.\n", num1, pNum, result1);
	num2 = inputDouble(" * ���� �Ǽ� ���� �Է��Ͻÿ�:");
	pNum = inputUInt(" * ���� ���� ���� �Է��Ͻÿ�:");
	result2 = fpow(num2, pNum);
	printf("%.2lf�� %d����  %.3lf �Դϴ�.", num2, pNum, result2);
}

int inputUInt(const char *msg)
{
	int value;
	printf("%s", msg);
	scanf("%d", &value);
	while (getchar() != '\n')
	{
		myflush();
		printf("%s", msg);
		scanf("%d", &value);
	}
	return value;
}

void myflush()
{
	while (getchar() != '\n');
	{
		;
	}
}

double inputDouble(const char *msg)
{
	double value;
	printf("%s", msg);
	scanf("%lf", &value);
	while (getchar() != '\n')
	{
		myflush();
		printf("%s", msg);
		scanf("%lf", &value);
	}
	return value;
}
int ipow(int aVal1, int aVal2)
{
	int value;
	if (aVal1 == 0)
	{
		return 0;
	}
	for (int i = 0; i <= aVal2; i++)
	{
		if (i == 0)
		{
			value = 1;
		}
		else
		{
			value *= aVal1;
		}
	}
	return value;
}
double fpow(double aVal1, int aVal2)
{
	double value;
	if (aVal1 == 0)
	{
		return 0.0;
	}
	for (int i = 0; i <= aVal2; i++)
	{
		if (i == 0)
		{
			value = 1.0;
		}
		else
		{
			value *= aVal1;
		}
	}
	return value;
}
#include<stdio.h>
#pragma warning(disable:4996)

int inputOne();
double inputTwo();
double calcu(int val1, double val2);
void print(double value);

int main()
{
	int weight;
	double tall,bmi;
	weight = inputOne();
	tall = inputTwo();
	bmi = calcu(weight, tall);
	print(bmi);
	return 0;
}

int inputOne()
{
	int value;
	printf("�����Ը� �Է��Ͻÿ�:");
	scanf("%d", &value);
	return value;
}
double inputTwo()
{
	double value;
	printf("Ű�� �Է��ϼ���:");
	scanf("%lf", &value);
	return value;
}

double calcu(int val1,double val2)
{
	double value;
	value = (val1) / (val2*val2);
	return value;
}

void print(double value)
{
	if (value < 18.5)
	{
		printf("�����  BMI�� %.1lf�� ��ü���Դϴ�.", value);
	}
	else
	{
		if (value < 25.0)
		{
			printf("�����  BMI�� %.1lf�� ����ü���Դϴ�.", value);
		}
		else
		{
			if (value < 30.0)
			{
				printf("�����  BMI�� %.1lf�� ��ü���Դϴ�.", value);
			}
			else
			{
				if (value < 40.0)
				{
					printf("�����  BMI�� %.1lf�� ���Դϴ�.", value);
				}
				else
				{
					printf("�����  BMI�� %.1lf�� �����Դϴ�.", value);
				}
			}
		}
	}
	return;
}
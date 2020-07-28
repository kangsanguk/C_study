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
	printf("몸무게를 입력하시오:");
	scanf("%d", &value);
	return value;
}
double inputTwo()
{
	double value;
	printf("키를 입력하세요:");
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
		printf("당신의  BMI는 %.1lf로 저체중입니다.", value);
	}
	else
	{
		if (value < 25.0)
		{
			printf("당신의  BMI는 %.1lf로 정상체중입니다.", value);
		}
		else
		{
			if (value < 30.0)
			{
				printf("당신의  BMI는 %.1lf로 과체중입니다.", value);
			}
			else
			{
				if (value < 40.0)
				{
					printf("당신의  BMI는 %.1lf로 비만입니다.", value);
				}
				else
				{
					printf("당신의  BMI는 %.1lf로 고도비만입니다.", value);
				}
			}
		}
	}
	return;
}
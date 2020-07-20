#include<stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "강상욱";
	int age = 23;
	double height = 168.5;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이 : %d\n", age);
	return;
}

void printHeight(double height)
{
	printf("  키 : %.2lf\n", height);
	return;
}
#include<stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "�����";
	int age = 23;
	double height = 168.5;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("���� : %d\n", age);
	return;
}

void printHeight(double height)
{
	printf("  Ű : %.2lf\n", height);
	return;
}
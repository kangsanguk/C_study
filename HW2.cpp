#include<stdio.h>

void main()
{
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10, money = 278970;
	m50000 = money / 50000;
	money -= m50000 * 50000;
	m10000 = money / 10000;
	money -= m10000 * 10000;
	m5000 = money / 5000;
	money -= m5000 * 5000;
	m1000 = money / 1000;
	money -= m1000 * 1000;
	m500 = money / 500;
	money -= m500 * 500;
	m100 = money / 100;
	money -= m100 * 100;
	m50 = money / 50;
	money -= m50 * 50;
	m10 = money / 10;
	money -= m10 * 10;
	printf("50000�� => %d��\n10000�� => %d��\n5000�� => %d��\n1000�� => %d��\n500�� => %d��\n100�� => %d��\n50�� => %d��\n10�� => %d��\n", m50000, m10000, m5000, m1000, m500, m100, m50, m10);
	return;
}
#include<stdio.h>

void main()
{
	int hour, min, sec, time = 54321, time2 = 54321;
	hour = time / (60 * 60);
	time -= (60 * 60) * hour;
	min = time / 60;
	time -= 60 * min;
	sec = time;
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", time2, hour, min, sec);
}
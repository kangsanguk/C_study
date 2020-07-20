#include<stdio.h>

void main()
{
	int hour, min, sec, time = 54321, time2 = 54321;
	hour = time / (60 * 60);
	time -= (60 * 60) * hour;
	min = time / 60;
	time -= 60 * min;
	sec = time;
	printf("%d초는 %d시간 %d분 %d초 입니다.\n", time2, hour, min, sec);
}
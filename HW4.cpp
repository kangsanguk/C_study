#include<stdio.h>

int main()
{
	double sec, time, day = 365.2422, day2 = 365.2422;
	int iday, hour, min;
	iday = (int)day;
	day -= iday;
	time = day * 24 * 60 * 60;
	hour = (int)time / (60*60);
	time -= hour * (60 * 60);
	min = (int)time / 60;
	time -= min * 60;
	sec = time;
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n", day2, iday, hour, min, sec);

	return 0;
}
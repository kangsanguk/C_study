#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 100

int main()
{
	char name[MAX],s[5];
	int len;
	double tall;
	printf("#성명 입력:");
	fgets(name, MAX, stdin);
	len = strlen(name);
	name[len - 1] = NULL;
	printf("#키 입력(cm)단위:");
	scanf("%lf", &tall);
	printf("#성별 입력(M/F):");
	scanf("%s", s);
	if (s[0] == 77)
	{
		printf("%s씨의 키는 %.1lfcm 이고 남성입니다.",name, tall);
	}
	else
	{
		printf("%s씨의 키는 %.1lfcm 이고 여성입니다.", name, tall);
	}
	return 0;
}
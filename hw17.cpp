#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 100

int main()
{
	char name[MAX],s[5];
	int len;
	double tall;
	printf("#���� �Է�:");
	fgets(name, MAX, stdin);
	len = strlen(name);
	name[len - 1] = NULL;
	printf("#Ű �Է�(cm)����:");
	scanf("%lf", &tall);
	printf("#���� �Է�(M/F):");
	scanf("%s", s);
	if (s[0] == 77)
	{
		printf("%s���� Ű�� %.1lfcm �̰� �����Դϴ�.",name, tall);
	}
	else
	{
		printf("%s���� Ű�� %.1lfcm �̰� �����Դϴ�.", name, tall);
	}
	return 0;
}
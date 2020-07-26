#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define max 20

int main()
{
	char fname[max], name[max],empty[2*max];
	int i, len1, len2;
	i = 0;
	printf("#성을 입력하시오:");
	scanf("%s", fname);
	printf("#이름을 입력하시오:");
	scanf("%s", name);
	printf("%s %s\n", fname, name);
	len1 = strlen(fname);
	len2 = strlen(name);
	while (i < 2*max)
	{
		if (i == len1 - 1)
		{
			printf("%d", len1);
		}
		else if (i == len1 + len2)
		{
			printf("%d", len2);
		}
		else
		{
			printf(" ");
		}
		i++;
	}
	return 0;
}
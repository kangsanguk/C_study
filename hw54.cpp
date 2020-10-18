#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
#define MAX 99
int input(char *aStr);
int chooseNum(char *aStr, int len);
void print(char *aStr, int aValue);
void myflush();
int powten(int num);

int main()
{
	int len,total;
	char str[MAX];
	len = input(str);
	while (len != 0)
	{
		total = chooseNum(str, len);
		print(str, total);
		printf("\n\n");
		len = input(str);
	}
}

int input(char *aStr)
{
	int len;
	printf(" # 문장을 입력하시오 :");
	scanf("%s", aStr);
	myflush();
	if (strcmp("end\0", aStr) == 0)
	{
		return 0;
	}
	len = strlen(aStr);
	return len;
}
int chooseNum(char *aStr,int len)
{
	int count,num=0;
	for(int k = 0;k<=len;k++)
	{
		count = 0;
		while (aStr[k+count] - '0' < 10&& aStr[k + count] - '0'>=0)
		{
			count++;
		}
		count = count - 1;
		for (int i = count; i >= 0; i--)
		{
			num += (aStr[(k+count) - i]-'0') * powten(i);
		}
		k = k + (count + 1);
	}
	return num;
}
void print(char *aStr,int aValue)
{
	printf("\"%s\"내의 총 숫자는 [%d]입니다.", aStr, aValue);
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

int powten(int num)
{
	int pow=1;
	for (int i = 0; i < num; i++)
	{
		pow *= 10;
	}
	return pow;
}
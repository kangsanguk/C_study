#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;
	printf(" # ��� ���μ��� �Է��Ͻÿ� :");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		for (int j = 2 * num; j > i*2; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
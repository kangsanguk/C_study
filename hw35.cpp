#include<stdio.h>
#pragma warning(disable :4996)

int main()
{
	int num,total = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("0���� ū ���� �Է��Ͻÿ�(%d��°) : ",i+1);
		scanf("%d",&num);
		if (num > 0)
		{
			total += num;
		}
		else
		{
			i--;
		}
	}
	printf("�Էµ� ���� ���� : %d", total);
	return 0;
}
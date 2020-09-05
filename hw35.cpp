#include<stdio.h>
#pragma warning(disable :4996)

int main()
{
	int num,total = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("0보다 큰 수를 입력하시오(%d번째) : ",i+1);
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
	printf("입력된 값의 총합 : %d", total);
	return 0;
}
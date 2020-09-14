#include<stdio.h>

int swap(int size, int *p, int i);

int main()
{
	int ary[] = {1, 2, 3, 4, 5};
	int size, i;
	size = sizeof(ary) / sizeof(ary[0]);
	printf("처음 배열에 저장된 값 : ");
	for (i = 0; i < size; i++)
	{
		printf(" %d", ary[i]);
	}
	printf("\n바뀐 배열에 저장된 값 : ");
	for (i = 0; i < size; i++)
	{
		ary[i] = swap(size, ary, i);
		printf(" %d", ary[i]);
	}
	printf("\n");

	return 0;
}

int swap(int size, int *p, int i)
{
	int n;
	n = p[i];
	p[i] = p[(size - 1) - i];
	p[(size - 1) - i] = n;
	if (size / 2 > i) return p[i];
	else return n;
}
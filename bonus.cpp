#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int ***myalloc(int page, int row, int calumn);
void datainput(int ***p, int page, int row, int calumn);
void dataoutput(int ***p, int page, int row, int calumn);
void mydelete(int ***p, int page, int row);

int main()
{
	int ***p,page,row, calumn;
	printf("page 수 입력 : ");
	scanf("%d", &page);
	printf("row 수 입력 : ");
	scanf("%d", &row);
	printf("calumn수 입력 : ");
	scanf("%d", &calumn);
	p = myalloc(page, row, calumn);
	if (p != NULL)
	{
		datainput(p, page, row, calumn);
		dataoutput(p, page, row, calumn);
		mydelete(p, page, row);
	}
}

int *** myalloc(int page, int row, int calumn)
{
	int ***p;
	p = (int ***)malloc(sizeof(int**)*page);
	if (p == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < page; i++)
	{
		*(p + i) = (int **)malloc(sizeof(int*)*row);
		if (p[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return NULL;
		}
		for (int j = 0; j < row; j++)
		{
			*(*(p + i) + j) = (int*)malloc(sizeof(int)*calumn);
			if (p[i][j] == NULL)
			{
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; l < j; l++)
					{
						free(p[k][l]);
					}
					free(p[k]);
				}
				free(p);
			}
		}
	}
	return p;
}

void datainput(int ***p, int page, int row, int calumn)
{
	for (int i = 0; i < page; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int k = 0; k < calumn; k++)
			{
				p[i][j][k] = (i * 100) + (j * 10) + k + 1;
			}
		}
	}
}

void dataoutput(int ***p, int page, int row, int calumn)
{
	for (int i = 0; i < page; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int k = 0; k < calumn; k++)
			{
				printf("%4d", p[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
}
void mydelete(int ***p, int page, int row)
{
	if (p == NULL)
	{
		return;
	}
	else
	{
		for (int i = 0; i < page; i++)
		{
			for (int j = 0; j < row; j++)
			{
				free(p[i][j]);
			}
			free(p[i]);
		}
		free(p);
	}
}
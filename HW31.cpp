#include<stdio.h>
#pragma warning (disable:4996)

char menu();
void myflush();
int inputInt(const char *msg);
int deposit(int in, int total);
int withdraw(int total, int out);

int main()
{
	char select;
	int  in, out, total = 0;
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", total);
	while (1)
	{
		select = menu();
		if (select == 'i')
		{
			in = inputInt("# �Աݾ��� �Է��ϼ��� : ");
			if (in < 0) in = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			else
			{
				total = deposit(in, total);
				printf("* ���� �ܾ��� %d�� �Դϴ�.\n", total);
			}

		}
		else if (select == 'o')
		{
			out = inputInt("# ��ݾ��� �Է��ϼ��� : ");
			if (out < 0) in = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			else
			{
				if (total < out)
				{
					printf("* �ܾ��� �����մϴ�.\n");
					printf("* ���� �ܾ��� %d�� �Դϴ�.\n", total);
				}
				else
				{
					total = withdraw(total, out);
					printf("* ���� �ܾ��� %d�� �Դϴ�.\n", total);
				}
			}
		}
		else break;
	}

	return 0;
}

char menu()
{
	char select;
	printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
	scanf("%c", &select);
	while (select != 'i' && select != 'o' && select != 'q')
	{
		myflush();
		printf("\n# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &select);
	}
	return select;
}

void myflush() 
{
	while (getchar() != '\n');

	return;
}

int inputInt(const char *msg)
{
	int in;
	printf("%s", msg);
	scanf("%d", &in);
	while (getchar() != '\n')
	{
		myflush();
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
		scanf("%d", &in);
	}

	return in;
}

int deposit(int in, int total) 
{
	total += in;

	return total;
}

int withdraw(int total, int out)
{
	total -= out;

	return total;
}
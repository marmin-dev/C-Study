#include <stdio.h>
int main(void)
{
	int floor;
	printf("�������� �����̴ϱ�?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j <= floor - 1; j++)
		{
			printf(" ");
			{
				for (int k = 0; k <= i * 2; k++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
	}
}
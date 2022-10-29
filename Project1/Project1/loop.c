#include <stdio.h>

int main(void)
{
	//이중반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문: %d\n", i);


		for (int j = 1; j <= 5; j++)
		{
			printf("두번째 반복문: %d\n", j);
		}*/
	//구구단을 애자
	
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);

		}
	}*/
	/*for (int i = 0; i<5; i++)
	{ 
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j <= 5-1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	int floor;
	printf("몇층으로 쌓을겁니까?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j <= floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i*2; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
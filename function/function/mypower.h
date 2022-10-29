#include <stdio.h>
#include <math.h>

int get_integer(void)
{
	int num1 = 0;
	printf("정수를 입력하세요:");
	scanf_s("%d", &num1);

	return num1;
}
int power(int x, int y)
{
	return pow(x, y);
}

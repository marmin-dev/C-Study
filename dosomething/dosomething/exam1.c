#include <stdio.h>

#define PI 3.14
#define PRODUCT(X,Y)((X*Y))
#define CIRCLE_AREA(r) (PRODUCT((r),(r))*PI)
int main(void)
{
	float radious = 0;
	printf("������ �Է�:");
	scanf_s("%f", &radious);
	printf("������ %f�� ���� ���� %f\n", radious, CIRCLE_AREA(radious));



	return 0;
}
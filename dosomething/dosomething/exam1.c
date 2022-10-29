#include <stdio.h>

#define PI 3.14
#define PRODUCT(X,Y)((X*Y))
#define CIRCLE_AREA(r) (PRODUCT((r),(r))*PI)
int main(void)
{
	float radious = 0;
	printf("반지름 입력:");
	scanf_s("%f", &radious);
	printf("반지름 %f인 원의 넓이 %f\n", radious, CIRCLE_AREA(radious));



	return 0;
}
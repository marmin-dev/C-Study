#include <stdio.h>
static char pro[256];
int num1 = 0;
void printer();
int out_add(num0,num2);
int main(void)
{
	printer();
	



	return 0;
}
void printer()
{
	pro[256] = "전역변수를 연결하는 함수 프로그램";
	printf("%s", pro, sizeof(pro));
	return;
}
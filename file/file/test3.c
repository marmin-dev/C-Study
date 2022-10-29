#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char alpha = ' ';//알파벳 변수 초기화
	printf("알파벳 입력:");
	scanf_s("%c", &alpha, sizeof(alpha));
	printf("입력한 알파벳:%c\n", alpha);
	printf("알파벳 아스키코드값:%d\n", alpha);
	printf("8번째 해당하는 알파벳 %c\n", alpha + 8);


	

	return 0;
}
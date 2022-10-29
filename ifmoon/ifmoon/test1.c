#include <stdio.h>

int main(void)
{
	char input = ' ';
	printf("문자를 입력하세요");
	scanf_s("%c", &input,sizeof(input));

	if ('A' <= input <= 'Z') {
		printf("%c는 대문자 입니다", input);
	}
	else if ('a' <= input <= 'z') {
		printf("%c는 소문자 입니다", input);
	}
	else if ('00' <= input <='99') {
		printf("%c는 숫자 입니다", input);
	}
	else
	{
		printf("%c는 기타문자입니다");

	}
	return 0;
}
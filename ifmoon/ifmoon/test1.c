#include <stdio.h>

int main(void)
{
	char input = ' ';
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%c", &input,sizeof(input));

	if ('A' <= input <= 'Z') {
		printf("%c�� �빮�� �Դϴ�", input);
	}
	else if ('a' <= input <= 'z') {
		printf("%c�� �ҹ��� �Դϴ�", input);
	}
	else if ('00' <= input <='99') {
		printf("%c�� ���� �Դϴ�", input);
	}
	else
	{
		printf("%c�� ��Ÿ�����Դϴ�");

	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char alpha = ' ';//���ĺ� ���� �ʱ�ȭ
	printf("���ĺ� �Է�:");
	scanf_s("%c", &alpha, sizeof(alpha));
	printf("�Է��� ���ĺ�:%c\n", alpha);
	printf("���ĺ� �ƽ�Ű�ڵ尪:%d\n", alpha);
	printf("8��° �ش��ϴ� ���ĺ� %c\n", alpha + 8);


	

	return 0;
}
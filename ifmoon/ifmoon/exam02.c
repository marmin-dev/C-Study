////조건문에 대한 실습 - if~else 문
//
//
//#include <stdio.h>
//
//int main(void)
//{//홀수와 짝수를 판별하는 프로그램
//	int input_num = 0, result = 0;
//	
//	printf("하나의 정수를 입력:");
//	scanf_s("%d", &input_num);
//	//result 값은 0이 아니면 1이된다. 1이면 홀수라는 뜻이다
//	result = input_num % 2;
//
//	//홀수라면
//	if (result != 0) {
//		printf("입력한 정수 %d는 \"홀수\"입니다\n", input_num); }
//	else
//	{
//		printf("입력한 정수 %d 는 \"짝수\"입니다\n", input_num);
//	}
//		
//	
//	return 0;
//}
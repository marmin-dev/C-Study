//#include <stdio.h>
//int input_num();
//int power(int pow_target, int square);
//int sum(int pow_target, int square);
//int main(void)
//{
//	int num1 = 0, num2 = 0, result = 0, result2 = 0;
//	printf("[Main()함수 영역]");
//	printf("제곱 대상을 입력하세요");
//	num1 = input_num();
//	printf("지수 (제곱값)을 입력하세요");
//	num2 = input_num();
//	result = power(num1, num2);
//	printf("%d 의 %d승은 %d입니다\n", num1, num2, result);
//	result2 = sum(num1, num2);
//	printf("%d의 %d 승까지 총합은 %d 입니다\n", num1, num2,result2);
//
//	return 0;
//}
//int input_num()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	return i;
//}
//int power(int pow_target, int square)
//{
//	if (square == 0)
//		return 1;
//	printf("%d의 %d승\n", pow_target,square);
//	return pow_target * power(pow_target, square - 1);
//}
//int sum(int pow_target, int square)
//{
//	int result = 0, result2 = 0;
//	if (square == 0)
//		return 1;
//	printf("%d의 %d승\n", pow_target, square);
//	result= pow_target * power(pow_target, square - 1);
//	return result2 += result;
//}
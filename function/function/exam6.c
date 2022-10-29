////수학 함수에 대한 실습 -2 절대값을 구하는 fabs 함수
////다른 언어에서는 abs로 되어있다.
////fabs():매개변수로 들어온 값의 절대값을 출력해주는 함수
//
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	double result = 0.0, weight1 = 0.0, weight2 = 0.0;
//	printf("내 몸무게 입력:");
//	scanf_s("%lf", &weight1);
//	
//	
//	printf("선생님 몸무게 입력:");
//	scanf_s("%lf", &weight2);
//	
//	result = weight1 - weight2;
//	printf("[뺄셈 연산]%.2f-%.2f=%.2f\n", weight1, weight2, result);
//	result = fabs(weight1 - weight2);//절대값을 산출함
//	printf("[뺄셈 연산]%.2f-%.2f=%.2f\n", weight1, weight2, result);
//	return 0;
//}
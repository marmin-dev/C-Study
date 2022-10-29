////pow 함수에 대해 알아보자,sqrt를 이제 곁들인
////pow();매개변수기 2개인데 1는 제곱을 할 대상이 되고,또하나는 지수가 된다
////제곱값을 구하는 함수
////sqrt 매개변수 하나 루트값을 구하기(제곱근을 구하는 함수가 된다)
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int choice = 0;
//	double result = 0.0, num1 = 0.0, num2 = 0.0;
//	do {
//		printf("1.제곱값 출력 프로그램\n");
//		printf("2.제곱근 출력 프로그램\n");
//		printf("3.프로그램 종료\n");
//
//		printf("번호선택(1~3): ");
//		scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			printf("1.제곱값 출력 프로그램\n");
//			printf("제곱 대상 실수 입력:");
//			scanf_s("%lf", &num1);
//
//			printf("지수입력:");
//			scanf_s("%lf", &num2);
//			result = pow(num1, num2);
//			printf("%lf의 %lf승의 결과값;%lf",num1,num2,result);
//			break;
//		case 2:
//			printf("2.제곱근 출력 프로그램\n");
//			printf("제곱근을 구할 실수 입력:");
//			scanf_s("%lf", &num1);
//			result = sqrt(num1);
//			printf("%lf의 제곱근 결과값:%lf",num1,result);
//			break;
//		case 3:
//			printf("프로그램을 종료합니다\n");
//			return 0;
//			break;
//		default:
//			printf("선택 오류! 숫자 1,2,3중에서 선택하세요\n\n");
//			continue;//dowhile 문을 사용해서 다시 처음으로 돌아간다
//			break;
//		}
//
//
//	} while (1);
//
//
//
//
//	return 0;
//}
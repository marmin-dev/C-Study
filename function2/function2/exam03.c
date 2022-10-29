////함수 원형 종류에 대한 실습 매개변수만 존재하는 함수
////매개변수만 존재하는 함수는 리턴타입 역시 보이드 
////함수에서 호출이 일어날때 반드시 매개변수의 타입과 개수에 맞게끔 호출이 이루어져야 에러가 없다
//#include <stdio.h>
//#define inch 2.5399
////main 에서 인치를 입력받아서 함수 호출을 통해 센티미터로 환산해서 결과 값을 출력을 하게끔 하는 예제
//void exchange(float inCh);
//
//int main(void)
//{
//	float input = 0.0f;
//	printf("인치 (inch)를 센티미터cm 으로 환산\n");
//	printf("인치 입력:");
//	scanf_s("%f", &input);
//
//	printf("\n");
//
//	exchange(input);
//	printf("\n");
//	return 0;
//}
//void exchange(float inCh)
//{
//	float swap = 0.0f;
//	swap = inCh * inch;
//	printf("수행 단위환산 : %.2f인치는 %.2f센티미터 입니다",inCh,swap);
//
//	return;
//}
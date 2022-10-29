////////함수와 변수실습-7
////////동적변수와 정적변수에 대한 실습
////////정적변수;전역변수와 마찬가지로 프로그램의 실행과 동시에 메모리(데이터영역)에 할당
////////데이터타입의 크기만큼 할당을 받고 초기화를 하지 않아도 자동으로 데이터 타입의 크기에 맞게
////////자동 초기화가 이루어진다
////////생명주기가 프로그램의 실행과 종료에 의해서 같이 할당되고 소멸이 이루어진다. 
////////정적변수가 동적변수와 차이점이라면 정적변수가 선언된 함수 또는 코드 블록 구간을 벗어나도
////////정적변수의 값은 유지가 된다. 정적변수를 선언하기 위해서는 변수명 앞에 static 키워드를 붙여주면
////////된다
//////
////////정적변수의 자동 초기화 실습
//////#include <stdio.h>
//////static int num1;//전역 정적변수 선언(초기화 하지 않음)
//////int main(void)
//////{
//////	
//////	static double num2; //지역 정적 변수 선언(초기화 하지 않음)
//////
//////
//////	printf("전역 정적(static)변수 num1의 초기값:%d\n", num1);
//////	printf("전역 정적(static)변수 num2의 초기값:%d\n", num2);
//////	return 0;
//////}//정적(static)변수를 선언하고 지역변수의 증감 값의 차이를 보는 실습
////#include <stdio.h>
////
////void start();
////
////int main(void)
////{//정적변수는 함수가 종료되더라도 값을 유지할때 사용된다 하지만 동적변수는 함수가 종료되면
////	//할당된 공간이 소멸되기 때문에 아래와 같은 결과가 출력이 된다.
////	printf("start");
////	start();
////	 start();
////	 start();
////
////}
////void start()
////{
////	static int static_count = 0;
////	auto auto_count = 0;
////	printf("지역정적변수 %d\t 지역동적변수 =%d \n", static_count, auto_count);
////	static_count++;
////	auto_count++;
////	return;
////}
//#include <stdio.h>
//void credit(int cash);
//int main(void)
//{
//	int cnt = 0, cash = 0;
//	for (cnt = 1; cnt <= 3; cnt++)
//	{
//		printf("%d회 실행\n", cnt);
//		printf("현금:");
//		scanf_s("%d", &cash);
//		printf ("입금\t\t출금\t\t잔액\n");
//		credit(cash);
//
//	}
//
//	return 0;
//}
//void credit(int cash)
//{
//	static int bal = 0;
//	if (cash > 0)
//	{
//		printf("%d\t\t\t\t", cash);
//
//	}
//	else {
//		printf("\t\t\t%d\t\t", -cash);
//	}
//	//잔액 계산
//	bal += cash;
//	printf("%d\n", bal);
//	
//	return;
//}
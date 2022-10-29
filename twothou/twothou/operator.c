////비트연산자에 대한 연습
////비트연산자란 cpu에 들어오는 데이터를 비트 단위로 처리하는 연산자를 의미한다
////비트연산자의 종류에는 논리 연산자 (and or xor not) shift 연산자가 존재한다
////c언어가 활용되는 분야가 시스템 프로그래밍, 임베디드 프로그래밍 분야
//
//#include <stdio.h>
//
//int main(void)
//{
//	int val1 = 0, val2 = 0, val3 = 0, val4 = 0, val5 = 0;
//	int a = 5, b = 3;//5는 2진수 (0000 0101),3은 2진수 0000 0011
//	
//	printf("a=5,b=3일때 \n");
//	// &하나는 비트앤드 연산자이고 곧 둘다 피연산자의 2개의 값이 모두 1일때만 리턴
//	//나머지는 다 0 이다
//	val1 = a & b;
//
//	printf("1,a&b :%d\n", val1);
//	//피연산자의 비트값이 둘다 0이여야 0을리턴한다
//	val2 = a | b;
//	printf("1,a|b :%d\n", val2);
//
//	val3 = a ^ b;
//	printf("1,a^b :%d\n", val3);
//
//	val4 = ~val3;
//	printf("1,a&b :%d\n", val4);
//	//기호는 ~ 이며 모든것을 반전시킨다 1의 보수개념
//
//	val5 = ~val4;
//	printf("1,a&b :%d\n", val5);
//	//2의 보수의 공식
//	//1단계 10진수를 2진수로 변환시키고 
//	//2단계 변환된 2진수를 0은 1로 1은 0으로 리버스 시킨다
//	//3단계 1의 보수값에 +1을하면 비로소 2의 보수가 완성된다
//
//	return 0;
//}
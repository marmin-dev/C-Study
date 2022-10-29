//#include <stdio.h>
////수식(expression):계산에 필요한 피연산자와 operand와 연산자 operatop가 결합된 식
////자체를 의미 피연산자는 예:3+2=5의 경우 3과 2는 오퍼랜드이며 +는 연산자이다 
////연산자에는 우선순위라는것이 있다 priority of operation, 가독성이 좋게하기위해
////연산의 우선순위를 디테일하게 외울필요는없다. 단항 이항 삼항 
////피연산자의 개수에 따라 단항,이항,삼항 연산으로 나뉜다
////산술연산자에 대한 실습
////+,-,*,% 연산자를 이용하여 계산을 실행하는 연산자가 산술연산자이다.
//
//int main(void)
//{
//	int num1 = 5;
//	int num2 = 2;
//	int result = 0;
//	result = num1 + num2;
//	printf("result=%d\n", result);
//	//+연산
//	//2.5가 나올것을 기대하지만 int 타입이므로 소수점 자리들은 모두 버린다
//	result = num1 - num2;
//	printf("result=%d\n", result);
//	result = num1 * num2;
//	printf("result=%d\n", result);
//	result = num1 / num2;
//	printf("result=%d\n", result);
//	result = num1 % num2;
//	printf("result=%d\n", result);
//	
//
//	//0으로 나누기는 출력이 되지않는다. 곧 에러이다 모든 수는 0으로 나눌수없다
//	
//
//
//	return 0;
//}
////순환(재귀)함수(recursive function , recursive call)실습
////순환 (재귀)함수 : 함수 호출 후 , 그 함수내에서 자기 자신을 계속 호출하는 것이다. 탈출코드가 없다면
////무한 루프에 빠지게 된다. 
////팩토리얼의 실습
//
//#include <stdio.h>
//int factorial(int num);
//int main(void)
//{
//	int input = 0, result = 0;
//	printf("메인함수 영역이다\n");
//	printf("전달>factorial 구할 정수 입력을 해주세요:");
//	scanf_s("%d", &input);
//	printf("호출>factorial()함수 호출하여 팩토리얼 값 계산:\n");
//	result = factorial(input);//값에 의한 호출 input을 인수값으로 전달 하여 매개변수에 복사
//	//결과 값 출력
//	printf("결과>%d!의 최종값: %d\n\n", input, result);
//
//
//
//
//
//
//	return 0;
//}
//int factorial(int num)//사용자 정의 함수 구현부
//{
//	printf("factorial함수영역이다.\n\n");
//	if (num == 1)//재귀함수의 무한루프를 탈출하는 코드
//	{
//		return 1;
//	}
//	else 
//	{//num!=1 이라면 
//		printf("수행>%d! : %d * (%d -1)\n", num, num, num);
//		return(num * factorial(num - 1));//자기의 함수인 팩토리얼 함수를 지속적으로 호출
//	}	
//}
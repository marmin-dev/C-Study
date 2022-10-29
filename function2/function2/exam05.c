////반환값과 매개변수가 모두 존재하는 함수를 만들어보자 
////키보드로 부터 입력을 받아서 누적하는 예제
//#include <stdio.h>
//
//int sum(int a);
//
//int main(void)
//{
//	int input = 0, hap = 0;
//	printf("1부터 입력받은 수 까지의 누적 합계를 출력합니다.\n");
//	
//	printf("어디까지 누적합을 구할까요?\n");
//	scanf_s("%d", &input);
//	hap = sum(input);
//	printf("결과 1부터 %d 까지의 누적합계: %d", input, hap);
//
//
//
//	return 0;
//}
//int sum(int a)
//{
//	int i = 0, result = 0;
//	for (i = 1; i <= a; i++)
//	{
//		result += i;
//	}
//	return result;
//}
////논리연산자에 대한 실습-2 (윤년인지 판단하기)
////윤년의 기준 조건
////윤년의 연도는 4의 배수 &&(100으로 나눈 나머지가 0인 연도는 제외)
////||400으로 나눈 나머지가 0인연도
//
//#include <stdio.h>
//int main(void)
//{
//int input_year = 0, year = 0;
//printf("윤년이면 1, 평년이면 0이라고 출력됨\n");
//printf("연도 입력:");
//scanf_s("%d", &input_year);
////윤년을 구하는 공식을 조건식으로 아래와 같이 코드로 나타냄
//year = ((input_year % 4 == 0) && !(input_year % 100 == 0) || (input_year % 400 == 0));
//printf("입력한 %d 년은 %d 에 해당됩니다\n", input_year, year);
//return 0;
//}
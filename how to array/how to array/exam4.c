////배열에 대한 실습-4
////배열과 반복문 중에서 for 문과 궁합이 잘맞다
////배열을 사용하여 3개의 과목의 점수를 사용자로 부터 입력받은 뒤 총점과 평균을 구하는 프로그램
////
//#include <stdio.h>
//#define Length 3//매크로 상수 선언 및 초기화
//int main(void)
//{
//	int score[Length] = { 0 }; //정수형 배열 선언 및 초기화
//	int count = 0, sum = 0;
//	double avg = 0.0;
//
//	//사용자로부터 3개의 과목 점수 반복해서 입력받는 코드
//	for (count = 0; count < Length; count++)
//	{
//		printf("과목 %d 점수 : ", count + 1);
//		scanf_s("%d", &score[count]); //변수와 동일하기 때문에 주소 참조 연산자 &를 사용한다.
//		//score 는 배열명이기 때문에 주소를 가지고 있다.
//	}
//	//입력 받은 3개의 과목의 총점을 구하는 코드
//	for (count = 0; count < Length; count++)
//	{
//		sum += score[count];//과목별 누계
//	}
//	//평균을 구하는 코드
//	avg = (double)sum / Length;
//
//	printf("총점:%d\n", sum);
//	printf("평균:%.2lf\n", avg);
//	return 0;
//}
////배열에 대한 실습-5
////배열의 요소들을 값을 랜덤(난수) 출력하는 예제
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define Length 10//매크로 상수 선언 및 초기화
//int main(void)
//{
//	int rand_num[Length] = { 0 };
//	int count = 0;
//	srand((unsigned)time(NULL));//시간 차별화로써 같은 난수가 발생되지 않도록함
//	printf("1~500사이의 숫자를 랜덤 출력\n");
//	for (count = 0; count < Length; count++)
//	{
//		printf("rand_num[%d}=%d\n", count, rand_num[count]);
//	}
//	printf("==================================\n");
//	// 1에서 부터 500까지 랜덤 숫자를 발생 시켜야한다 rand_num이라는 배열에 저장을 하는 코드
//	for (count = 0; count < Length; count++)
//	{
//		rand_num[count] = 1 + rand();//1~500사이 범위조정 범위 조정하지않으면 데이터값 끝에서 끝나융
//	}
//	//rand_num 배열에 저장되어진 랜덤한 숫자들의 값을 출력하는 코드
//	for (count = 0; count < Length; count++)
//	{
//		printf("rand_num[%d}=%d\n", count, rand_num[count]);
//	}
//
//
//
//
//	return 0;
//}
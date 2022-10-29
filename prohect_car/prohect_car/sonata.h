#include <stdio.h>
#include <stdlib.h>//rand srand 함수
#include <time.h>
int sonata2000();
int sonata2000();
int bodynum();
char color[5][10] = { "흰색","검정색","파란색","은색","빨간색" };
int sonata2000()
{
	int engine = 2000;//cc값
	static int num = 10000;
	//소나타 엔진의 고유번호가 되어야 하기 때문에 값이 초기화가 되지않는 정적변수가되어야함
	printf("\n2000cc소나타 엔진 고유 번호: %d", ++num);
	//차대번호 발급 함수를 호출
	printf("소나타 전체 차대 번호:%d\n", bodynum());
	printf("엔진:%dcc 파워엔진", engine);
	//srand((unsigned)time(NULL));
	printf("색상:%s\n", color[rand() % 5]);//맨처음 호출될때 rand 함수를 사용했기에 랜덤하게 색상이 출력됨
	return 0;
}
int sonata2400()
{
	int engine = 2400;//cc값
	static int num = 20000;
	//소나타 엔진의 고유번호가 되어야 하기 때문에 값이 초기화가 되지않는 정적변수가되어야함
	printf("\n2000cc소나타 엔진 고유 번호: %d", ++num);
	//차대번호 발급 함수를 호출
	printf("소나타 전체 차대 번호:%d\n", bodynum());
	printf("엔진:%dcc 하이브리드엔진", engine);
	//srand((unsigned)time(NULL));//종자값 씨드변경하기 시간을  기준으로한다
	printf("색상:%s\n", color[rand() % 5]);//맨처음 호출될때 1이기때문에 검정색부터 생성된다
	return 0;
}
int bodynum()
{
	static int bodyNumber = 100000;

	return ++bodyNumber;
}

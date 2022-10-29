////라이브러리 함수에 대한 실습 srand rand()
////srand 함수는 1970년 1.1부터 지금까지 흘러온시간을 잡아서 다른 난수를 발생시키는 함수이다
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define NUM 45
//int main(void)
//{
//int cnt = 0;
//printf("1~45까지 임의의 숫자 6개 출력합니다.\n");
//srand((unsigned)time(NULL));//시드값에 따라 달라진다. 시간은 계속 흐르니 특정 시간대를 잡아서
////사용한다
//
//printf("srand 함수를 이용하여 임의의 수를 출력합니다\n");
//for (cnt = 1; cnt < 6; cnt++)
//{
//	printf(" %d", 1 + (rand() % NUM));
//}
//printf("\n\n");
//return 0;
//}
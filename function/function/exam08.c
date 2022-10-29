////유틸리티 함수에 대한 실습 sleep 함수
////sleep함수는 잠을 자다 즉 cpu가 일시정지를 할때 사용을 한다
////cpu의 실행을 일시정지 timed waiting 상태로 만든다. 매개변수로 들어가는 단위가
////1000분의 1초이다. 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include<windows.h>//sleep함수를 사용하기 위함
//
//int main(void)
//{
//	system("tilte Sleep()함수에 대한 실습");//타이틀 설정
//	printf("현재 프로그램이 존재하는 디렉토리 정보 출력\n");
//	system("dir");
//	printf("\n\n이 프로그램은 10초 후 종료됩니다.");
//	Sleep(10000); //10초간 일시정지
//	//무한루프를 할때 잠시 멈춰서 할때도 괜찮은 함수이다.
//	//카운팅되는 시간을 할때도 괜찮다. 많이사용하면 cpu에 부하가 걸린다
//	//꼭 필요하다 생각하면 사용해라
//
//	system("cls");
//	
//
//
//	return 0;
//}
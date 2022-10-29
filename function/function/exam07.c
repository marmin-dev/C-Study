////유틸리티 함수에 대한 실습-2
////system()함수는 들어오는 매개변수의 값을 직접 운영체제에게 전달하는 함수이다
//
//
//#include <stdio.h>
//#include <stdlib.h>//시스템 함수를 사용하기 위함
//#include <conio.h>//_getch()를 이용하기위해
//
//int main(void)
//{
//	system("title system()함수 사용 프로그램");//실행창의 타이틀을 출력title
//	printf("현재 프로그램이 존재하는 디렉토리(폴더와 파일)의 정보 출력\n");
//
//
//	system("dir");//현재 디렉토리의 내용을 출력하는 명령어
//	
//	printf("\n\n 아무 키나 누르면 프로그램이 종료됩니다");
//	printf("문자입력:");
//	_getch();//직접형 단일 문자 입력 함수
//
//	system("cls");//화면을 모두 지워버림
//
//	return 0;
//}
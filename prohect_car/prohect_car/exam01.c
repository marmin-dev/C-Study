////함수 프로젝트에 대한 실습
////함수 프로젝트를 하기 위한 순서
////함수 프로젝트 매뉴얼 작성->알고리즘 순서가 포함된 알고리즘 작성->알고리즘에 맞게끔 순서도를 그림
////->함수 간에 관계도를 작성 -> 관계도를 기반으로 소스코드를 작성
//
////실습 정적변수 (static)변수와 전역변수 지역변수
//#include <stdio.h>
//
//int static_num();
//int global_num();
////전역 변수 선언
//int global_val = 0;
//
//int main(void)
//{
//	int result = 0;
//
//	printf("정적(statc)변수의 변화를 살펴본다\n");
//	result = static_num();
//	printf("정적변수의 num값:%d\n", result);
//	result = static_num();
//	printf("정적변수의 num값:%d\n", result);
//	result = static_num();
//	printf("정적변수의 num값:%d\n", result);
//	result = static_num();
//	printf("정적변수의 num값:%d\n", result);
//	result = static_num();
//	printf("정적변수의 num값:%d\n", result);
//	printf("\n\n----------------------------\n");
//	printf("전역 변수의 변화를 살펴본다\n");
//	result = global_num();
//	return 0;
//}
//int static_num()
//{//정적 스태틱 변수는 메모리상에 데이터 영역에 존재하므로 프로그램 실행과 동일하게 라이프 사이클을 가진다.
//	//
//	static int num=0;
//	return ++num;
//
//}
//int global_num()
//{//지역변수는 초기화를 하지 아니하면 쓰레기값이 데이터에 삽입된다.
//	return global_val++;
//
//}

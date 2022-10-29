////함수와 변수(실습-4)
////전역변수에 대한 실습
////전역 변수의 생명주기 (life cycle,life time)에 대한 실습
////전역변수는 공유변수의 개념과 동일하기 때문에 왠만하면 건드리지 않도록 한다.
//
//
//#include <stdio.h>
////전역변수 선언
//int global_x;
//int global_y;
////사용자 정의 함수 선언 매개 변수가 없음
//int add();
//int main(void)
//{
//	int sum = 0;
//	printf("전역 변수들의 초기값 :%d %d\n\n",global_x, global_y);
//	global_x = 50;
//	global_y = 100;
//	printf("전역 변수들의 변경된 값 :%d %d\n\n", global_x, global_y);
//	printf("==================================================\n");
//	printf("문제>global_x=50,global_y=100 일 때 덧셈연산결과\n");
//	printf("main 함수영역이다");
//	printf("호출>덧셈연산을 위해 add 를 호출\n");
//	sum = add(); //사용자 정의 함수인데 매개변수가 없다
//	printf("덧셈결과는? %d", sum);
//	return 0;
//}
//int add()
//{
//	int hap = 0;
//	hap = global_x + global_y;//전역변수를 이용하여 덧셈처리
//
//	printf("add 함수영역이다\n");
//	printf("수행>전역 변수 정수 2개 덧셈 연산 수행\n");
//	return hap;//사용자 정의 함수가 종료가 되더라도 전역변수들은 아직 메모리에서 소멸이 되지 않는다.
// //하지만 합이라는 지역변수는 소멸된다.
//}
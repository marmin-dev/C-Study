////조건의중요성에 대해 알아보자
////조건은 정수형 상수 문자형 상수밖에 올수가 없다
////점수를 입력받아서 학점을 출력하는 프로그램
//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu = 0;
//	char grade = ' ';
//
//	printf("A학점: 90점 이상 ~ 100점 이하\n");
//	printf("B학점: 80점 이상  ~ 90점 미만\n");
//	printf("C학점: 70점 이상  ~ 80점 미만\n");
//	printf("D학점: 60점 이상  ~ 70점 미만\n");
//	printf("F학점: 0점 이상   ~ 60점 미만\n");
//
//	//사용자로 부터 점수 입력
//	printf("점수를 입력하세요:");
//	scanf_s("%d", &jumsu);
//	//예외 사항 처리 코드
//	if (jumsu > 100 || jumsu < 0) {
//		printf("입력한 정수는 허용구간(0~100)이 아닙니다.\n");
//		printf("프로그램을 다시 실행하세요\n");
//		return 0;
//	}
//	switch (jumsu / 10) {
//		case
//	}
//	return 0;
//}
////중첩 if문을 실행
////학점 처리 프로그램
////a+ a-등등으로 표식
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int jumsu = 0;
//	//CHAR 배열은 grade 는 주소다 곧 포인터 상수이다(하나의 주소만가질수있다)
//	//하지만 배열명은 변하지않는 주소값을 지녀야 하기 때문에 포인터 상수에 해당하는것
//	//상수 값에 무엇인가를 저장하면 c2106이라는 에러코드가 발생한다
//	char* p_grade = NULL;
//	printf("당신의 과목 점수를 입력하세요:");
//	scanf_s("%d", &jumsu);
//	//중첩 if 문을 이용하여 학점을 선정하는 코드
//	//중첩 if 문은 무제한적으로 중첩 if 구문이 들어갈수있다.
//	//최대한 조건을 잘 짜내서 중첩if 내에서 끝내는게 편하다
//	if (jumsu >= 90 && jumsu <= 100)
//	{
//		if (jumsu >= 95) {
//			p_grade = "A+";
//		}
//		else {
//			p_grade = "A-";
//		}
//	}
//	else if (jumsu >= 80 && jumsu < 90)
//	{
//		if (jumsu >= 85) {
//			p_grade = "B+";
//		}
//		else {
//			p_grade = "B-";
//		}
//	}
//	else if (jumsu >= 70 && jumsu < 80)
//	{
//		if (jumsu >= 75) {
//			p_grade = "B+";
//		}
//		else {
//			p_grade = "B-";
//		}
//	}
//	else if (jumsu >= 60 && jumsu < 70)
//	{
//		if (jumsu >= 65) {
//			p_grade = "C+";
//		}
//		else {
//			p_grade = "C-";
//		}
//	}
//	else if (jumsu >= 0 && jumsu < 60)
//	{
//		p_grade = "F";
//	}
//	else 
//	{
//		printf("허용된 점수 범위가 (0~100)가 아닙니다.\n");
//		printf("프로그램을 종료합니다");
//		return 0;
//	}
//	printf("입력한 점수는 %d입니다.\n", jumsu);
//	printf("입력한 점수는 %s입니다.\n", p_grade);
//
//	return 0;
//}
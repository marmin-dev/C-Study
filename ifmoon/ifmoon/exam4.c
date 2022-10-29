//#include <stdio.h>
//
//int main(void)
//{
//	int jumsu = 0;
//	char grade = ' ';
//
//	printf("점수를 입력하세요: ");
//	scanf_s("%d", &jumsu);
//
//	//논리연산자 &&를 이용하여 점수 구간을 확실하게 정하고 문제점을 해결하는 코드
//	if (jumsu >= 90 && jumsu <= 100)
//	{
//		grade = 'A';
//	}
//	else if (jumsu >= 80 && jumsu <= 90)
//	{
//		grade = 'B';
//	}
//	else if (jumsu >= 70 && jumsu <= 80)
//	{
//		grade = 'C';
//	}
//	else if (jumsu >= 60 && jumsu <= 70)
//	{
//		grade = 'D';
//	}
//	else {
//		printf("점수 허용 구간(0~100)이 아닙니다\n");
//		printf("프로그램을 다시 실행하세요");
//		return 0;
//	}
//	printf("입력하신 점수는 %c입니다\n", grade);
//	return 0;
//}
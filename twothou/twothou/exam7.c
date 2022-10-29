//#include <stdio.h>
//
//int main(void)
//{
//	float base = 0.0, height = 0.0;//4바이트 float 실수형 변수를 선언 및 초기화
//	double result = 0.0;//8바이트 double 실수형 변수를 선언및 초기화
//	printf("밑변과 높이에 소수 둘째 자리까지 데이터를 입력해주세요.\n");
//	printf("밑변 입력(cm):");
//	scanf_s("%f", &base);
//	printf("높이입력:");
//	scanf_s("%f", &height);
//	//삼각형 구하는 공식은 밑변x높이 /2
//	result = (base * height) / 2;
//	printf("삼각형의 넓이 (소수6번째 자리까지 ) 출력%lf\n", result);
//	//실수는 기본적으로 자릿수를 지정하지 않으면 float건 double 이건 6번째 자리까지만
//	//표시한다
//	printf("삼각형의 넓이 (소수15번째 자리까지 ) 출력%.15lf\n", result);
//	printf("삼각형의 넓이 (소수16번째 자리까지 ) 출력%.16lf\n", result);
//	printf("삼각형의 넓이 (소수20번째 자리까지 ) 출력%.20lf\n", result);
//	return 0;
//}
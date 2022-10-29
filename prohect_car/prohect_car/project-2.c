//프로젝트-2 함수5개를 선언및 구현하여 모듈로 분리구현하여 학점 처리 프로그램을 만들고 
//모듈로 나누어서 완성하는 실습을 해보자
//함수의 종류
//main():do~while 문을 이용하여 무한루프를 수행
//score_fun():중간고사, 기말고사 점수를 입력받아서 총점을 구하고 전달하는 명령을 수행
//grade_fun():전달받은 총점을 가지고 등급명세서 등급(a+에서 f까지 등급을 결정하고 반환하는 명령을 수행
//alpha_err(): do while 문에서 입력한 알파벳이 대소문자 구별없이 y나 n 이외의 문자를 입력하면 오류문자반환
//junsu_err():중간 기말 0~50 고사의 점수의 유효범위를 벗어나면 오류메시지를 반환하는 명령을 수행
//6.end_fun():알파벳 대소문자 구별없이 n이 입력되면 입력받은 알파벳을 출력하고 프로그램을 종료하는 명령을 수행


#include <stdio.h>
#include <stdlib.h>//exit 함수를 사용하기 위해 포함함
void score_fun();
char grade_fun(int jumsu);
char alpha_err(char op);
void jumsu_err(int jumsu);
void end_fun(char op);
int main(void)
{
	char choice = ' ';
	int jumsu_input = 0;
	//무한 루프 돌리기
	do {
		printf("[main()함수 영역]\n\n");
		printf("프로그램을 시작하시겠습니까?");
		scanf_s("%c", &choice, sizeof(char));
		switch (choice)
		{
		case 'Y':
		case 'y':
			score_fun();//점수입력 함수 호출
			getchar();//버퍼 비우기
			break;
		case 'N':
		case 'n':
			end_fun(choice);//프로그램 종료함수 호출
			break;
		default:
			alpha_err(choice);//알파벳을 잘못 입력했으시 호출
			getchar();//버퍼비우기
			break;

		}


	} while (1);




	return 0;
}
//사용자 정의 함수 구현
void score_fun()//점수입력함수
{
	int jumsu_m = 0, jumsu_f = 0,total=0;//지역변수는 반드시 초기화가 원칙이다.하지않으면 에러발생이 된다
	printf("\n[score_fun()함수 영역]\n");
	//점수입력코드
	printf("중간고사 점수 입력 (50점 만점):");
	scanf_s("%d", &jumsu_m);
	if (jumsu_m < 0 || jumsu_m>50)
	{
		jumsu_err(jumsu_m);
	}
	else
	{
		total += jumsu_m;
	}
	printf("기말고사 점수 입력 (50점 만점):");
	scanf_s("%d", &jumsu_f);
	if (jumsu_f< 0 || jumsu_f>50)
	{
		jumsu_err(jumsu_f);
	}
	else
	{
		total += jumsu_f;
		grade_fun(total);//누적된 점수를 매개변수로 하여 등급을 결정짓는 grade_fun 함수를 호출함
		getchar();
		main();//누적된 점수를 가지고 grade_fun()함수에 학점을 출력했고 하여 main 함수를 호출
	}
	return;
}
char grade_fun(int jumsu)
{
	printf("\n[grade_fun()함수영역\n");
	if (jumsu >= 95 && jumsu <= 100)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:A+학점 \n\n");
	}
	else if (jumsu >= 90 && jumsu <= 94)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:A0학점 \n\n");
	}
	else if (jumsu >= 85 && jumsu <= 89)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:B+학점 \n\n");
	}
	else if (jumsu >= 80 && jumsu <= 84)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:B0학점 \n\n");
	}
	else if (jumsu >= 75 && jumsu <= 79)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:C+학점 \n\n");
	}
	else if (jumsu >= 70 && jumsu <= 74)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:C0학점 \n\n");
	}
	else if (jumsu >= 65 && jumsu <= 69)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:D+학점 \n\n");
	}
	else if (jumsu >= 60 && jumsu <= 64)
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:D0학점 \n\n");
	}
	else
	{
		printf("scire_fun()함수에서 전달받은 점수:%d\n", jumsu);
		return printf("학점:F학점 \n\n");
	}
	return 'A';
}
char alpha_err(char op)
{
	printf("\n[alpha_err()함수영역]");
	return printf("main()함수에서 입력한 알파벳 %c는 유효하지 않습니다\n\n",op);
}
void jumsu_err(int jumsu)
{
	printf("\n[jumsu_err함수영역]\n");
	printf("점수 %d는 유효범위가 아닙니다\n", jumsu);
	return;
}
void end_fun(char op)
{
	printf("[endfun함수영역이다]\n");
	printf("main 함수에서 프로그램 종료를 요청했습니다");

	exit(0);
}
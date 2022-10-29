//#include <stdio.h>
//#include <ctype.h>//is 등 시작하는 함수들의 목록들이 있는 헤더파일
//
//int main(void)
//{
//	int sub = 0;
//	printf("하나의 정수를 입력하세요:");
//	if (scanf_s("%d", &sub) == 0)
//	{
//		printf("숫자만 입력이 가능합니다");
//		rewind(stdin);//표준입력 버퍼에 저장된 모든 문자를 제거한다
//		return 0;
//	}
//	//숫자가 아니라면 isdigit는 숫자라면 0이 아닌 값을 반환한다.
//	//isalpha는 알파벳이면 0이아닌값을 반환한다
//	/*if (!isdigit(sub)==0||isalpha(sub)==0)
//	{
//		printf("숫자만 입력이 가능합니다");
//		return sub;
//	}*/
//
//	if (sub % 2 == 0 && sub % 3 == 0)
//	{
//		printf("%d는 2와 3의 배수입니다",sub);
//	}
//	else
//		printf("%d는 2와 3의 공배수가 아닙니다",sub);
//
//	return 0;
//}
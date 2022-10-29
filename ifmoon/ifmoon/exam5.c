////다중 if~else if else 문의 실습-4 (혈액형)
//
//#include <stdio.h>
//#include <string.h>//문자열에 대한 편리한 함수목록을 제공하는 헤더파일
//
//int main(void)
//{
//	/*char blood = ' ';*/
//	char blood[3] = {0};
//	printf("A형: A또는 a 라고 입력\n");
//	printf("B형: B또는 b 라고 입력\n");
//	printf("O형: O또는 o 라고 입력\n");
//	printf("AB형: AB또는 ab 라고 입력\n");
//
//	printf("혈액형에 해당하는 알파벳 입력: ");
//	scanf_s("%s", &blood, sizeof(blood));
//	/*int result = strcmp(blood, "A");*/
//	//조건문을 이용하여 혈액형에 대한 내용을 표식하는 코드
//	if (!strcmp(blood == "A") || !strcmp(blood == "a"))
//	{
//		printf("A형은 부드럽고 섬세한 성향을 지닙니다\n");
//	}
//	else if (blood == "B" || blood == "b")
//	{
//		printf("B형은 주위 변화에 민감한 성향을 지닙니다\n");
//	}
//	else if (blood == "O" || blood == "o")
//	{
//		printf("O형은 활발하고 쾌활한 성향을 지닙니다\n");
//	}
//	else if (blood == "AB" || blood == "ab")
//	{
//		//printf("AB형은 또라이\n");
//	}
//	else {
//		printf("허용하지 않는 문자입니다\n");
//		printf("프로그램을 다시 실행하세요\n");
//		return 0;
//	}
//	return 0;
//}
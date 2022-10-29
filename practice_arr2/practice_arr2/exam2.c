////배열과 문자열에 대한 실습-2
////사용자로부터 문자열을 입력받아서 길이를 구하는 예제 실습
//
//
//#include <stdio.h>
//#define LENGTH 20
//int main(void)
//{
//	char str[20] = { NULL };//배열 선언 후 초기화
//	int cnt = 0, length = 0;//loop 변수와 배열의 길이를 저장할 변수 초기화
//
//	printf("문자열을 20 바이트 미만으로 입력하세요(영문:1바이트 한글 2바이트\n");
//	//str은 배열명이다 고로 배열명은 주소이므로 주소 참조 연산자인 &를 붙일필요가 전혀 없다
//	scanf_s("%s", str, sizeof(str));
//	for (cnt = 0; str[cnt] != '\0'; cnt++)//NULL값을 확인하면 루프를 탈출한다
//	{
//		length++;
//	}
//	printf("\n");
//	printf("입력한 문자열의 길이: %d바이트\n", length);
//
//
//
//	return 0;
//}
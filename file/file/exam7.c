////배열을 이용한 문자열을 입력하는 방법에 대한 실습
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	//C언어에서는 문자열을 위한 자료형이 없다. 문자열 입력받기위해서는 배열이나
//	//포인터 변수를 이용해야한다
//	system("title 배열로 문자열을 처리하는 프로그램");
//	char ch = "";//하나의 문자를 입력받기 위한 문자형 변수의 선언 및 초기화
//	char str[10] = "";//문자열을 입력받기 위한 10바이트 배열 선언 및 초기화
//	printf("1.문자입력");
//	//문자와 문자열에서 입력받을 때 scanf_s()는 인수값을 3개로 원한다
//	//문자열의 끝에는 NULL값이 붙어서 문자열의 끝을 알린다. 
//	//10개 사이즈의 배열을 선언 하더라도 9개만 이용할 수 있다.
//	//그렇기 때문에 동적입력이라는것이 필요하다
//	//배열은 메모리에 연속적으로 배치가 되기 때문에 인덱스를 가지고있다
//	//인덱스는 0부터 시작한다
//	
//	scanf_s("%s", str, sizeof(str));
//	printf("%c\n", ch);
//	printf("%s\n", str);
//	//정수입력을 받는 스캔에프에스는 세개의 인자값을 받지않고
//	//두개의 인수값만 넣어줘야한다
//	return 0;
//}

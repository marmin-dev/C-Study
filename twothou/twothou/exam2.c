////변수초기화: 변수를 선언하면서 초깃값을 변수에 대입하는 과정을 변수초기화라한다
////변수라는 것은 자료형의 크기를 메모리 만큼(스택영역) 할당받는다
////메모리를 할당받고 변수를초기화 하지 않는다면, 메모리 공간에는 가비지 값이 저장됨
////변수 초기화 반드시하자
////정수형 변수 실수형변수 양의정수도 있고 음의 정수도 있다
////사인드는 부호가 있는것 언사인드는 부호가 없는것 
//
//#include <stdio.h>
////int num;//전역변수 초기화를 하지 않아도 기본값을 가진다
//int main(void)
//{
//	//int num;//지역변수이다
//	int num=0;//선언할때 반드시 초기화를 하자
//	//블럭안에 선언된 변수는 지역변수 이기때문에 초기화를 해야한다
//	//모든변수는 초기화를 시키도록하자
//
//	printf("num변수의 값: %d\n", num);
//	printf("--------------------------------------------\n");
//	short num1 = 0;
//	int num2 = 0;
//	long num3 = 0;
//	long long num4 = 0;
//	//sizeof()를 이용하여 정수형 타입의 크기를 출력해보도록 하자
//	printf("자료형의 크기를 구하는 함수: sizeof()함수\n");
//	printf("1.short자료형크기:%d\n", sizeof(num1));
//	printf("1.int자료형크기:%d\n", sizeof(num2));
//	printf("1.long자료형크기:%d\n", sizeof(num3));
//	printf("1.long long자료형크기:%d", sizeof(num4));
//
//	return 0;
//}
////배열에 대한 실습 -2
////배열이름 (배열명) 주소다 (포인터 상수)
////배열 이름을 이용하여 주소르 출력해보자
//#include <stdio.h>
//
//void array_print();//사용자 정의 함수-기본형 배열을 메인함수에서 바로 선언해서 실행
//
//
//int main(void)
//{//기본형 데이터 타입들의 배열 선언만 한다.
//	char char_name[10];//1바이트 짜리 10개 10바이트 생성
//	short num_short[10];//2바이트 짜리 10개 20바이트 생성
//	int num_int[10]; //40바이트가 생성된다
//	long num_long[10];//40바이트 생성
//	long long num_long_long[10];//80바이트 짜리 어레이 생성
//	float real_num_float[10];//40바이트 짜리 생성
//	double real_num_double[10];//80 바이트 짜리 생성
//	int i = 0;
//	int* int_ptr=NULL;//4바이트가 생성됬는데 포인터 변수이기때문에 포인터 변수이기 때문에 배열의 주소를 저장할수가 있다.
//	int_ptr = num_int;
//	//배열명은 포인터 상수이기때문에 다른 배열주소르 저장할수가 없다.
//	// num_int2=num_ptr
//	//1차원 배열을 반복문을 통해서 출력하고자 한다면 싱글루프 for문과 궁합이 잘맞는다 
//	//곧 for 문이 한개만 존재하는 싱글루프로 루핑해야한다,2차원 배열은 더블루프로 루핑을 해야함을 알고있자.
//	printf("==========================================\n");//인덱스는 1부터 시작하는것이 아니고 0부터 시작함을 기억하자
//	//배열의 크기를 10개로 설정한다면 해당인덱스는 0 ㅜ-1dlek
//	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
//	{
//		printf("char_name[%d]:%c\n", i, char_name[i]);//출력은 시켜주지만, 데이터가 나오지 않아유
//		printf("char_name[%d]:%d\n", i, char_name[i]);//이상한 아스키 코드값이나오는데 -값 아스키는 없다 곧 쓰레기값이 들어감
//	}
//	printf("===============================\n");
//	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
//	{
//		printf("char_name[%d]:%c\n", i, num_short[i]);//출력은 시켜주지만, 데이터가 나오지 않아유
//		printf("char_name[%d]:%d\n", i, num_short[i]);//이상한 아스키 코드값이나오는데 -값 아스키는 없다 곧 쓰레기값이 들어감
//	}
//	printf("===============================\n");
//	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
//	{
//		printf("char_name[%d]:%c\n", i, num_int[i]);//출력은 시켜주지만, 데이터가 나오지 않아유
//		printf("char_name[%d]:%d\n", i, num_int[i]);//이상한 아스키 코드값이나오는데 -값 아스키는 없다 곧 쓰레기값이 들어감
//	}
//	printf("===============================\n");
//	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
//	{
//		printf("char_name[%d]:%c\n", i, num_long[i]);//출력은 시켜주지만, 데이터가 나오지 않아유
//		printf("char_name[%d]:%d\n", i, num_long[i]);//이상한 아스키 코드값이나오는데 -값 아스키는 없다 곧 쓰레기값이 들어감
//	}
//	//포인터 변수로 배열의 주소를 저장한후 포인터 주소를 입력한다.
//	printf("===============================\n");
//	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
//	{
//		printf("char_name[%d]:%c\n", i, num_long_long[i]);//출력은 시켜주지만, 데이터가 나오지 않아유
//		printf("char_name[%d]:%d\n", i, num_long_long[i]);//이상한 아스키 코드값이나오는데 -값 아스키는 없다 곧 쓰레기값이 들어감
//	}
//	printf("===============================\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("char_naame[%d]:%c\n", i, *int_ptr);//출력은 시켜주지만, 데이터가 나오지 않아유
//		int_ptr++;//포인터 위치 증가(4바이트씩증가 데이터 타입이 int 이기때문에
//	}
//	printf("===============================\n");
//	
//	return 0;
//}
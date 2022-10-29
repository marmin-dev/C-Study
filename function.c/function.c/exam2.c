//#include <stdio.h>
////전역 변수에 대한 실습 
////전역 변수 global variable:함수외부에서 선언하여 프로그램 소스파일 전체에서 사용하는 변수
////공유변수라고도 한다.프로그램 실행과 동시에 메모리(데이터영역)에 전역변수의 데이터 타입
////의 바이트 수만큼 할당을 하고 초기화를 하지 않아도 컴파일러가 알아서 초기화를 시켜준다
//
////전역변수는 초기화를 하지 않아도 된다라는 예제
////전역변수 선언만 하고 초기화 하지 않음
//char character;
//short num_short;
//int num_integer;
//float real_number_float;
//double real_number_double;
//int* ptr;//주소값만 지니는 포인터 전역변수
//int arr[5][3];//배열명은 주소를 가지고 있는 포인터 상수
//
//int main(void)
//{//전역변수의 초깃값을 출력하는 코드
//	printf("전역변수 character의 초기값 %c\n",character);//0은 공백이기 때문에 나오지 않는다
//	//null형태의 개념이 문자열에 끝에 붙어서 문자열의 끝을 알린다.
//	//\0문자를 가르켜 통상 null이라고 하며 아스키 코드값은 0에 해당한다(symbol)형태로 나타내고자 하다보니
//	//null이라고 통상 칭한다.
//	printf("전역변수 character의 초기값(아스키코드) %d\n",character);
//	printf("전역변수 character의 초기값(아스키코드) %x\n", character);
//	printf("전역변수 num_short의 초기값 %d\n", num_short);
//	printf("전역변수 num_integer의 초기값 %d\n", num_integer);
//	printf("전역변수 num_float의 초기값 %f\n", real_number_float);
//	printf("전역변수 num_double의 초기값 %d\n", real_number_double);
//	printf("전역변수 ptr의 초기값(주소값) %p\n", ptr);
//	//현재 ptr 은 간접참조를 하고 있지 않기때문에 값이 출려되질 아니한다.
//	//printf("전역변수 *ptr의 초기값(간접 참조 실제값 %d\n", *ptr);
//	printf("전역변수 arr[5][3]의 초기값 %p\n",arr);
//	printf("전역변수 arr[5][0]의 초기값 %p\n", arr[0]);
//	printf("전역변수 arr[5][1]의 초기값 %p\n", arr[1]);
//	printf("전역변수 arr[5][2]의 초기값 %p\n", arr[2]);
//	printf("전역변수 arr[5][3]의 초기값 %p\n", arr[3]);
//	printf("전역변수 arr[5][4]의 초기값 %p\n", arr[4]);
//	printf("전역변수 arr[5][5]의 초기값 %p\n\n", arr[5]);
//	//2차원 배열의 0번째 행의 실제값을 출력
//	printf("전역변수 arr[5][3]의 초기값 %p\n", arr);
//	printf("전역변수 arr[5][0]의 실제값 %p\n", arr[0][0]);
//	printf("전역변수 arr[5][1]의 실제값 %p\n", arr[1][0]);
//	printf("전역변수 arr[5][2]의 실제값 %p\n", arr[2][0]);
//	printf("전역변수 arr[5][3]의 실제값 %p\n", arr[3][0]);
//	printf("전역변수 arr[5][4]의 실제값 %p\n", arr[4][0]);
//	printf("전역변수 arr[5][5]의 실제값 %p\n", arr[5][0]);
//	//1차원 배열 도 주소값이 되고 전부 시작값을 동일하게 가지게된다
//	printf("전역변수 arr[5][3]의 초기값 %p\n", arr);
//	printf("전역변수 arr[5][0]의 실제값 %p\n", arr[0][1]);
//	printf("전역변수 arr[5][1]의 실제값 %p\n", arr[1][1]);
//	printf("전역변수 arr[5][2]의 실제값 %p\n", arr[2][1]);
//	printf("전역변수 arr[5][3]의 실제값 %p\n", arr[3][1]);
//	printf("전역변수 arr[5][4]의 실제값 %p\n", arr[4][1]);
//	printf("전역변수 arr[5][5]의 실제값 %p\n\n", arr[5][1]);
//	
//	printf("전역변수 arr[5][0]의 실제값 %p\n", arr[0][2]);
//	printf("전역변수 arr[5][1]의 실제값 %p\n", arr[1][2]);
//	printf("전역변수 arr[5][2]의 실제값 %p\n", arr[2][2]);
//	printf("전역변수 arr[5][3]의 실제값 %p\n", arr[3][2]);
//	printf("전역변수 arr[5][4]의 실제값 %p\n", arr[4][2]);
//	printf("전역변수 arr[5][5]의 실제값 %p\n", arr[5][2]);
//	return 0;
//}
//

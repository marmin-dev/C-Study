//#include <stdio.h>
////switch 문에 대한 실습
////분기분은 if 문과 switch 문으로 나눌 수가 있다. switch 문은 가독성이 if 문보다 좋다
////switch 조건 -case 상수 - break (switch문을 벗어나는 구문)-default(else구문과 유사)
////옵션이다 switch 문 용도 : 한정된 값, 정형화 되어있는 값(예를 들면 1,12월,학점,요일)
////등 딱 정해져있는 값을 분기할때, 사용하는 것이 바람직하다.
////모든 switch 문은 if 문으로 변경이 가능하지만,반대로 모든 if 문은 switch 문으로 변경이
////불가능하다
////switch의 조건은 문자형 상수나 정수형 상수르 사용이 가능하므로 다룰수 있는 조건자체가
////if문에 비해 적다
////break 문이 없다면 하위 명령문을 다 실행하므로 반드시 break문을 지정해야 한다.
//
////봄 여름 가을 겨울의 특징을 나타내는 프로그램
//int main(void)
//{
//	char season = ' ';
//
//	printf("봄: A또는 a\n");
//	printf("여름: S또는 s\n");
//	printf("가을: F또는 f\n");
//	printf("겨울: W또는 w\n");
//
//	printf("좋아하는 계절을 입력해주세요:");
//	scanf_s("%c", &season, sizeof(char));
//	//case 문은 블럭을 설정하는 중괄호가 없어도되고 있어도 처리는 된다.
//	switch (season) {
//	case 'A':
//	case 'a':
//		printf("선택한 계절:봄\n");
//		printf("만물이 소생하는계절\n");
//		break;
//	
//	case 'S':
//	case 's':
//		printf("선택한 계절:여름\n");
//		printf("바캉스를 떠나는 계절\n");
//		break;
//	case 'F':
//	case 'f':
//		printf("선택한 계절:가을\n");
//		printf("곡식과 과일이 풍성한 계절\n");
//		break;
//	case 'W':
//	case 'w':
//		printf("선택한 계절:겨울\n");
//		printf("새하얀 눈이 덮인 스키의 계절\n");
//		break;
//	default: 
//		printf("선택한 계절이 없습니다\n");
//		printf("A S F W 중에 골라라\n");
//		break;
//		
//}//break 문이 없다면 선택된 case문의 명령문 뿐만아니라 밑의 모든조건을 수행한다.
//
//
//	return 0;
//}
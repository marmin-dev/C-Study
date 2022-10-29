//#include <stdio.h>
//#define LENGTH 5
//
//int main(void)
//{
//	char stack[LENGTH] = { ' ' };
//	int top = 0; //자동차 주차 댓수를 카운팅하는 변수
//	char carName = 'A'; //ASCII 65
//	int select = 0;
//	printf("자동차 주차 프로그램 실행 완료\n");
//	while (select!=3)
//	{
//		printf("\n버튼을 눌러주세요\n");
//		printf("1.자동차 주차,2.자동차 출차, 3. 만차: ");
//		scanf_s("%d", &select);
//		switch (select)
//		{
//		case 1:
//			if (top >= LENGTH) {
//				printf("만차가 되어 주차가 되질 않습니다. 다른 곳을 이용해주세요.\n");
//			}
//			else {//주차 공간이 존재한다면
//				stack[top] = carName;
//				printf("%c자동차 주차 완료\n", stack[top]);
//				top++; //주차가 완료되었다면 위치증가
//			}
//			break;
//		case 2:   //출차
//			if (top <= 0) { //주차장에 주차되어 있는 자동차가 하나도 없을때...에러메시지 출력
//				printf("주차된 자동차가 없음\n");
//			}
//			else {//자동차가 1대이상 주차되었다면..?
//				top--;
//				printf("%c자동차 주차 완료\n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//		case 3: //만차시
//			printf("현재 주차장에 자동차 %d대로 만차되어 있음\n", LENGTH);
//			printf("프로그램을 종료합니다\n");
//			break;
//		default:
//			printf("잘못 입력하셨습니다.");
//			break;
//		}
//	}
//	return 0;
//}
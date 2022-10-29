////자동차 예약 프로그램 작성하기
//
//#include <stdio.h>
//#define CAR 10
//
//int main(void)
//{
//	char yn = ' ';//시작과  종료 문자 변수
//	int choice = 0, cnt = 0;//자동차 모델 번호 선택과 카운트 변수
//	int car[CAR] = { 0 };//배열요소 값을 모두 0으로 초기화
//	do {
//		printf("자동차 모델을 선택하시겠습니까?Y/N");
//		/*scanf_s("%c", &yn, sizeof(char));*/
//		// getchar();//버퍼 비우기 첫번째방법 버퍼 비우는 함수
//		scanf_s(" %c",&yn,sizeof(char));
//		//형식지정자 앞에 빈 공백을 하나 두면 gechar()의 역할을 한다
//		//무한 루프 탈출 코드
//		if (yn == 'N' || yn == 'n')
//		{//모델의 선택을 원하지 않는다면 루프를 빠져나간다.
//			break;
//		}
//		else if (yn == 'Y' || 'y')
//		{//모델을 선택한다면 
//			printf("자동차 모델 번호 : 1 2 3 4 5 6 7 8 9 10\n");
//			printf("자동차 예약 현황:");
//			//자동차 예약 현황을 출력하는 코드
//			for (cnt = 0; cnt < CAR; cnt++)
//			{
//				printf("%2d", car[cnt]);
//			}
//			printf("\n");
//		re_input:
//			printf("\n자동차 모델 선택(1~10)");
//			scanf_s("%d", &choice);
//			//모델 오입력 에러 처리 코드
//			if (choice < 1 || choice>10)
//			{
//				printf("모델 번호는 1~10까지 입니다. 잘못 입력하셨습니다\n");
//				printf("모델 번호를 다시 입력해주세요\n");
//				goto re_input;
//			}
//			else
//			{
//				if (car[choice - 1] == 0)
//				{
//					car[choice - 1] = 1;
//					printf("%d 모델 예약 완료됨\n", choice);
//				}
//				else if (car[choice] == 1)
//				{
//					printf("[NO.%d] 모델은 이미 예약이 완료되었습니다!\n", choice);
//					printf("모델번호를 다시 입력해주세요");
//				}
//			}
//		}
//		else {
//			printf("오류발생\n");
//			printf("다시 입력해주세요\n");
//		}
//		
//	} while (1);
//	printf("\n최종 예약 현황\n");
//	for (cnt = 0; cnt < CAR; cnt++)
//	{
//		printf("%2d", car[cnt]);//%2d는  여백을 가지는 정수를 의미한다
//	}
//
//
//
//	return 0;
//}
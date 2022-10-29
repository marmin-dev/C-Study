//#include <stdio.h>
//
//int main(void)
//{
//	char parking[6] = "ABCDE";//주차장 크기는 5
//	int i = 0, choice = 0;//주차장 찾아가는 변수, 선택 변수
//	while(1) 
//	{ 
//		printf("버튼을 눌러주세요\n");
//		printf("1.자동차 주차 2.자동차 출차 3.만차:");
//		scanf_s("%d", &choice);//1일때 스택데이타 아래로 2이면 팝 3은 브레이크
//		if (choice == 1)
//		{
//			if (i < 5)
//			{
//				printf("%c자동차 주차 완료\n:", parking[i]);
//				i++;
//			}
//			else
//				printf("현재 주차장에 자동차가 5대로 만차되어 있음\n");
//		}
//		else if (choice == 2)
//		{
//			if (i < 0)
//			{
//				printf("주차된 자동차가 없음\n");
//			}
//			else
//			{
//				if (i == 5)
//				{
//					i--;
//					printf("%c자동차 출차 완료\n", parking[i]);
//				
//					
//				}
//				else if (i < 5)
//				{
//					i--;
//					printf("%c자동차 출차 완료\n", parking[i]);
//					continue;
//				}
//			
//			}
//
//			
//		}
//		else if (choice == 3)
//			break;
//		printf("다시 선택해주세요\n");
//	}
//	printf("현재 주차장에 자동차 5대로 만차되어있음\n");
//	printf("프로그램을 종료합니다\n");
//
//
//
//	return 0;
//}
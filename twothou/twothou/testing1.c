//#include <stdio.h>
//
//int main(void)
//{
//	int test1 = 0, test_5d = 0;
//	char* grade = NULL;
//	printf("점수입력:");
//	scanf_s("%d", &test1);
//	if (test1 > 100 || test1 < 0)
//	{
//		printf("잘못된 점수입니다");
//	}
//	else
//	{
//		test_5d = test1 / 5;
//		switch (test_5d)
//		{
//		case 20:
//		case 19:
//			grade = "A+";
//			break;
//		case 18:
//			grade = "A0";
//			break;
//		case 17 :
//			grade = "B+";
//			break;
//		case 16:
//			grade = "B0";
//			break;
//		case 15:
//			grade = "C+";
//			break;
//		case 14:
//			grade = "C0";
//			break;
//		case 13:
//			grade = "D+";
//			break;
//		case 12:
//			grade = "D0";
//			break;
//		default:
//			grade = "F";
//			break;
//
//			
//		}
//
//		printf("입력한 점수는 %d 입니다\n", test1);
//		printf("점수 등급:%s\n", grade);
//
//	}
//
//	
//
//
//	return 0;
//}
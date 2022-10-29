//#include<stdio.h>
//#define mile 1.6093
//#define lb 0.4535
//void km_to_miles(float a);
//void kg_to_lbs(float a);
//
//
//int main(void)
//{
//	int choice = 0;
//	float km = 0.0, kg = 0.0;
//	while (1)
//	{
//		printf("1.km를 mile단위로 변환합니다\n 2.kg을 lb로 변환합니다\n3.종료");
//		scanf_s("%d", &choice);
//		if (choice == 1)
//		{
//			printf("몇 km를 mile 단위로 변환 하시겠습니까?");
//			scanf_s("%f", &km);
//			km_to_miles(km);
//		}
//		else if(choice == 2)
//		{
//			printf("몇 kg를 lb 단위로 변환 하시겠습니까?");
//			scanf_s("%f", &kg);
//			kg_to_lbs(kg);
//		}
//		else if (choice == 3)
//		{
//			printf("프로그램을 종료합니다\n");
//			return 0;
//		}
//		else
//		{
//			printf("잘못된 입력값입니다 1~3중에 선택하시오\n");
//		}
//
//	}
//
//	return 0;
//}
//void km_to_miles(float a)
//{
//	float dis = 0.0;
//	dis = a / mile;
//	printf("입력하신 %.2fkm는 %.2fmile 입니다\n",a,dis);
//}
//void kg_to_lbs(float a)
//{
//	float wei = 0.0;
//	wei = a / lb;
//	printf("입력하신 %.2fkg는 %.2flb 입니다\n",a,wei);
//	return;
//}
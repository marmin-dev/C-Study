//#include<stdio.h>
//
//const int BREAD = 500;
//const int SNACK = 700;
//const int COKE = 400;
//
//int main(void)
//{
//	int i, j, k;
//	int money;
//	printf("현재 당신이 소유하고 있는 금액 : ");
//	scanf_s("%d", &money);
//
//	for (i = 1; i < money / BREAD; i++)
//	{
//		for (j = 1; j < money / SNACK; j++)
//		{
//			for (k = 1; k < money / COKE; k++)
//			{
//				if (money == BREAD * i + SNACK * j + COKE * k)
//				{
//					printf("크림빵 %d개, ", i);
//					printf("새우깡 %d개, ", j);
//					printf("콜  라 %d개 \n", k);
//				}
//			}
//		}
//	}
//
//	printf("어떻게 구입하시겠습니까? \n");
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{//change 내가가진돈 price 물건값 total 물건값합산 rest 거스름돈
//	int change = 0, price1 = 0, price2 = 0, price3 = 0;
//	int total = 0, rest = 0;
//	printf("소지한 돈을  입력하세요:");
//	scanf_s("%d", &change);
//	printf("세개의 물건값을 입력하세요:");
//	scanf_s("%d %d %d", &price1, &price2, &price3);
//	
//	total = price1 + price2 + price3;//물건값전체
//	rest = change - total;//내가가진돈에서 물건값 빼기
//	printf("거스름돈은 %d 원입니다\n", rest);
//	printf("50000원권 %d장\n", (rest / 50000));
//	printf("10000원권 %d장\n", (rest % 50000) / 10000);
//	printf("5000원권 %d장\n", ((rest % 50000) / 10000));
//	printf("1000원권 %d장\n", ((rest % 50000) % 10000)/5000);
//	printf("500원권 %d장\n", (((rest % 50000) % 10000) % 5000)/1000);
//	printf("100원권 %d장\n", (((rest % 50000) % 10000) % 5000) % 1000/500);
//	printf("50원권 %d장\n", (((rest % 50000) % 10000) % 5000) % 1000%500/100);
//	printf("10원권 %d장\n", (((rest % 50000) % 10000) % 5000) % 1000%500%100/50);
//	
//	
//
//
//
//
//
//	return 0;
//}
////#include <stdio.h>
////
////int main(void)
////{
////	int num1 = 0, num2 = 0, result = 0;
////	for (num1 = 1; num1 <= 9; num1++)
////	{
////		for (num2 = 9; num2 > 0; num2--)
////		{
////			if (num1 == num2)
////			{
////				continue;
////			}
////			else
////			{
////				result = ((10 * num1) + num2 + (10 * num2) + num1);
////				if(result == 99)
////					printf("%d%d +%d%d=%d\n", num1, num2, num2, num1, result);
////			
////
////				
////			}
////		}
////	}
////
////
////	return 0;
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int roll(void);
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//	int dice1 = 0, dice2 = 0;
//	dice1 = roll();
//	dice2 = roll();
//	printf("주사위 1의 결과%d\n주사위 2의 결과%d", dice1, dice2);
//	return 0;
//}
//int roll(void)
//{
//	return (1 + rand() % 6);
//}
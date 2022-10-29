//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int x_left = 0, y_left = 0;//ÁÂÇÏ´ÜÀÇ xy ÁÂÇ¥
//	int x_right = 0, y_right = 0;//¿ì»ó´ÜÀÇ xyÁÂÇ¥
//	int back = 1;
//	printf("ÁÂÇÏ´ÜÀÇ x,yÁÂÇ¥:");
//	scanf_s("%d %d", &x_left, &y_left);
//
//	
//	while (back)
//	{
//		printf("¿ì»ó´ÜÀÇ x,yÁÂÇ¥:");
//		scanf_s("%d %d", &x_right, &y_right);
//		if (x_left >= x_right && y_left < y_right)
//		{
//			printf("ÁÂ ÇÏ´ÜÀÇ xÁÂÇ¥°¡ ¿ì »ó´ÜÀÇ xÁÂÇ¥º¸´Ù Å®´Ï´Ù");
//		}
//		else if (x_left < x_right && y_left >= y_right)
//		{
//			printf("ÁÂ ÇÏ´ÜÀÇ yÁÂÇ¥°¡ ¿ì »ó´ÜÀÇ yÁÂÇ¥º¸´Ù Å®´Ï´Ù");
//		}
//		else if (x_left >= x_right && y_left >= y_right)
//		{
//			printf("ÁÂ ÇÏ´ÜÀÇ x,yÁÂÇ¥°¡ ¿ì »ó´ÜÀÇ x,yÁÂÇ¥º¸´Ù Å®´Ï´Ù");
//		}
//		else
//			back=0;
//	}
//	printf("µÎÁ¡ÀÌ ÀÌ·ç´Â Á÷»ç°¢ÇüÀÇ ³ÐÀÌ´Â %d ÀÔ´Ï´Ù", (x_right - x_left) *
//		(y_right - y_left));
//	return 0;
//}
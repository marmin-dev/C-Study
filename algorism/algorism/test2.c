//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int x_left = 0, y_left = 0;//���ϴ��� xy ��ǥ
//	int x_right = 0, y_right = 0;//������ xy��ǥ
//	int back = 1;
//	printf("���ϴ��� x,y��ǥ:");
//	scanf_s("%d %d", &x_left, &y_left);
//
//	
//	while (back)
//	{
//		printf("������ x,y��ǥ:");
//		scanf_s("%d %d", &x_right, &y_right);
//		if (x_left >= x_right && y_left < y_right)
//		{
//			printf("�� �ϴ��� x��ǥ�� �� ����� x��ǥ���� Ů�ϴ�");
//		}
//		else if (x_left < x_right && y_left >= y_right)
//		{
//			printf("�� �ϴ��� y��ǥ�� �� ����� y��ǥ���� Ů�ϴ�");
//		}
//		else if (x_left >= x_right && y_left >= y_right)
//		{
//			printf("�� �ϴ��� x,y��ǥ�� �� ����� x,y��ǥ���� Ů�ϴ�");
//		}
//		else
//			back=0;
//	}
//	printf("������ �̷�� ���簢���� ���̴� %d �Դϴ�", (x_right - x_left) *
//		(y_right - y_left));
//	return 0;
//}
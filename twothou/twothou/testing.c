//#include <stdio.h>
//
//int main(void)
//{//change ���������� price ���ǰ� total ���ǰ��ջ� rest �Ž�����
//	int change = 0, price1 = 0, price2 = 0, price3 = 0;
//	int total = 0, rest = 0;
//	printf("������ ����  �Է��ϼ���:");
//	scanf_s("%d", &change);
//	printf("������ ���ǰ��� �Է��ϼ���:");
//	scanf_s("%d %d %d", &price1, &price2, &price3);
//	
//	total = price1 + price2 + price3;//���ǰ���ü
//	rest = change - total;//�������������� ���ǰ� ����
//	printf("�Ž������� %d ���Դϴ�\n", rest);
//	printf("50000���� %d��\n", (rest / 50000));
//	printf("10000���� %d��\n", (rest % 50000) / 10000);
//	printf("5000���� %d��\n", ((rest % 50000) / 10000));
//	printf("1000���� %d��\n", ((rest % 50000) % 10000)/5000);
//	printf("500���� %d��\n", (((rest % 50000) % 10000) % 5000)/1000);
//	printf("100���� %d��\n", (((rest % 50000) % 10000) % 5000) % 1000/500);
//	printf("50���� %d��\n", (((rest % 50000) % 10000) % 5000) % 1000%500/100);
//	printf("10���� %d��\n", (((rest % 50000) % 10000) % 5000) % 1000%500%100/50);
//	
//	
//
//
//
//
//
//	return 0;
//}
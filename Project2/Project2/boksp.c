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
//	printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
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
//					printf("ũ���� %d��, ", i);
//					printf("����� %d��, ", j);
//					printf("��  �� %d�� \n", k);
//				}
//			}
//		}
//	}
//
//	printf("��� �����Ͻðڽ��ϱ�? \n");
//	return 0;
//}
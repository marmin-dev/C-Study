//#include <stdio.h>
//
//int main(void)
//{
//	char parking[6] = "ABCDE";//������ ũ��� 5
//	int i = 0, choice = 0;//������ ã�ư��� ����, ���� ����
//	while(1) 
//	{ 
//		printf("��ư�� �����ּ���\n");
//		printf("1.�ڵ��� ���� 2.�ڵ��� ���� 3.����:");
//		scanf_s("%d", &choice);//1�϶� ���õ���Ÿ �Ʒ��� 2�̸� �� 3�� �극��ũ
//		if (choice == 1)
//		{
//			if (i < 5)
//			{
//				printf("%c�ڵ��� ���� �Ϸ�\n:", parking[i]);
//				i++;
//			}
//			else
//				printf("���� �����忡 �ڵ����� 5��� �����Ǿ� ����\n");
//		}
//		else if (choice == 2)
//		{
//			if (i < 0)
//			{
//				printf("������ �ڵ����� ����\n");
//			}
//			else
//			{
//				if (i == 5)
//				{
//					i--;
//					printf("%c�ڵ��� ���� �Ϸ�\n", parking[i]);
//				
//					
//				}
//				else if (i < 5)
//				{
//					i--;
//					printf("%c�ڵ��� ���� �Ϸ�\n", parking[i]);
//					continue;
//				}
//			
//			}
//
//			
//		}
//		else if (choice == 3)
//			break;
//		printf("�ٽ� �������ּ���\n");
//	}
//	printf("���� �����忡 �ڵ��� 5��� �����Ǿ�����\n");
//	printf("���α׷��� �����մϴ�\n");
//
//
//
//	return 0;
//}
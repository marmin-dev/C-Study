////////�Լ��� �����ǽ�-7
////////���������� ���������� ���� �ǽ�
////////��������;���������� ���������� ���α׷��� ����� ���ÿ� �޸�(�����Ϳ���)�� �Ҵ�
////////������Ÿ���� ũ�⸸ŭ �Ҵ��� �ް� �ʱ�ȭ�� ���� �ʾƵ� �ڵ����� ������ Ÿ���� ũ�⿡ �°�
////////�ڵ� �ʱ�ȭ�� �̷������
////////�����ֱⰡ ���α׷��� ����� ���ῡ ���ؼ� ���� �Ҵ�ǰ� �Ҹ��� �̷������. 
////////���������� ���������� �������̶�� ���������� ����� �Լ� �Ǵ� �ڵ� ���� ������ �����
////////���������� ���� ������ �ȴ�. ���������� �����ϱ� ���ؼ��� ������ �տ� static Ű���带 �ٿ��ָ�
////////�ȴ�
//////
////////���������� �ڵ� �ʱ�ȭ �ǽ�
//////#include <stdio.h>
//////static int num1;//���� �������� ����(�ʱ�ȭ ���� ����)
//////int main(void)
//////{
//////	
//////	static double num2; //���� ���� ���� ����(�ʱ�ȭ ���� ����)
//////
//////
//////	printf("���� ����(static)���� num1�� �ʱⰪ:%d\n", num1);
//////	printf("���� ����(static)���� num2�� �ʱⰪ:%d\n", num2);
//////	return 0;
//////}//����(static)������ �����ϰ� ���������� ���� ���� ���̸� ���� �ǽ�
////#include <stdio.h>
////
////void start();
////
////int main(void)
////{//���������� �Լ��� ����Ǵ��� ���� �����Ҷ� ���ȴ� ������ ���������� �Լ��� ����Ǹ�
////	//�Ҵ�� ������ �Ҹ�Ǳ� ������ �Ʒ��� ���� ����� ����� �ȴ�.
////	printf("start");
////	start();
////	 start();
////	 start();
////
////}
////void start()
////{
////	static int static_count = 0;
////	auto auto_count = 0;
////	printf("������������ %d\t ������������ =%d \n", static_count, auto_count);
////	static_count++;
////	auto_count++;
////	return;
////}
//#include <stdio.h>
//void credit(int cash);
//int main(void)
//{
//	int cnt = 0, cash = 0;
//	for (cnt = 1; cnt <= 3; cnt++)
//	{
//		printf("%dȸ ����\n", cnt);
//		printf("����:");
//		scanf_s("%d", &cash);
//		printf ("�Ա�\t\t���\t\t�ܾ�\n");
//		credit(cash);
//
//	}
//
//	return 0;
//}
//void credit(int cash)
//{
//	static int bal = 0;
//	if (cash > 0)
//	{
//		printf("%d\t\t\t\t", cash);
//
//	}
//	else {
//		printf("\t\t\t%d\t\t", -cash);
//	}
//	//�ܾ� ���
//	bal += cash;
//	printf("%d\n", bal);
//	
//	return;
//}
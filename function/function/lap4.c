//#include<stdio.h>
//double add(int x, int y);
//double sub(int x, int y);
//double mul(int x, int y);
//double div(int x, int y);
//int remain(int x, int y);
//int main(void)
//{
//	double num1 = 0.0, num2 = 0.0;
//	char val = ' ', yon = ' ';
//	while(1)
//	{
//		printf("�� ���� �Է��ϼ���");
//		scanf_s("%lf %lf", &num1, &num2);
//		getchar();
//		printf("�����ڸ� �����ϼ���.(+,-,/,*,%)");
//		scanf_s("%c", &val,sizeof(char));
//		getchar();
//		switch (val) {
//		case '%':
//			printf("������ �Լ� ȣ���� %lf�Դϴ�", remain(num1, num2));
//			break;
//		case '*':
//			printf("���ϱ� �Լ� ȣ���� %lf�Դϴ�", mul(num1, num2));
//			break;
//		case '+':
//			printf("���ϱ� �Լ� ȣ���� %lf�Դϴ�", add(num1, num2));
//			break;
//		case '-':
//			printf("���� �Լ� ȣ���� %lf�Դϴ�", sub(num1, num2));
//			break;
//		case '/':
//			printf("������ �Լ� ȣ���� %lf�Դϴ�", div(num1, num2));
//			break;
//		default:
//			printf("�߸��� �������Դϴ�");
//			break;
//		}
//		printf("��� ������ �Ͻðڽ��ϱ�? y/n");
//		scanf_s("%c", &yon);
//		if (yon == 'y')
//			continue;
//		else if (yon == 'n')
//			exit(0);
//		else
//			exit(0);
//	} 
//
//
//
//	return 0;
//}
//double add(int x, int y)
//{
//	int result = x + y;
//	return result;
//}
//double sub(int x, int y)
//{
//	int result = x - y;
//	return result;
//}
//double mul(int x, int y)
//{
//	int result = x * y;
//	return result;
//}
//double div(int x, int y)
//{
//	int result = x / y;
//	return result;
//}
//int remain(int x, int y)
//{
//	int result = x % y;
//	return result;
//}
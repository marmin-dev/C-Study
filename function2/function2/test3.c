//#include <stdio.h>
//#include <stdlib.h>
//double add(double* num1, double* num2);
//double sub(double* num1, double* num2);
//double mul(double* num1, double* num2);
//double div(double* num1, double* num2);
//
//int main(void)
//{
//	char choice1 = ' ', choice2 = ' ';
//	double num1 = 0.0, num2 = 0.0, res = 0.0;
//	while (1)
//	{
//		printf("�ΰ��� �Ǽ��� �Է��ϼ���:");
//		scanf_s("%lf %lf", &num1, &num2);
//		getchar();
//		re:printf("�����ڸ� �Է��ϼ���(+ - * /:");
//		scanf_s("%c", &choice1,sizeof(choice1));
//		switch (choice1)
//		{
//		case '+':
//			res=add(&num1, &num2);
//			printf("%lf + %lf = %lf",num1,num2,res);
//			break;
//		case '-':
//			res=sub(&num1, &num2);
//			printf("%lf + %lf = %lf", num1, num2, res);
//			break;
//		case '*':
//			res=mul(&num1, &num2);
//			printf("%lf + %lf = %lf", num1, num2, res);
//			break;
//		case '/':
//			res=div(&num1, &num2);
//			printf("%lf + %lf = %lf", num1, num2, res);
//			break;
//		default:
//			printf("�߸��� ������ �Դϴ�");
//			goto re;
//			break;
//		}
//	re1:printf("��� �����Ͻðڽ��ϱ�? y/n");
//		scanf_s("%c", &choice2,sizeof(choice2));
//			if(choice2 == 'y')
//			{
//				return 1;
//			}
//			else if (choice2 == 'n')
//			{
//				return 0;
//			}
//			else
//			{
//				printf("�߸��� ������ �Դϴ�");
//				goto re1;
//			}
//	}
//
//	return 0;
//}
//double add(double* num1, double* num2)
//{
//	double result;
//	result = *num1 + *num2;
//	return result;
//}
//double sub(double* num1, double* num2)
//{
//	double result;
//	result = *num1 - *num2;
//	return result;
//}
//double mul(double* num1, double* num2)
//{
//	double result;
//	result = *num1 * *num2;
//	return result;
//}
//double div(double* num1, double* num2)
//{
//	double result;
//	result = *num1 / *num2;
//	return result;
//}
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
//		printf("두 수를 입력하세요");
//		scanf_s("%lf %lf", &num1, &num2);
//		getchar();
//		printf("연산자를 선택하세요.(+,-,/,*,%)");
//		scanf_s("%c", &val,sizeof(char));
//		getchar();
//		switch (val) {
//		case '%':
//			printf("나머지 함수 호출후 %lf입니다", remain(num1, num2));
//			break;
//		case '*':
//			printf("곱하기 함수 호출후 %lf입니다", mul(num1, num2));
//			break;
//		case '+':
//			printf("더하기 함수 호출후 %lf입니다", add(num1, num2));
//			break;
//		case '-':
//			printf("빼기 함수 호출후 %lf입니다", sub(num1, num2));
//			break;
//		case '/':
//			printf("나누기 함수 호출후 %lf입니다", div(num1, num2));
//			break;
//		default:
//			printf("잘못된 연산자입니다");
//			break;
//		}
//		printf("계속 연산을 하시겠습니까? y/n");
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
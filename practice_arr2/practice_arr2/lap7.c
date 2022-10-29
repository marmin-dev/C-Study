////정수형 배열 길이가 10인 배열을 선언 후 초기화를 한다 ,10 개의 정수를 사용자로부터 입력을 받아서 
////배열에 각각 저장하고,아래와 같이 함수 2개를 선언 후 구현을 하여 실행결과와 동일하게 출력이 되도록 프로그램을 작성하시오
////void showOdd(int arr[],int size) 홀수를 출력하는 함수
////void showEven(int arr[],int size) 짝수를 출력하는 함수
//
//#include <stdio.h>
//void showOdd(int *arr[], int size);
//void showEven(int *arr[], int size);
//int main(void)
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	printf("총 10개의 숫자 입력\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("입력 인덱스%d:",i);
//		scanf_s("%d", &arr1[i]);
//	}
//	showOdd(arr1, 10);
//	showEven(arr1, 10);
//
//	return 0;
//}
//void showOdd(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (*arr % 2 == 1)
//		{
//			printf("%d\t", *arr);
//		}
//		arr++;
//	}
//	printf("\n");
//	return;
//}
//void showEven(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (*arr % 2 == 0)
//		{
//			printf("%d\t", *arr);
//		}
//		arr++;
//	}
//	printf("\n");
//	return;
//}
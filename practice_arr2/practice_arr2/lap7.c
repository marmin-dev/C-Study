////������ �迭 ���̰� 10�� �迭�� ���� �� �ʱ�ȭ�� �Ѵ� ,10 ���� ������ ����ڷκ��� �Է��� �޾Ƽ� 
////�迭�� ���� �����ϰ�,�Ʒ��� ���� �Լ� 2���� ���� �� ������ �Ͽ� �������� �����ϰ� ����� �ǵ��� ���α׷��� �ۼ��Ͻÿ�
////void showOdd(int arr[],int size) Ȧ���� ����ϴ� �Լ�
////void showEven(int arr[],int size) ¦���� ����ϴ� �Լ�
//
//#include <stdio.h>
//void showOdd(int *arr[], int size);
//void showEven(int *arr[], int size);
//int main(void)
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	printf("�� 10���� ���� �Է�\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("�Է� �ε���%d:",i);
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
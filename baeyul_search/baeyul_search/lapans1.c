//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LENGTH 5
//
//void sort(int* arr, int size);
//void swap(int* x, int* y);
//void print_array(int* arr, int size);
//
//int main(void)
//{
//	int i = 0;
//	int arr[LENGTH] = { 0 };
//
//	srand((unsigned)time(NULL));
//	for (i = 0; i < LENGTH; i++)
//	{
//		arr[i] = 10 + rand() % 90;
//	}
//	/*for (i = 0; i < LENGTH; i++)
//	{
//		printf("%d", arr[i]);
//		printf("\n");
//	}*/
//	printf("���� �� �迭:");
//	print_array(arr, LENGTH);
//	sort(arr, LENGTH);
//	printf("���� �� �迭:");
//	print_array(arr, LENGTH);
//	return 0;
//}
//void sort(int* arr, int size)
//{
//	int i = 0, j = 0;
//	int* loc=NULL;
//	for (i = 0; i < LENGTH - 1; i++)
//	{
//		loc = arr + i;
//		for (j = i; j < LENGTH; j++)
//		{
//			//loc �� �� (�ּ�)�� �迭�� ����� ������ �߿��� ���� ���� ����� �ּҸ� ����Ű�� �ȴ�.
//			if (*loc < *(arr + i))
//			{
//				loc = arr + j;
//			}
//
//		}
//		swap(loc, arr + 1);
//	}
//	return;
//}
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	return;
//}
//void print_array(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("%3d  ", arr[i]);
//	}
//	printf("\n");
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LENGTH 5
//void sort(int* arr, int size);
//void swap(int* x, int* y);
//void print_array(int* arr, int size);
//int main(void)
//{
//	int arr1[LENGTH] = { 0 };
//	int i = 0;
//	srand((unsigned)time(NULL));	//�迭�� �����Է� ���� �� �ݺ����� �ʴ� ���� ����
//	for (i = 0; i < LENGTH; i++)
//	{
//		arr1[i] = 10+rand()%89;		//�迭�� 2�ڸ��� ��������
//	}
//	i = 0;
//	printf("���� �� �迭:");
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	for (i = 0; i < LENGTH - 1; i++)
//	{
//		sort(arr1, LENGTH);
//		swap(arr1, arr1);
//	}
//	
//	return 0;
//}
//void sort(int* arr, int size)
//{
//	int num_sort = 0,i=0, ex = 0,aft = 0;
//	for (i =0; i < LENGTH; i++)
//	{
//		ex = *arr;;
//		arr++;
//		for (i = 0; i < LENGTH; i++)
//		{
//			aft = *arr;;
//			if (aft < ex)
//				num_sort = aft;
//		}
//	}
//	return;
//}
//void swap(int* x, int* y)
//{
//
//}
//void print_array(int* arr, int size)
//{
//
//}
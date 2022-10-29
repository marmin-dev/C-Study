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
//	srand((unsigned)time(NULL));	//배열에 난수입력 같은 값 반복되지 않는 난수 생성
//	for (i = 0; i < LENGTH; i++)
//	{
//		arr1[i] = 10+rand()%89;		//배열에 2자리수 난수생성
//	}
//	i = 0;
//	printf("정렬 전 배열:");
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
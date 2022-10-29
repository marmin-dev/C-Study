//#include <stdio.h>
//void swap(int *arr1[], int *arr2[]);
//int main(void)
//{
//	int arr1[3] = { -10,-10,-10 };
//	int arr2[3] = { 200,200,200 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("arr1[%d]=%d\n", i, arr1[i]);
//		printf("arr2[%d]=%d\n", i, arr2[i]);
//	}
//	swap(arr1, arr2);
//	for (i = 0; i < 3; i++)
//	{
//		printf("arr1[%d]=%d\n", i, arr1[i]);
//		printf("arr2[%d]=%d\n", i, arr2[i]);
//	}
//
//	return 0;
//}
//void swap(int *arr1[], int *arr2[])
//{
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		temp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = temp;
//		arr1++;
//		arr2++;
//	} 
//	return;
//}
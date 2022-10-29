//#include <stdio.h>
//void DesSort(int arr1[],int len);
//int main(void)
//{
//	int arr1[7] = { 0 };
//	int i = 0;
//	//arr1은 7개의 정수 입력, i는 배열의 순서
//	for (i = 0; i < 7; i++)
//	{
//		printf("입력:");
//		scanf_s("%d", &arr1[i]); 
//	}
//	DesSort(arr1, sizeof(arr1) / sizeof(int));
//	
//		for (i = 0; i < 7; i++)
//		{
//			printf(" %d", arr1[i]);
//		}
//
//	return 0;
//}
//void DesSort(int arr1[], int len)
//{
//	int i, j, temp=0;
//	for (i = 0; i < len-1; i++)
//	{
//		for (j = 0; j < len-1; j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//}
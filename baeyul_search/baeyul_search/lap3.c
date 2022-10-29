//#include <stdio.h>
//#include <string.h>
//#define LENGTH 64
//#define SWAP(x,y) {int temp=0; temp=x; x=y; y=temp;}
//void bubbleSort(int arr1[], int size);
//int main(void)
//{
//	char arr1[LENGTH] = " ";
//	int i = 0;
//	printf("문자열을 입력하세요");
//	scanf_s("%s", arr1, sizeof(arr1));
//	printf("정렬되기 전의 문자열:%s\n", &arr1);
//	bubbleSort(arr1, LENGTH);
//	printf("정렬된 후의 문자열:%s\n", &arr1);
//	return 0;
//}
//void bubbleSort(int arr1[], int size)
//{
//	int i = 0,j=0;
//	for (i = LENGTH; i > 1; i--)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (arr1[j - 1] > arr1[j])
//				SWAP(arr1[j - 1], arr1[j]);
//			
//		}
//	}
//	return;
//}
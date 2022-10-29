//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0, floor = 1, sede = 1;
//	int arr[8] = { 0 };
//	int sum[4] = { 0 };
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d類 %d�� 檣掘熱:", floor, sede++);
//		scanf_s("%d", &arr[i]);
//		switch (floor)
//		{
//		case 1:
//			sum[i / 2] += arr[i];
//			break;
//		case 2:
//			sum[i / 2] += arr[i];
//			break;
//		case 3:
//			sum[i / 2] += arr[i];
//			break;
//		case 4:
//			sum[i / 2] += arr[i];
//			break;
//		}
//		if (sede == 3)
//		{
//			floor++;
//			sede = 1;
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d類 檣掘熱:%d\n", i + 1, sum[i]);
//
//
//	}
//		return 0;
//}
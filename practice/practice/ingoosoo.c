//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0, floor = 1, sede = 1;
//	int arr[8] = { 0 };
//	int sum[4] = { 0 };
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d�� %dȣ �α���:", floor, sede++);
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
//		printf("%d�� �α���:%d\n", i + 1, sum[i]);
//
//
//	}
//		return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int str[5] = {""};
//	int max = 0,sum=0, min = 0, i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d번째 정수를 입력하세요",i);
//		scanf_s("%d", &str[i]);
//	}
//	max = min = sum = str[1];
//	for (i = 1;  i <= 5; i++)
//	{
//		sum += str[i];
//		if (max < str[i])
//			max = str[i];
//
//		if (min >= str[i])
//			min = str[i];
//
//	}
//	printf("총합:%d\n", sum);
//	printf("최대값:%d\n", max);
//	printf("최소값:%d\n", min);
//
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int str[5] = {""};
//	int max = 0,sum=0, min = 0, i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d��° ������ �Է��ϼ���",i);
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
//	printf("����:%d\n", sum);
//	printf("�ִ밪:%d\n", max);
//	printf("�ּҰ�:%d\n", min);
//
//
//	return 0;
//}
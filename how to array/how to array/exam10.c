#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0, sum = 0;
	int arr[5] = { 0 };
	float avg = 0.0;
	for (i = 0; i < 5; i++)
	{
		printf("score[%d]=", i);
		scanf_s("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				j = arr[i];
			}
		}
		else
			k = arr[i];
		if (i > 0)
		{
			if (arr[i] < arr[i - 1])
			{
				k = arr[i];
			}
		}
		else
			k = arr[i];
		sum += arr[i];
	}
	printf("======================\n");
	printf("���� �м�\n");
	printf("======================\n");
	printf("1������ :%d\n", j);
	printf("5������ :%d\n", k);
	printf("�հ�: %d\n", sum);
	avg = (float)sum / 5;
	printf("��հ�:%f\n", avg);

	return 0;
}

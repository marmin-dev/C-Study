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
	printf("성적 분석\n");
	printf("======================\n");
	printf("1등점수 :%d\n", j);
	printf("5등점수 :%d\n", k);
	printf("합계: %d\n", sum);
	avg = (float)sum / 5;
	printf("평균값:%f\n", avg);

	return 0;
}

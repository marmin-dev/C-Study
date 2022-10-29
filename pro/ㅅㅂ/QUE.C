#include <stdio.h>



int main(void)
{
	int i;
	
	int arr[8];
	int cnt = 1;
	for (i = 1; i <= 8; i++)
	{
		if (i % 2 == 1)
		{
			printf("%dÃþ 1 È£ ÀÎ±¸¼ö:",cnt++);
			scanf_s("%d", &arr[i]);
		}
		else
		{
			printf("%dÃþ 2 È£ ÀÎ±¸¼ö:",(cnt++/2));
				scanf_s("%d", &arr[i]);
		}
	}
	//Ãþº° ÀÎ±¸¼ö ÇÕ
	printf("1Ãþ ÀÎ±¸¼ö:%d\n", arr[1] + arr[5]);
	printf("2Ãþ ÀÎ±¸¼ö:%d\n", arr[2] + arr[6]);
	printf("3Ãþ ÀÎ±¸¼ö:%d\n", arr[3] + arr[7]);
	printf("4Ãþ ÀÎ±¸¼ö:%d\n", arr[4] + arr[8]);
	return 0;
}
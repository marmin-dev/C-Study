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
			printf("%d類 1 ?? 檣掘熱:",cnt++);
			scanf_s("%d", &arr[i]);
		}
		else
		{
			printf("%d類 2 ?? 檣掘熱:",(cnt++/2));
				scanf_s("%d", &arr[i]);
		}
	}
	//類滌 檣掘熱 м
	printf("1類 檣掘熱:%d\n", arr[1] + arr[5]);
	printf("2類 檣掘熱:%d\n", arr[2] + arr[6]);
	printf("3類 檣掘熱:%d\n", arr[3] + arr[7]);
	printf("4類 檣掘熱:%d\n", arr[4] + arr[8]);
	return 0;
}
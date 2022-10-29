//#include <stdio.h>
//#define LENGTH 5 //배열의 크기
//
//int main(void)
//{
//	int s_list[LENGTH] = { 5,4,1,3,2 };
//	int i = 0, j = 0, temp = 0, sort = 0;
//
//	printf("초기>배열요소: 5 4 1 3 2\n");
//	printf("\nfor 문으로 선택 정렬 수행\n");
//	//자신과 비교한 인덱스를 제외하기 위해서 -1을 한다
//	for (i = 0; i < LENGTH - 1; i++)
//	{
//		sort = i;
//		for (j = i + 1; LENGTH; j++)
//		{
//			if (s_list[j] < s_list[sort])
//				sort = j;
//		}
//	temp = s_list[i];
//	s_list[i] = s_list[sort];
//	s_list[sort] = temp;
//	}
//	printf("결과>정렬된 베열요소:");
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("%d", s_list[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
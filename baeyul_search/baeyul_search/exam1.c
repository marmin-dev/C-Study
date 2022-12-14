////배열을 활용한 정렬과 탐색 실습
////선택정렬(selection sort):정렬되지 않고 섞여있는 배열요소들의 값을 오름차순이든지 내림차순으로 정렬을 
////시키는 알고리즘의 일종으로 선택정렬은 배열 요소의 데이터 값에서 가장 작은 값을 찾아서 맨앞의 데이터와 교환
////을 해가면서 정렬이 되는 방식이 바로 선택정렬이다.
//
////선택정렬 예제
//#include <stdio.h>
//#define LENGTH 5
////함수 배열요소 값들 단순히 출력하는 함수 선언
//void printArray(int s_list[], int size);
//int main(void)
//{
//	int s_list[LENGTH] = { 5,4,1,3,2 };
//	int i = 0, j = 0, temp = 0, sort = 0;
//	printf("정렬하기전 초기 상태의 배열요소 값:5 4 1 3 2\n");
//	printf("더블 루프 for 문을 사용하여 선택정렬 수행함\n");
//	
//	for (i = 0; i < LENGTH - 1; i++)
//	{//조건에서 LENGTH -1 을 하는 이유는 자신과 비교하는 인덱스를 제외하기 위함
//		sort = i;	//배열요소 4개를 반복적으로 대입을 하기 위해서 
//		for (j = i + 1; j< LENGTH; j++)
//		{//자신의 인덱스의 값을 제외하기 위해서 j값을 i+1로 대입함.
//			if (s_list[j] < s_list[sort])//부등호의 종류에 따라 크면 오름차순,작으면 내림차순으로 정렬이 된다
//			{//서로의 값을 비교하여 비교대상이 되는 s_list[sort]값이 크다면 예첫번째 루핑에서는 4 <5 이므로 참이다
//				sort = j;//최소값의 인덱스를 저장하는 부분
//			}
//			//선택정렬을 통한 값을 치환
//			
//		}
//		temp = s_list[i];
//		s_list[i] = s_list[sort];
//		s_list[sort] = temp;
//		printArray(s_list, LENGTH);
//
//		printf("정렬 후 결과");
//		
//		
//	}
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("%d", s_list[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//void printArray(int s_list[], int size)
//{
//	int k = 0;
//	for (k = 0; k < LENGTH; k++)
//	{
//		printf("%d번째: %d\n", k, s_list[k]);
//	}
//	printf("\n");
//
//
//	return;
//}
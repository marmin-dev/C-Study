////배열을 활용한 정렬과 탐색 실습-4
////지금까지 배운 선택, 버블 ,삽입정렬의 성능차이에 대해서 실습을 해본다
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_SIZE 10000
//#define SWAP(x,y,temp) {temp=x;x=y;y=temp;}
////전역변수 선언
//int original[MAX_SIZE]; //rand(0~32767)값 반환 로 만든 데이터를 저장할 원본배열
//int list[MAX_SIZE];		//각 정렬 알고리즘에서 사용할 데이터 배열
//int n = 0;		//데이터의 갯수를 받는 전역변수
//
////실행시간 측정을 위한 전역변수 선언
//clock_t start = 0, end = 0, used_time = 0;
//
//// 함수를 선언
//void selection_sort(int list[], int n);
//void bubble_sort(int list[], int n);
//void insert_sort(int list[], int n);
//void copyArr(void); //원본 배열을 복사하는 함수
//void calcTime(void); //실행시간을 측정 및 출력을 하는 함수
//void copyArr(void)
//{
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		list[i] = original[i];
//	}
//	return;
//} //원본 배열을 복사하는 함수
//void selection_sort(int list[], int n)
//{
//	int i = 0, sort = 0, temp = 0, j = 0;
//	printf("선택정렬중\n");
//	for (i = 0; i < n - 1; i++)
//	{//조건에서 length -1 을 하는 이유는 자신과 비교하는 인덱스를 제외하기 위함
//		sort = i;	//배열요소 4개를 반복적으로 대입을 하기 위해서 
//		for (j = i + 1; j < n; j++)
//		{//자신의 인덱스의 값을 제외하기 위해서 j값을 i+1로 대입함.
//			if (list[j] < list[sort])//부등호의 종류에 따라 크면 오름차순,작으면 내림차순으로 정렬이 된다
//			{//서로의 값을 비교하여 비교대상이 되는 s_list[sort]값이 크다면 예첫번째 루핑에서는 4 <5 이므로 참이다
//				sort = j;//최소값의 인덱스를 저장하는 부분
//			}
//			//선택정렬을 통한 값을 치환
//		}
//		temp = list[i];
//		list[i] = list[sort];
//		list[sort] = temp;
//	}
//	return;
//}
//void bubble_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//	printf("버블정렬중\n");
//	for (i = n; i > 1; i--)
//	{//9번 루프
//		for (j = 1; j < i; j++)
//		{//i값만큼 루프를 돈다 
//			//값의 비교 코드(
//			if (list[j - 1] > list[j])//앞의 요소가 뒤의 요소보다 크다면..?
//			{
//				SWAP(list[j - 1], list[j], temp);//매크로 함수 호출
//			}
//		}
//	}
//
//	return;
//}
//void insert_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//
//	for (i = 1; i < n; i++)		//외곽 루프에서 정렬할 범위를 확대해가는 기능을 하고있다
//	{
//		for (j = i; j > 0; j--)
//		{
//			if (list[j - 1] > list[j])		//앞에있는 요소가 더크다면
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//			else {//앞의 요소가 작다면...내부 루프를 탈출하고 외부루프의 증감식으로 이동함
//				break;
//			}
//		}
//	}
//	printf("삽입정렬중\n");
//	return;
//}
//void calcTime(void)
//{
//	used_time = end - start;
//	printf("실행완료\n");
//	printf("소요시간: %f 초 \n\n", (float)used_time / CLOCKS_PER_SEC);
//	return;
//}//실행시간을 측정 및 출력을 하는 함수

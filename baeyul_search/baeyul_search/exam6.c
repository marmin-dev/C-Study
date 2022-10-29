//배열을 활용한 정렬과 탐색 실습 -6
//이진탐색 바이너리 서치는 찾고자 하는 값들을 배열의 중앙에서 부터 탐색을 하는 방법이다
//이진탬색은 처음부터 검색을 진행하는 순차탐색과는 달리 배열요소들의 중앙을 기준으로해서 
//반으로 나누어 찾는알고리즘이다
//이진탐색은 탐색을 하기전에 배열의 요소가 정렬이 되어있어야 한다는 전제조건이 붙는다

#include <stdio.h>
#define LENGTH 8
int binary_search(int list[], int size, int searchvalue);
int main(void)
{
	int list[LENGTH] = { 12, 15 ,19 ,25 ,30, 45 ,60 ,99 };
	int search_value = 0, index = 0;
	do {
		printf("\n초기 배열 요소 값  12, 15 ,19 ,25 ,30, 45 ,60 ,99");
		printf("찾고자 하는 숫자 입력");
		scanf_s("%d", search_value);
		index = binary_search(list, LENGTH, search_value);

	} while (1);


}
int binary_search(int list[], int size, int searchvalue)
{
	int low = 0;//하한 인덱스 값
	int high = size - 1;//상한 인덱스 값인데 사이즈보다 -1을 해주어야한다 인덱스는 0부터 시작하기떄문
	int md = 0, cnt = -1;
	while (low <= high) {//하한값이 상한값을 초과하면 루프탈출
		printf("%d회 이진탐색 : ");
		printf("탐색범위 %d - %d\n",low,high);
		//중앙값을 계산
		md = (low + high) / 2; // 상한 하한값을 더하여 2로나누어서 소수점이 나오면 절삭
		-
	}
}

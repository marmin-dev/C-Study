//#define _CRT_SECURE_NO_WARNINGS
////배열을 활용한 정렬과 탐색 실습
////탐색중에 순차탐색에 대해서 실습을 한다
////순차탐색은 배열의 요소를 하나하나씩 다 꺼내어 찾고자하는 값ㅇ르 찾을때까지 탐색하는 방법이다
////순차탐색은 구현하는것은 단순한 편이지만 배열의 모든 요소를 끝까지 탐색하기 때문에
////요소의 양이 많아진다면 다소 시간이 걸린다는 단점이 있다
//
////순차탐색의 예제
//#include <stdio.h>
//#define LENGTH 7
//int main(void)
//{
//	int arr[LENGTH] = { -7,9,10,100,258,31,66 };
//	int search_value = 0 ;
//	char yn = " ";
//	printf("초기 배열 요소들의 값: 초기배열 요소들의값 -7 9 10 100 258 31 66\n ");
//	while (1) {
//		printf("찾을 숫자를 입력하시오:-7~258");
//		scanf_s("%d", &search_value);
//		printf("\n");
//		if(search_value!=-7||search_value !=9 ||search_value != 10 ||
//			search_value != 10 ||search_value != 258 || search_value != 31 ||
//				search_value != 66)
//		{printf("해당값이 존재하지 않습니다");
//		printf("다시 입력해주세요");
//		continue;
//
//		}
//		for (count = 0; count < LENGTH; count++)
//		{
//			if (arr[count] == search_value)
//			{
//				printf("순차 탐색 횟수 %d회\n", count + 1);
//				printf("찾고자 하는 값의 인덱스는 %d입니다.", count);
//			}
//		re_ch:
//			printf("프로그램을 다시 시작할까요??( y/n)");
//			scanf_s("%c", yn, sizeof(char));
//			if (yn == 'N' || yn == 'n')
//			{
//				printf("프로그램을 종료합니다 \n");
//				break;
//			}
//			else if (yn == 'y' || yn == 'Y')
//			{
//				printf("알파벳을 확인해주세요 잘못입력하셨습니다");
//				goto re_ch;
//			}
//		}
//	}
//
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h> //strlen()를 사용하기 위해서 포함
//#define MAX_LENGTH 64
//
//int main(void)
//{
//	char str[MAX_LENGTH] = "";
//	char temp=' ';
//	int i = 0, j = 0, length = 0;
//	printf("문자열을 입력하세요:");
//	scanf_s("%s", str, MAX_LENGTH);
//	//문자열의 길이를 구하는 코드
//	length = strlen(str)-1;
//	//버블정렬을 사용하여 문자열에 포함된 문자들을 오름차순으로 정렬한다.
//	//총비교단계는 문자열의 길이-1 만큼이다.
//	for (i = 0; i < length ; i++)//먼저올리고 내부루프에서 빼는 방식
//	{//각 단계별로 비교횟수는 '항목의 개수' -1씩 시작해서 1씩줄어들게 내부루프를 구현하면 된다.
//		for (j = 0; j < length - i; j++)//인접한 두 문자를 비교하여 작은 값을 뒤로보낸다.
//		{//j번째 문자와 j+1번째 문자를 비교하여 아스키코드 값이 더큰 문자를 뒤로 보낸다.
//			//문자가 8개이면 8x7번돌고 줄어들기때문에 /2만큼 돈다.
//			if (str[j] > str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//	}
//	printf("오름차순으로 정렬된 문자열 %s\n\n", str);
//	return 0;
//}
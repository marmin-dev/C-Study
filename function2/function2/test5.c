//#include <stdio.h>
//#define MAX 32767 //매크로 상수
//int sum(int cnt);
//
//int main(void)
//{
//	int input = 0, hap = 0;
//
//	printf("main함수 영역이다\n\n");
//	//사용자로부터 정수를 입력받는 코드
//	re:printf("입력>어디까지 정수를 누적값을 구할까요?");
//	scanf_s("%d", &input);
//	getchar();
//	//사용자가 잘못된 입력을 받았을때, 입력을 처리하는 코드
//	//한계설정하기 음수가 들어왔을때 에러를 처리하는 부분 
//	if (input < 0)
//	{
//		printf("양수만 입력이 가능합니다!:");
//		goto re;
//	}
//	else if (input > MAX)
//	{
//		printf("int 자료형의 유효값을 넘어섰다");
//		goto re;
//	}
//	else if
//	else
//	{
//		printf("int 자료형의 양의 정수값32767까지만 입력이 가능합니다\n");
//		goto re;
//	}
//
//	printf("호출 > sum()함수 호출\n");
//	hap = sum(input);
//
//
//
//
//
//
//
//	return 0;
//}
//int sum(int cnt)
//{
//	if (cnt == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return(cnt + sum(cnt - 1));
//	}
//	return 0;
//}
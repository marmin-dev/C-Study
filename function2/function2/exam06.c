//#include <stdio.h>
////인수 전달방법
////1.값에 의한 호출 call by balue 사용자 정의 함수를 호출할때, 인수의 값 자체를 전달하는 것이고
////이 전달된 값은 함수의 매개변수 공간에 복사되어 명령이 수행되고 함수를 종료하더라도 호출한 곳에서는
////전혀 영향을 받지 아니한다. 함수 호출을 할 때는 무조건 매개변수의 개수와 타입이 일치를 반드시 해야한다.
////call by value 에 동생아 지금 몇시니 4시에요 시간의 값은 알지만 시계의위치는 모르기때문에 수정불가.
//int call_value(int num);
//int main(void)
//{
//	int num = 100, call_after = 0;
//	printf("[main()함수 영역]\n");
//	printf("함수호출 전>num의 값 :%d \n", num);
//	printf("함수호출 전>num의 값 :%p \n", &num);
//	printf("함수호출 전>call의 값 :%d \n", call_after);
//	printf("함수호출 전>call의 값 :%p \n", &call_after);
//	call_after = call_value(num);
//
//	printf("[main()함수 영역]\n");
//	printf("함수호출 후>num의 값 :%d \n", num);
//	printf("함수호출 후>num의 값 :%p \n", &num);//사용자 정의된 함수는 주소값에 전혀 영향을
//	//미치지 않는다. 
//	printf("함수호출 후>call의 값 :%d \n", call_after);
//	printf("함수호출 후>call의 값 :%p \n", &call_after); 
//	return 0;
//}
//int call_value(int num)//사용자 정의함수 구현
//{//100 이 매개 변수 num 복사가 되는 것이다 
//	printf("[call value 함수 영역]\n");
//	printf("복사되어진 num의 값 %d\n", num);
//	printf("calll_value()의 주소값 :%p\n", &num);
//	printf("함수수행> 복사되어진값 100에 10을 더하여 main함수로 반환함\n");
//	num += 10;
//	printf("함수수행끝 메인으로 반환\n");
//	return num;
//}
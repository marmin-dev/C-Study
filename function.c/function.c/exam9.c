////함수와 변수 실습
//// register 변수는 cpu내에 있는 레지스터 저장공간을 사용하는 변수를 말한다.레지스터 변수를
//// 사용하는 궁극적인 목표는 프로그램의 실행속도가 빠르기 때문이다 
//// 레지스터 변수는 지역 변수에만 사용할수 있고 ,레지스터변수로 사용하기 위해선
//// 데이터타입앞에 register 키워드를 붙여준다
//// register 변수는 포인터 변수와 주소참조 연산자 &를 쓸수가 없다. 
//// 매우소량의 메모리공간이며 없는 경우도 있다.
////register 변수와 auto변수의 속도 차이에 대한 예제
//#include <stdio.h>
//#include <time.h>
//#define Time 1000000//백만번 매크로 상수 선언
//int main(void)
//{
//	clock_t start1 = 0, start2 = 0, end1 = 0, end2 = 0;
//	// clock ticks의 자료를 담고있는 데이터 타입으로 clock()의 반환형이다.
//	double res1 = 0.0, res2 = 0.0;
//
//	auto long long i = 0, sum = 0;//일반지역변수 선언 및 초기화
//	register long long j = 0, total = 0;//레지스터 지역변수 선언 및 초기화
//
//	printf("\n auto 일반변수사용\n");
//	//clock 함수는 타임에 존재하는 함수로 프로그램에 의해 cpu가 소비된 시간 반환
//	start1 = clock();
//	for (i = 0; i <= Time; i++)
//	{
//		sum += i;
//	}
//	end1 = clock();
//	res1 = (end1 - (double)start1) / CLOCKS_PER_SEC;//초당 클록 틱스의 수를나타낸 매크로
//	//실행시간을 FOR문 실행시간을 RES1에 저장함.
//	printf("auto 변수 사용 소요된 시간(초):%.16lf\n\n",res1);
//
//	printf("\n register변수사용\n");
//	//clock 함수는 타임에 존재하는 함수로 프로그램에 의해 cpu가 소비된 시간 반환
//	start2 = clock();
//	for (j = 0; j <= Time; j++)
//	{
//		total += j;
//	}
//	end2 = clock();
//	res2 = (end2 - (double)start2) / CLOCKS_PER_SEC;//초당 클록 틱스의 수를나타낸 매크로
//	//실행시간을 FOR문 실행시간을 RES1에 저장함.
//	printf("auto 변수 사용 소요된 시간(초):%.16lf\n\n", res2);
//	//레지스터  변수는 사용할수 있는 일반변수에 비해 너무 작다 
//	//왠만하면 레지스터 변수는 사용하지 않도록 하자 일반변수를 사용하도록 한다.
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
////실수형 변수에서 표현방법이 2가지가 존재한다(부동소수점 방식을 채택해서 사용
////1.고정소수점 방식: 정수 부분을 위하여 일정한 비트를 할당하고 소수부분을위하여
////일정부분을 할당하는 방식 
////2. 예를 들어 32비트면 정수부분을 16비트 소수부분을 16비트로 할당하는 체계
////3.과학과 공학에서 필요한 아주 큰 수를 표현할 수가 없다.
////부동소수점 방식 
////표현할수있는 범위가 대폭 늘어난다
////float 형의 경우 가수부분은 6자리의 10진수로 지수부분은 10의 -38승부터 10의 38승까지
////표현이 가능하다
////고정소수점방식에 비해 계산속도는 떨어지더라도 넓은 표현범위로 인하여 과학과 공학에 
////많이 사용이 된다.실수의 경우에는 정밀도가 상당히 중요한 요소이다 
////double형의 경우, 유효숫자가 10진수가 16자리를 표현할수있다,지수부분은 10의 -308승
////까지 표현이 될수있다
//int main(void)
//{
//	float height = 0.0, weight = 0.0, swap = 0.0, bmi=0.0;
//	//바이트 실수형을 선언과 동시에 초기화
//	printf("키와 체중을 소수 둘째자리까지 표현해주세요");
//	//bmi공식은 = 체중 kg / 키(m)x키(m)
//	printf("키 입력(cm):");
//	scanf_s("%f", &height);
//
//	printf("체중입력(kg):");
//	scanf_s("%f", &weight);
//	swap = height / 100;
//	bmi = weight / (swap * swap);
//	printf("bmi공식은 = 체중 kg / 키(m)x키(m)\n");
//	printf("센티미터를 입력한 키를 미터로 환산해서 사용했음\n");
//	printf("당신의 BMI는 %f입니다\n",bmi);
//	return 0;
//}
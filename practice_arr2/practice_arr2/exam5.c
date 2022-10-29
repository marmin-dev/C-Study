////배열과 함수에 대한 실습
////배열명을 인수로하여 함수 사용자 정의 함수를 호출한다는 것은 곧 배열명ㅇ ㅣ주소값이므로 
////주소자체를 넘기는 것이다. 호출하는 쪽에서는 괄호안에 함수명(배열명): 호출하면되고 , 사용자 정의함수에서는
////함수명이 합이라고 가정을 한다면 선언부는 선언할때 반환값 함수명(데이터 타입 배열명[]){}으로 해야한다.
//// call by reference의 개념과 동일하다
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define LENGTH 5
//int hap(int score[], int size);
//int point_hap(int* score, int size);
//int main(void)
//{
//	//배열의 선언과 동시에 초기화
//	int score[LENGTH] = { 100,50,30,20,90 };
//	int sum = 0;
//	float avg = 0.0f;
//
//	printf("상수> #define LENGTH 5\n");
//	printf("배열>score[LENGTH]={100,50,30,20,90}\n");
//	sum = point_hap(score, LENGTH);//사용자 정의 함수 호출 콜바이 밸류 콜바이 레퍼런스
//	//매개변수로 배열명 즉 주소가 넘어오고 있다 주소를 인수값으로 취하고 있다.
//	avg = (float)sum / LENGTH;
//	//avg = sum / sizeof(score) / sizeof(float);
//	printf("반환>배열에 저장되어 있는 5과목의 총점 : %d\n", sum);
//	printf("산출>배열에 저장되어 있는 5과목의 평균 %.2f\n",avg);
//	printf("호출한 곳에 영향>score[3]의 값: %d",score[3]);
//	return 0;
//}//배열의 총점을 구하는 기능을 가지고있다
//int hap(int score[], int size)
//{
//	int i = 0, total = 0;
//	printf("\n사용자 정의 함수 hap을 통하여 총점 계산 후 반환\n");
//	//총점 계산 코드
//	for (i = 0; i < size; i++)
//	{
//		total += score[i];
//	}
//	score[3] = 99;//주소를 알고 있기에 호출한 곳에 영향을 끼치는 것이다.
//	return total;
//}
//int point_hap(int* score, int size) {// 포인터 변수에 배열의 주소값(포인터 상수)이 저장
//	int i = 0, total = 0;
//	printf("\n사용자 정의 함수 point_hap을 통하여 포인터를 활용하여 총점 계산 후 반환\n");
//	for (i = 0; i < size; i++)
//	{
//		total += *score;		 //*score는 실제 값을 의미 (간접참조) score 은 주소 *포인터는 실제값
//		score++; //포인터의 위치를 이동시킨다 4바이트 씩
//	}
//	return total;
//}
#include <stdio.h>
#include <time.h>//랜덤함수를 사용하기위해 끌어옴

int getRandomNumber(int level);//랜덤값 함수
void showQuestion(int level, int num1, int num2);//질문지
void success();//성공시
void fail();//실패시
int main(void)
{
	//문이 5개가 있다고 가정하기, 각 문마다 점점 어려운 수식 퀴즈가 출제
	// 맞히면 통과, 틀리면 실패

	srand(time(NULL));//랜덤입력
	int count = 0; // 맞힌 문개수 count 는 빌트인 함수
	for (int i = 1; i <= 5; i++)//for 문 1부터 5번 문제까지 자동으로 재생
	{
		// x*y=? 
		int num1 = getRandomNumber(i);//함수 1번 랜덤으로 값을 받는다
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);//질문지는 무엇일까? 

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램을 종료합니다\n");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			//성공 
			success();
			count++;
		}
		else
		{
			fail();
		}
	}

	printf("\n\n 당신은 5개의 비밀번호중 %d 개를 맞혔습니다\n", count);
	return 0;
}
int getRandomNumber(int level) //랜덤 넘버받기 
{
	return rand() % (level * 7) + 1; //랜드는 빌트인 함수이며 난이도 설정 함수이다 
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n######## % d 번째 비밀번호 #########", level); //레벨값에 맞는 비밀번호는 무엇일까?
	printf("\n\t%d x %d는?\n\n",num1,num2); // 랜덤으로 발급받은 두개의 번호를 문제로 표시
	printf("\n비밀번호를 입력하세요 (종료 : -1)>>"); //종료시 값을 입력하는 것 표시 및 비밀번호 입력 문구

}
void success()
{
	printf("\n 정답입니다 \n"); //성공시 함수
}

void fail()
{
	printf("틀렸습니다"); // 실패시 함수
}

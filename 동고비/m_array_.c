# include <stdio.h>
# include <time.h>
//10 마리의 서로 다른 동물
// 사용자로 부터 2개의 입력값을 받아서 -> 같은 동물을 찾으면 카드를 뒤집기
//모든 동물 쌍을 찾으면 게임종료
//총 실패 횟수 알려주기
int arrayAnimal[4][5];//카드지도 (20장의 카드)
int checkAnimal[4][5];// 뒤집혔는지 여부 확인
char* strAnimal[10];
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
void initAnimalArray();


int main(void)
{
	srand(time(NULL));

	void initAnimalArray();
	void initAnimalName();

	void shuffleAnimal();
	int failcount = 0;//실패 횟수 

	while (1)
	{
		int select1 = 0; //사용자가 선택한 처음 수
		int select2 = 0; //사용자가 선택한 두번째 수

		printAnimals();//동물 위치 출력
		printQuestion();//문제출력 (카드지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", & select1, & select2);

		if (select1 == select2);// 같은 카드 선택시 무효
	}
	return 0;
}
void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j];
		}
	}
}
int arrayAnimal[4][5];
void initAnimalName()
{
	strAnimal[0] = "기린";
	strAnimal[1] = "원숭이";
	strAnimal[2] = "하마";
	strAnimal[3] = "강아지";
	strAnimal[4] = "고양이";
	strAnimal[5] = "돼지";
	strAnimal[6] = "코끼리";
	strAnimal[7] = "낙타";
	strAnimal[8] = "타조";
	strAnimal[9] = "호랑이";
	
}
void shuffleAnimal()//동물이 4x5형태로 카드가 만들어 질텐데 동물은 10마리다 4x5공간에 동물 랜덤으로 배치하기
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos); //

			arrayAnimal[x][y] = i; //지도에 i 라는 값 표현 i 값은 동물
		}
	}
}
//좌표에서 빈공간 찾기
int getEmptyPosition() //
{
	while (1)
	{
		int randPos = rand() % 20;//0~19 사이 반환
		//19는 실제로? (3,4) 로 바꿔야 접근이 가능해진다
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);
		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}
int conv_pos_x(int x)
{
//랜덤으로 받은 값을 좌표로 바꾼다
	return x / 5;
}
int conv_pos_y(int y)
{
	return y % 5; //y를 5로 나눈 나머지 값
}

void printAnimals()// 동물의 위치 출력
{
	printf("\n====================이건 비밀인데 몰래 보여줍니다\n\n");
	for (int i = 0; i < 4 ; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=========================================\n\n");
}
void printQuestion()//문제출력 카드지도
{
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++);
		{
			//카드를 뒤집어서 정답을 맞혔으면 '동물이름'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal [arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8s", seq);//시퀀스가 하는 역할은 맵을 가지고있을때 문제를 보여주고 우리가 몇번 카드를 뒤집으라 알려줄때 번호를 임시로 붙히는 것 체크애니멀은 동물 객체가 있는 부분을 1 
			}
			//아직 뒤집지 못했으면 (정답을 맞추지 못하였으면) 뒷면 -> 위치를 나타내는 숫자
		}
	}
}
// ex seq = 1 2 3 4 5   check 01010
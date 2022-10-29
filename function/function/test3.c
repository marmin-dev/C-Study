//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int arrayAnimal[4][5];//카드 지도 20장의 카드
//void initAnimalArray();
//char* strAnimal[10];//10바이트의 데이터  캐릭터 포인터타입
//void shuffleAnimal();
//int getEmptyPosition();
//int main(void)
//{//10마리의 서로 다른 동물 {각카드 2장씩
//	//사용자로 붙터 2개의 입력값을 받아서 같은동물이면 카드 뒤집기
//	//모든 동물 쌍을 찾으면 게임종료
//	//총 실패 횟수 알려주기
//	srand(time(NULL));
//	initAnimalArray();
//	initAnimalName();
//
//	shuffleAnimal();
//
//
//
//	return 0;
//}
//void initAnimalArray()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arrayAnimal[i][j] = -1;
//		}
//	}
//}
//void initAnimalName()
//{
//	strAnimal[0] = "원숭이";
//	strAnimal[1] = "하마";
//	strAnimal[2] = "강아지";
//	strAnimal[3] = "고양이";
//	strAnimal[4] = "돼지";
//	strAnimal[5] = "코끼리";
//	strAnimal[6] = "기린";
//	strAnimal[7] = "낙타";
//	strAnimal[8] = "타조";
//	strAnimal[9] = "호랑이";
//}
//void shuffleAnimal()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int pos = getEmptyPosition();
//			int x = conv_pos_x(pos);
//			int y = conv_pos_y(pos);
//
//			arrayAnimal[x][y] = i;
//		}
//	}
//}
//int getEmptyPosition()
//{
//	while(1)
//	{
//		int randPos = rand() % 20;
//		//19는 -> 3,4 ex
//		int x = conv_pos_x(randPos);
//		int y = conv_pos_y(randPos);
//
//		if (arrayAnimal[x][y] == -1)
//		{
//			return randPos;
//
//		}
//
//	}
//	return 0;
//}
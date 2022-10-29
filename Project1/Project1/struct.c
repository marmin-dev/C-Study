//#include <stdio.h>
//struct Gameinfo {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct Gameinfo* friendGame; // 연관업체 게임
//	
//};
//
//typedef struct GameInformation
//{
//	char* name;-
//	int year;
//	int price;
//	char* company;
//}GAME_INFO;
//
//int main_struct(void)
//{
//	//게임출시
//	//이름 나도게임
//	//발매년도 2017
//	//가격 50원
//	//제작사 나도회사
//
//	char* name = "나도게임";
//	int year = 2017;
//	int price = 50;
//	char* company = "나도회사";
//
//	//게임출시
//	//이름 너도게임
//	//발매년도 2017
//	//가격 100원
//	//제작사 너도회사
//
//	char* name2 = "너도게임";
//	int year2 = 2017;
//	int price2 = 100;
//	char* company2 = "너도회사";
//
//	//구조체 사용
//	struct Gameinfo gameinfo1;
//	gameinfo1.name = "나도게임";
//	gameinfo1.year = 2017;
//	gameinfo1.price = 50;
//	gameinfo1.company = "나도회사";
//
//	//구조체 출력
//	printf("게임 출시 정보 \n");
//	printf("게임명  :%s\n", gameinfo1.name);
//	printf("발매년도:%d\n", gameinfo1.year);
//	printf("가격    :%d\n", gameinfo1.price);
//	printf("제작사  :%s\n", gameinfo1.company);
//
//	//구조체를 배열처럼초기화하기
//	struct Gameinfo gameinfo2 = { "너도게임",2017,100,"너도회사" };
//	printf("\n\n또게임 출시 정보 \n");
//	printf("게임명  :%s\n", gameinfo2.name);
//	printf("발매년도:%d\n", gameinfo2.year);
//	printf("가격    :%d\n", gameinfo2.price);
//	printf("제작사  :%s\n", gameinfo2.company);
//
//	struct Gameinfo gameArray[2] = {
//		{ "나도게임",2017,50,"나도회사" },
//	{ "너도게임", 2017, 100, "너도회사" }
//	};
//	//구조체 포인터
//	struct Gameinfo* gamePtr; // 미션맨
//	gamePtr = &gameinfo1;/*
//	printf("\n\n미션맨의 게임 출시 정보 \n");
//	printf("게임명  :%s\n", (*gamePtr).name);
//	printf("발매년도:%d\n", (*gamePtr).year);
//	printf("가격    :%d\n", (*gamePtr).price);
//	printf("제작사  :%s\n", (*gamePtr).company);*/
//	//int 형 변수같은 값을 포인터로 가르쳤을때 
//	//ptr 앞에 별을 붙힘으로써 값을 나타내게됨
//	//gamePtr 역시 별을 붙히면된다
//	/*printf("\n\n\n");
//	printf("게임명  :%s\n", gamePtr->name);
//	printf("발매년도:%d\n", gamePtr->year);
//	printf("가격    :%d\n", gamePtr->price);
//	printf("제작사  :%s\n", gamePtr->company);*/
//
//	//연관업체 게임소개
//	gameinfo1.friendGame = &gameinfo2;
//	printf("\n\n연관업체의 게임 출시 정보 \n");
//	printf("게임명  :%s\n", gameinfo1.friendGame->name);
//	printf("발매년도:%d\n", gameinfo1.friendGame->year);
//	printf("가격    :%d\n", gameinfo1.friendGame->price);
//	printf("제작사  :%s\n", gameinfo1.friendGame->company);
//	//typedef 자료형에 별명 지정
//	int i = 1;
//	typedef int 정수;
//	typedef float 실수;
//	정수 정수변수 = 3;// int i =3;
//	실수 실수변수 = 3.23f;
//	printf("정수변수: %d, 실수변수 %.2f\n\n", 정수변수, 실수변수);
//
//	typedef struct Gameinfo 게임정보;
//	게임정보 game1;
//	game1.name = "한글게임";
//	game1.year = 2014;
//
//	GAME_INFO game2;
//	game2.name = "한글게임2";
//	game2.year = 2014;
//
//	
//	return 0;
//}
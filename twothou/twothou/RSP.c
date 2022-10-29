//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define Rock 1
//#define Scissor 2
//#define Paper 3
//void get_rand_num(void);
//int user(user_sel);//유저 선택
//int com(AI_sel);//컴퓨터가 선택
//int winner(user,com); //승패가리기
//int main(void)
//{
//	int user_sel = 0, AI_sel = 0, win_count = 0,same=0;//유저선택값과 컴퓨터선택값
//	int result=0;
//	get_rand_num();
//	
//	while (1)//유저가 질때까지 계속
//	{
//		user(user_sel);
//		com(AI_sel);
//		result=winner(user,com);
//		if (winner == 1)
//		{
//			printf("비겼습니다");
//			same++;
//		}
//		else if (winner == 2)
//		{
//			printf("이겼습니다");
//			win_count++;
//		}
//		else
//		{
//			("졌습니다");
//			break;
//		}
//		printf("게임의 결과 승:%d 무:%d", win_count,same);
//	}
//	return 0;
//}
//void get_rand_num(void)
//{
//	srand(time(NULL));
//}
//int user(user_sel)
//{
//	printf("바위는1,가위는2,보는3:");
//	scanf_s("%d", &user_sel);
//	if (user_sel == Rock)
//		printf("당신은 바위선택,");
//	else if (user_sel == Scissor)
//		printf("당신은 가위선택,");
//	else if (user_sel == Paper)
//		printf("당신은 보 선택,");
//	else
//	{
//		printf("잘못된 숫자입니다");
//		exit(0);
//	}
//
//	return user_sel;
//}
//int com(AI_sel)
//{
//	AI_sel = rand(Rock,Scissor,Paper);
//	if (AI_sel == Rock)
//		printf("컴퓨터는 바위를 선택,");
//	else if (AI_sel == Scissor)
//		printf("컴퓨터는 가위를 선택,");
//	else
//		printf("컴퓨터는 보를 선택");
//
//	return AI_sel;
//}
//int winner(user,com)
//{
//	
//		if (user == com)
//			return 1;//비김
//		else if ((user % 3) == (com + 2) % 3)
//			return 2;//유저 승리시
//		else
//			return 3;//컴퓨터 승리시
//	
//}
//	
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define Rock 1
//#define Scissor 2
//#define Paper 3
//void get_rand_num(void);
//int user(user_sel);//���� ����
//int com(AI_sel);//��ǻ�Ͱ� ����
//int winner(user,com); //���а�����
//int main(void)
//{
//	int user_sel = 0, AI_sel = 0, win_count = 0,same=0;//�������ð��� ��ǻ�ͼ��ð�
//	int result=0;
//	get_rand_num();
//	
//	while (1)//������ �������� ���
//	{
//		user(user_sel);
//		com(AI_sel);
//		result=winner(user,com);
//		if (winner == 1)
//		{
//			printf("�����ϴ�");
//			same++;
//		}
//		else if (winner == 2)
//		{
//			printf("�̰���ϴ�");
//			win_count++;
//		}
//		else
//		{
//			("�����ϴ�");
//			break;
//		}
//		printf("������ ��� ��:%d ��:%d", win_count,same);
//	}
//	return 0;
//}
//void get_rand_num(void)
//{
//	srand(time(NULL));
//}
//int user(user_sel)
//{
//	printf("������1,������2,����3:");
//	scanf_s("%d", &user_sel);
//	if (user_sel == Rock)
//		printf("����� ��������,");
//	else if (user_sel == Scissor)
//		printf("����� ��������,");
//	else if (user_sel == Paper)
//		printf("����� �� ����,");
//	else
//	{
//		printf("�߸��� �����Դϴ�");
//		exit(0);
//	}
//
//	return user_sel;
//}
//int com(AI_sel)
//{
//	AI_sel = rand(Rock,Scissor,Paper);
//	if (AI_sel == Rock)
//		printf("��ǻ�ʹ� ������ ����,");
//	else if (AI_sel == Scissor)
//		printf("��ǻ�ʹ� ������ ����,");
//	else
//		printf("��ǻ�ʹ� ���� ����");
//
//	return AI_sel;
//}
//int winner(user,com)
//{
//	
//		if (user == com)
//			return 1;//���
//		else if ((user % 3) == (com + 2) % 3)
//			return 2;//���� �¸���
//		else
//			return 3;//��ǻ�� �¸���
//	
//}
//	
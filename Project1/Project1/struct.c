//#include <stdio.h>
//struct Gameinfo {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct Gameinfo* friendGame; // ������ü ����
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
//	//�������
//	//�̸� ��������
//	//�߸ų⵵ 2017
//	//���� 50��
//	//���ۻ� ����ȸ��
//
//	char* name = "��������";
//	int year = 2017;
//	int price = 50;
//	char* company = "����ȸ��";
//
//	//�������
//	//�̸� �ʵ�����
//	//�߸ų⵵ 2017
//	//���� 100��
//	//���ۻ� �ʵ�ȸ��
//
//	char* name2 = "�ʵ�����";
//	int year2 = 2017;
//	int price2 = 100;
//	char* company2 = "�ʵ�ȸ��";
//
//	//����ü ���
//	struct Gameinfo gameinfo1;
//	gameinfo1.name = "��������";
//	gameinfo1.year = 2017;
//	gameinfo1.price = 50;
//	gameinfo1.company = "����ȸ��";
//
//	//����ü ���
//	printf("���� ��� ���� \n");
//	printf("���Ӹ�  :%s\n", gameinfo1.name);
//	printf("�߸ų⵵:%d\n", gameinfo1.year);
//	printf("����    :%d\n", gameinfo1.price);
//	printf("���ۻ�  :%s\n", gameinfo1.company);
//
//	//����ü�� �迭ó���ʱ�ȭ�ϱ�
//	struct Gameinfo gameinfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
//	printf("\n\n�ǰ��� ��� ���� \n");
//	printf("���Ӹ�  :%s\n", gameinfo2.name);
//	printf("�߸ų⵵:%d\n", gameinfo2.year);
//	printf("����    :%d\n", gameinfo2.price);
//	printf("���ۻ�  :%s\n", gameinfo2.company);
//
//	struct Gameinfo gameArray[2] = {
//		{ "��������",2017,50,"����ȸ��" },
//	{ "�ʵ�����", 2017, 100, "�ʵ�ȸ��" }
//	};
//	//����ü ������
//	struct Gameinfo* gamePtr; // �̼Ǹ�
//	gamePtr = &gameinfo1;/*
//	printf("\n\n�̼Ǹ��� ���� ��� ���� \n");
//	printf("���Ӹ�  :%s\n", (*gamePtr).name);
//	printf("�߸ų⵵:%d\n", (*gamePtr).year);
//	printf("����    :%d\n", (*gamePtr).price);
//	printf("���ۻ�  :%s\n", (*gamePtr).company);*/
//	//int �� �������� ���� �����ͷ� ���������� 
//	//ptr �տ� ���� �������ν� ���� ��Ÿ���Ե�
//	//gamePtr ���� ���� ������ȴ�
//	/*printf("\n\n\n");
//	printf("���Ӹ�  :%s\n", gamePtr->name);
//	printf("�߸ų⵵:%d\n", gamePtr->year);
//	printf("����    :%d\n", gamePtr->price);
//	printf("���ۻ�  :%s\n", gamePtr->company);*/
//
//	//������ü ���ӼҰ�
//	gameinfo1.friendGame = &gameinfo2;
//	printf("\n\n������ü�� ���� ��� ���� \n");
//	printf("���Ӹ�  :%s\n", gameinfo1.friendGame->name);
//	printf("�߸ų⵵:%d\n", gameinfo1.friendGame->year);
//	printf("����    :%d\n", gameinfo1.friendGame->price);
//	printf("���ۻ�  :%s\n", gameinfo1.friendGame->company);
//	//typedef �ڷ����� ���� ����
//	int i = 1;
//	typedef int ����;
//	typedef float �Ǽ�;
//	���� �������� = 3;// int i =3;
//	�Ǽ� �Ǽ����� = 3.23f;
//	printf("��������: %d, �Ǽ����� %.2f\n\n", ��������, �Ǽ�����);
//
//	typedef struct Gameinfo ��������;
//	�������� game1;
//	game1.name = "�ѱ۰���";
//	game1.year = 2014;
//
//	GAME_INFO game2;
//	game2.name = "�ѱ۰���2";
//	game2.year = 2014;
//
//	
//	return 0;
//}
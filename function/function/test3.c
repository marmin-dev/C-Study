//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int arrayAnimal[4][5];//ī�� ���� 20���� ī��
//void initAnimalArray();
//char* strAnimal[10];//10����Ʈ�� ������  ĳ���� ������Ÿ��
//void shuffleAnimal();
//int getEmptyPosition();
//int main(void)
//{//10������ ���� �ٸ� ���� {��ī�� 2�徿
//	//����ڷ� ���� 2���� �Է°��� �޾Ƽ� ���������̸� ī�� ������
//	//��� ���� ���� ã���� ��������
//	//�� ���� Ƚ�� �˷��ֱ�
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
//	strAnimal[0] = "������";
//	strAnimal[1] = "�ϸ�";
//	strAnimal[2] = "������";
//	strAnimal[3] = "�����";
//	strAnimal[4] = "����";
//	strAnimal[5] = "�ڳ���";
//	strAnimal[6] = "�⸰";
//	strAnimal[7] = "��Ÿ";
//	strAnimal[8] = "Ÿ��";
//	strAnimal[9] = "ȣ����";
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
//		//19�� -> 3,4 ex
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
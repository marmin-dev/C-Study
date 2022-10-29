# include <stdio.h>
# include <time.h>
//10 ������ ���� �ٸ� ����
// ����ڷ� ���� 2���� �Է°��� �޾Ƽ� -> ���� ������ ã���� ī�带 ������
//��� ���� ���� ã���� ��������
//�� ���� Ƚ�� �˷��ֱ�
int arrayAnimal[4][5];//ī������ (20���� ī��)
int checkAnimal[4][5];// ���������� ���� Ȯ��
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
	int failcount = 0;//���� Ƚ�� 

	while (1)
	{
		int select1 = 0; //����ڰ� ������ ó�� ��
		int select2 = 0; //����ڰ� ������ �ι�° ��

		printAnimals();//���� ��ġ ���
		printQuestion();//������� (ī������)
		printf("������ ī�带 2�� ������ : ");
		scanf_s("%d %d", & select1, & select2);

		if (select1 == select2);// ���� ī�� ���ý� ��ȿ
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
	strAnimal[0] = "�⸰";
	strAnimal[1] = "������";
	strAnimal[2] = "�ϸ�";
	strAnimal[3] = "������";
	strAnimal[4] = "�����";
	strAnimal[5] = "����";
	strAnimal[6] = "�ڳ���";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";
	
}
void shuffleAnimal()//������ 4x5���·� ī�尡 ����� ���ٵ� ������ 10������ 4x5������ ���� �������� ��ġ�ϱ�
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos); //

			arrayAnimal[x][y] = i; //������ i ��� �� ǥ�� i ���� ����
		}
	}
}
//��ǥ���� ����� ã��
int getEmptyPosition() //
{
	while (1)
	{
		int randPos = rand() % 20;//0~19 ���� ��ȯ
		//19�� ������? (3,4) �� �ٲ�� ������ ����������
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
//�������� ���� ���� ��ǥ�� �ٲ۴�
	return x / 5;
}
int conv_pos_y(int y)
{
	return y % 5; //y�� 5�� ���� ������ ��
}

void printAnimals()// ������ ��ġ ���
{
	printf("\n====================�̰� ����ε� ���� �����ݴϴ�\n\n");
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
void printQuestion()//������� ī������
{
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++);
		{
			//ī�带 ����� ������ �������� '�����̸�'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal [arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8s", seq);//�������� �ϴ� ������ ���� ������������ ������ �����ְ� �츮�� ��� ī�带 �������� �˷��ٶ� ��ȣ�� �ӽ÷� ������ �� üũ�ִϸ��� ���� ��ü�� �ִ� �κ��� 1 
			}
			//���� ������ �������� (������ ������ ���Ͽ�����) �޸� -> ��ġ�� ��Ÿ���� ����
		}
	}
}
// ex seq = 1 2 3 4 5   check 01010
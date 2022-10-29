#include <stdio.h>
#include <time.h>//�����Լ��� ����ϱ����� �����

int getRandomNumber(int level);//������ �Լ�
void showQuestion(int level, int num1, int num2);//������
void success();//������
void fail();//���н�
int main(void)
{
	//���� 5���� �ִٰ� �����ϱ�, �� ������ ���� ����� ���� ��� ����
	// ������ ���, Ʋ���� ����

	srand(time(NULL));//�����Է�
	int count = 0; // ���� ������ count �� ��Ʈ�� �Լ�
	for (int i = 1; i <= 5; i++)//for �� 1���� 5�� �������� �ڵ����� ���
	{
		// x*y=? 
		int num1 = getRandomNumber(i);//�Լ� 1�� �������� ���� �޴´�
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);//�������� �����ϱ�? 

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�\n");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			//���� 
			success();
			count++;
		}
		else
		{
			fail();
		}
	}

	printf("\n\n ����� 5���� ��й�ȣ�� %d ���� �������ϴ�\n", count);
	return 0;
}
int getRandomNumber(int level) //���� �ѹ��ޱ� 
{
	return rand() % (level * 7) + 1; //����� ��Ʈ�� �Լ��̸� ���̵� ���� �Լ��̴� 
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n######## % d ��° ��й�ȣ #########", level); //�������� �´� ��й�ȣ�� �����ϱ�?
	printf("\n\t%d x %d��?\n\n",num1,num2); // �������� �߱޹��� �ΰ��� ��ȣ�� ������ ǥ��
	printf("\n��й�ȣ�� �Է��ϼ��� (���� : -1)>>"); //����� ���� �Է��ϴ� �� ǥ�� �� ��й�ȣ �Է� ����

}
void success()
{
	printf("\n �����Դϴ� \n"); //������ �Լ�
}

void fail()
{
	printf("Ʋ�Ƚ��ϴ�"); // ���н� �Լ�
}

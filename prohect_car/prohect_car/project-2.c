//������Ʈ-2 �Լ�5���� ����� �����Ͽ� ���� �и������Ͽ� ���� ó�� ���α׷��� ����� 
//���� ����� �ϼ��ϴ� �ǽ��� �غ���
//�Լ��� ����
//main():do~while ���� �̿��Ͽ� ���ѷ����� ����
//score_fun():�߰����, �⸻��� ������ �Է¹޾Ƽ� ������ ���ϰ� �����ϴ� ����� ����
//grade_fun():���޹��� ������ ������ ��޸��� ���(a+���� f���� ����� �����ϰ� ��ȯ�ϴ� ����� ����
//alpha_err(): do while ������ �Է��� ���ĺ��� ��ҹ��� �������� y�� n �̿��� ���ڸ� �Է��ϸ� �������ڹ�ȯ
//junsu_err():�߰� �⸻ 0~50 ����� ������ ��ȿ������ ����� �����޽����� ��ȯ�ϴ� ����� ����
//6.end_fun():���ĺ� ��ҹ��� �������� n�� �ԷµǸ� �Է¹��� ���ĺ��� ����ϰ� ���α׷��� �����ϴ� ����� ����


#include <stdio.h>
#include <stdlib.h>//exit �Լ��� ����ϱ� ���� ������
void score_fun();
char grade_fun(int jumsu);
char alpha_err(char op);
void jumsu_err(int jumsu);
void end_fun(char op);
int main(void)
{
	char choice = ' ';
	int jumsu_input = 0;
	//���� ���� ������
	do {
		printf("[main()�Լ� ����]\n\n");
		printf("���α׷��� �����Ͻðڽ��ϱ�?");
		scanf_s("%c", &choice, sizeof(char));
		switch (choice)
		{
		case 'Y':
		case 'y':
			score_fun();//�����Է� �Լ� ȣ��
			getchar();//���� ����
			break;
		case 'N':
		case 'n':
			end_fun(choice);//���α׷� �����Լ� ȣ��
			break;
		default:
			alpha_err(choice);//���ĺ��� �߸� �Է������� ȣ��
			getchar();//���ۺ���
			break;

		}


	} while (1);




	return 0;
}
//����� ���� �Լ� ����
void score_fun()//�����Է��Լ�
{
	int jumsu_m = 0, jumsu_f = 0,total=0;//���������� �ݵ�� �ʱ�ȭ�� ��Ģ�̴�.���������� �����߻��� �ȴ�
	printf("\n[score_fun()�Լ� ����]\n");
	//�����Է��ڵ�
	printf("�߰���� ���� �Է� (50�� ����):");
	scanf_s("%d", &jumsu_m);
	if (jumsu_m < 0 || jumsu_m>50)
	{
		jumsu_err(jumsu_m);
	}
	else
	{
		total += jumsu_m;
	}
	printf("�⸻��� ���� �Է� (50�� ����):");
	scanf_s("%d", &jumsu_f);
	if (jumsu_f< 0 || jumsu_f>50)
	{
		jumsu_err(jumsu_f);
	}
	else
	{
		total += jumsu_f;
		grade_fun(total);//������ ������ �Ű������� �Ͽ� ����� �������� grade_fun �Լ��� ȣ����
		getchar();
		main();//������ ������ ������ grade_fun()�Լ��� ������ ����߰� �Ͽ� main �Լ��� ȣ��
	}
	return;
}
char grade_fun(int jumsu)
{
	printf("\n[grade_fun()�Լ�����\n");
	if (jumsu >= 95 && jumsu <= 100)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:A+���� \n\n");
	}
	else if (jumsu >= 90 && jumsu <= 94)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:A0���� \n\n");
	}
	else if (jumsu >= 85 && jumsu <= 89)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:B+���� \n\n");
	}
	else if (jumsu >= 80 && jumsu <= 84)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:B0���� \n\n");
	}
	else if (jumsu >= 75 && jumsu <= 79)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:C+���� \n\n");
	}
	else if (jumsu >= 70 && jumsu <= 74)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:C0���� \n\n");
	}
	else if (jumsu >= 65 && jumsu <= 69)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:D+���� \n\n");
	}
	else if (jumsu >= 60 && jumsu <= 64)
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:D0���� \n\n");
	}
	else
	{
		printf("scire_fun()�Լ����� ���޹��� ����:%d\n", jumsu);
		return printf("����:F���� \n\n");
	}
	return 'A';
}
char alpha_err(char op)
{
	printf("\n[alpha_err()�Լ�����]");
	return printf("main()�Լ����� �Է��� ���ĺ� %c�� ��ȿ���� �ʽ��ϴ�\n\n",op);
}
void jumsu_err(int jumsu)
{
	printf("\n[jumsu_err�Լ�����]\n");
	printf("���� %d�� ��ȿ������ �ƴմϴ�\n", jumsu);
	return;
}
void end_fun(char op)
{
	printf("[endfun�Լ������̴�]\n");
	printf("main �Լ����� ���α׷� ���Ḧ ��û�߽��ϴ�");

	exit(0);
}
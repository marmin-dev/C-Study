#include <stdio.h>
#include <stdlib.h>//rand srand �Լ�
#include <time.h>
int sonata2000();
int sonata2000();
int bodynum();
char color[5][10] = { "���","������","�Ķ���","����","������" };
int sonata2000()
{
	int engine = 2000;//cc��
	static int num = 10000;
	//�ҳ�Ÿ ������ ������ȣ�� �Ǿ�� �ϱ� ������ ���� �ʱ�ȭ�� �����ʴ� �����������Ǿ����
	printf("\n2000cc�ҳ�Ÿ ���� ���� ��ȣ: %d", ++num);
	//�����ȣ �߱� �Լ��� ȣ��
	printf("�ҳ�Ÿ ��ü ���� ��ȣ:%d\n", bodynum());
	printf("����:%dcc �Ŀ�����", engine);
	//srand((unsigned)time(NULL));
	printf("����:%s\n", color[rand() % 5]);//��ó�� ȣ��ɶ� rand �Լ��� ����߱⿡ �����ϰ� ������ ��µ�
	return 0;
}
int sonata2400()
{
	int engine = 2400;//cc��
	static int num = 20000;
	//�ҳ�Ÿ ������ ������ȣ�� �Ǿ�� �ϱ� ������ ���� �ʱ�ȭ�� �����ʴ� �����������Ǿ����
	printf("\n2000cc�ҳ�Ÿ ���� ���� ��ȣ: %d", ++num);
	//�����ȣ �߱� �Լ��� ȣ��
	printf("�ҳ�Ÿ ��ü ���� ��ȣ:%d\n", bodynum());
	printf("����:%dcc ���̺긮�忣��", engine);
	//srand((unsigned)time(NULL));//���ڰ� ���庯���ϱ� �ð���  ���������Ѵ�
	printf("����:%s\n", color[rand() % 5]);//��ó�� ȣ��ɶ� 1�̱⶧���� ���������� �����ȴ�
	return 0;
}
int bodynum()
{
	static int bodyNumber = 100000;

	return ++bodyNumber;
}

////�迭�� �Լ��� ���� �ǽ�
////�迭���� �μ����Ͽ� �Լ� ����� ���� �Լ��� ȣ���Ѵٴ� ���� �� �迭�� ���ּҰ��̹Ƿ� 
////�ּ���ü�� �ѱ�� ���̴�. ȣ���ϴ� �ʿ����� ��ȣ�ȿ� �Լ���(�迭��): ȣ���ϸ�ǰ� , ����� �����Լ�������
////�Լ����� ���̶�� ������ �Ѵٸ� ����δ� �����Ҷ� ��ȯ�� �Լ���(������ Ÿ�� �迭��[]){}���� �ؾ��Ѵ�.
//// call by reference�� ����� �����ϴ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define LENGTH 5
//int hap(int score[], int size);
//int point_hap(int* score, int size);
//int main(void)
//{
//	//�迭�� ����� ���ÿ� �ʱ�ȭ
//	int score[LENGTH] = { 100,50,30,20,90 };
//	int sum = 0;
//	float avg = 0.0f;
//
//	printf("���> #define LENGTH 5\n");
//	printf("�迭>score[LENGTH]={100,50,30,20,90}\n");
//	sum = point_hap(score, LENGTH);//����� ���� �Լ� ȣ�� �ݹ��� ��� �ݹ��� ���۷���
//	//�Ű������� �迭�� �� �ּҰ� �Ѿ���� �ִ� �ּҸ� �μ������� ���ϰ� �ִ�.
//	avg = (float)sum / LENGTH;
//	//avg = sum / sizeof(score) / sizeof(float);
//	printf("��ȯ>�迭�� ����Ǿ� �ִ� 5������ ���� : %d\n", sum);
//	printf("����>�迭�� ����Ǿ� �ִ� 5������ ��� %.2f\n",avg);
//	printf("ȣ���� ���� ����>score[3]�� ��: %d",score[3]);
//	return 0;
//}//�迭�� ������ ���ϴ� ����� �������ִ�
//int hap(int score[], int size)
//{
//	int i = 0, total = 0;
//	printf("\n����� ���� �Լ� hap�� ���Ͽ� ���� ��� �� ��ȯ\n");
//	//���� ��� �ڵ�
//	for (i = 0; i < size; i++)
//	{
//		total += score[i];
//	}
//	score[3] = 99;//�ּҸ� �˰� �ֱ⿡ ȣ���� ���� ������ ��ġ�� ���̴�.
//	return total;
//}
//int point_hap(int* score, int size) {// ������ ������ �迭�� �ּҰ�(������ ���)�� ����
//	int i = 0, total = 0;
//	printf("\n����� ���� �Լ� point_hap�� ���Ͽ� �����͸� Ȱ���Ͽ� ���� ��� �� ��ȯ\n");
//	for (i = 0; i < size; i++)
//	{
//		total += *score;		 //*score�� ���� ���� �ǹ� (��������) score �� �ּ� *�����ʹ� ������
//		score++; //�������� ��ġ�� �̵���Ų�� 4����Ʈ ��
//	}
//	return total;
//}
////�迭�� �Լ��� ���� �ǽ�
////�迭������ �Լ��� ȣ���ϸ� �ּҰ��� ���޵�����, �迭��Ҹ� �μ��� �����ϸ� ����� �迭���
////������,������ ����)���� �Ǳ� ������ ȣ���� ���� �ƹ��� ������ ��ġ�� �ƴ��Ѵ�
////�迭 ��Ҹ� �Լ��� ȣ���Ҷ� �μ������� �Ѵٴ� ���� call by value ���� ���� ȣ�⿡ �ش��Ѵ�.
//
//#include <stdio.h>
//#define LENGTH 5		//��ũ�� ���(��ȣ���) ���� �� �ʱ�ȭ
//int power(int num);		//�Լ� power()����
//int main(void)
//{
//	int score[LENGTH] = { 0 };
//	int result = 0;
//	int i = 0;
//	//����ڷκ��� �Է¹޴� �ڵ�
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("score[%d]:", i);
//		scanf_s("%d", &score[i]);	//�迭��Ҵ� ������� �����ϹǷ� �ּ����� ������ &�� ���� �ٿ�����Ѵ�
//
//	}
//	/*printf("\n�Է¹��� �迭�� ��Ҹ� ���\n");
//	printf("{\n");
//		for (i = 0; i < LENGTH; i++)
//		{
//			printf("score[%d]:%d", i,score[i]);
//		}
//		printf("}");*/
//	printf("�Լ� ȣ��> score[3]�� ���� ����(����): %d\n", score[3]);
//	//�Լ� ȣ��
//	result = power(score[3]);//�������� �����ϸ� call by value ���Ѵ�
//	printf("�����Լ��� ����\n");
//	printf("��ȯ>power(score[3])ȣ�� ��� ��ȯ ��\n",result);
//	printf("�迭�� �� Ȯ��>score[3]�� ����� ��:%d\n\n",score[3]);
//	return 0;
//}//call by value�� ȣ���Ѱ��� ������ ��ġ�� �ʴ´�.
//int power(int num)
//{
//	int power = 0;
//	power = num * num;
//	printf("power �Լ� ����\n");
//	printf("���� >score[3]�迭 ����� ����: %d x %d = %d\n",num,num,power);
//	num = 88;
//	return 0;
//
//}
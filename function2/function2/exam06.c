//#include <stdio.h>
////�μ� ���޹��
////1.���� ���� ȣ�� call by balue ����� ���� �Լ��� ȣ���Ҷ�, �μ��� �� ��ü�� �����ϴ� ���̰�
////�� ���޵� ���� �Լ��� �Ű����� ������ ����Ǿ� ����� ����ǰ� �Լ��� �����ϴ��� ȣ���� ��������
////���� ������ ���� �ƴ��Ѵ�. �Լ� ȣ���� �� ���� ������ �Ű������� ������ Ÿ���� ��ġ�� �ݵ�� �ؾ��Ѵ�.
////call by value �� ������ ���� ��ô� 4�ÿ��� �ð��� ���� ������ �ð�����ġ�� �𸣱⶧���� �����Ұ�.
//int call_value(int num);
//int main(void)
//{
//	int num = 100, call_after = 0;
//	printf("[main()�Լ� ����]\n");
//	printf("�Լ�ȣ�� ��>num�� �� :%d \n", num);
//	printf("�Լ�ȣ�� ��>num�� �� :%p \n", &num);
//	printf("�Լ�ȣ�� ��>call�� �� :%d \n", call_after);
//	printf("�Լ�ȣ�� ��>call�� �� :%p \n", &call_after);
//	call_after = call_value(num);
//
//	printf("[main()�Լ� ����]\n");
//	printf("�Լ�ȣ�� ��>num�� �� :%d \n", num);
//	printf("�Լ�ȣ�� ��>num�� �� :%p \n", &num);//����� ���ǵ� �Լ��� �ּҰ��� ���� ������
//	//��ġ�� �ʴ´�. 
//	printf("�Լ�ȣ�� ��>call�� �� :%d \n", call_after);
//	printf("�Լ�ȣ�� ��>call�� �� :%p \n", &call_after); 
//	return 0;
//}
//int call_value(int num)//����� �����Լ� ����
//{//100 �� �Ű� ���� num ���簡 �Ǵ� ���̴� 
//	printf("[call value �Լ� ����]\n");
//	printf("����Ǿ��� num�� �� %d\n", num);
//	printf("calll_value()�� �ּҰ� :%p\n", &num);
//	printf("�Լ�����> ����Ǿ����� 100�� 10�� ���Ͽ� main�Լ��� ��ȯ��\n");
//	num += 10;
//	printf("�Լ����ೡ �������� ��ȯ\n");
//	return num;
//}
////��ȯ(���)�Լ�(recursive function , recursive call)�ǽ�
////��ȯ (���)�Լ� : �Լ� ȣ�� �� , �� �Լ������� �ڱ� �ڽ��� ��� ȣ���ϴ� ���̴�. Ż���ڵ尡 ���ٸ�
////���� ������ ������ �ȴ�. 
////���丮���� �ǽ�
//
//#include <stdio.h>
//int factorial(int num);
//int main(void)
//{
//	int input = 0, result = 0;
//	printf("�����Լ� �����̴�\n");
//	printf("����>factorial ���� ���� �Է��� ���ּ���:");
//	scanf_s("%d", &input);
//	printf("ȣ��>factorial()�Լ� ȣ���Ͽ� ���丮�� �� ���:\n");
//	result = factorial(input);//���� ���� ȣ�� input�� �μ������� ���� �Ͽ� �Ű������� ����
//	//��� �� ���
//	printf("���>%d!�� ������: %d\n\n", input, result);
//
//
//
//
//
//
//	return 0;
//}
//int factorial(int num)//����� ���� �Լ� ������
//{
//	printf("factorial�Լ������̴�.\n\n");
//	if (num == 1)//����Լ��� ���ѷ����� Ż���ϴ� �ڵ�
//	{
//		return 1;
//	}
//	else 
//	{//num!=1 �̶�� 
//		printf("����>%d! : %d * (%d -1)\n", num, num, num);
//		return(num * factorial(num - 1));//�ڱ��� �Լ��� ���丮�� �Լ��� ���������� ȣ��
//	}	
//}
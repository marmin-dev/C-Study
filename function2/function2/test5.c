//#include <stdio.h>
//#define MAX 32767 //��ũ�� ���
//int sum(int cnt);
//
//int main(void)
//{
//	int input = 0, hap = 0;
//
//	printf("main�Լ� �����̴�\n\n");
//	//����ڷκ��� ������ �Է¹޴� �ڵ�
//	re:printf("�Է�>������ ������ �������� ���ұ��?");
//	scanf_s("%d", &input);
//	getchar();
//	//����ڰ� �߸��� �Է��� �޾�����, �Է��� ó���ϴ� �ڵ�
//	//�Ѱ輳���ϱ� ������ �������� ������ ó���ϴ� �κ� 
//	if (input < 0)
//	{
//		printf("����� �Է��� �����մϴ�!:");
//		goto re;
//	}
//	else if (input > MAX)
//	{
//		printf("int �ڷ����� ��ȿ���� �Ѿ��");
//		goto re;
//	}
//	else if
//	else
//	{
//		printf("int �ڷ����� ���� ������32767������ �Է��� �����մϴ�\n");
//		goto re;
//	}
//
//	printf("ȣ�� > sum()�Լ� ȣ��\n");
//	hap = sum(input);
//
//
//
//
//
//
//
//	return 0;
//}
//int sum(int cnt)
//{
//	if (cnt == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return(cnt + sum(cnt - 1));
//	}
//	return 0;
//}
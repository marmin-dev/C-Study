////�Լ� ������Ʈ�� ���� �ǽ�
////�Լ� ������Ʈ�� �ϱ� ���� ����
////�Լ� ������Ʈ �Ŵ��� �ۼ�->�˰��� ������ ���Ե� �˰��� �ۼ�->�˰��� �°Բ� �������� �׸�
////->�Լ� ���� ���赵�� �ۼ� -> ���赵�� ������� �ҽ��ڵ带 �ۼ�
//
////�ǽ� �������� (static)������ �������� ��������
//#include <stdio.h>
//
//int static_num();
//int global_num();
////���� ���� ����
//int global_val = 0;
//
//int main(void)
//{
//	int result = 0;
//
//	printf("����(statc)������ ��ȭ�� ���캻��\n");
//	result = static_num();
//	printf("���������� num��:%d\n", result);
//	result = static_num();
//	printf("���������� num��:%d\n", result);
//	result = static_num();
//	printf("���������� num��:%d\n", result);
//	result = static_num();
//	printf("���������� num��:%d\n", result);
//	result = static_num();
//	printf("���������� num��:%d\n", result);
//	printf("\n\n----------------------------\n");
//	printf("���� ������ ��ȭ�� ���캻��\n");
//	result = global_num();
//	return 0;
//}
//int static_num()
//{//���� ����ƽ ������ �޸𸮻� ������ ������ �����ϹǷ� ���α׷� ����� �����ϰ� ������ ����Ŭ�� ������.
//	//
//	static int num=0;
//	return ++num;
//
//}
//int global_num()
//{//���������� �ʱ�ȭ�� ���� �ƴ��ϸ� �����Ⱚ�� �����Ϳ� ���Եȴ�.
//	return global_val++;
//
//}

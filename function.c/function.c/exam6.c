////�Լ��� ����
////���������� ���������� ���� �ǽ�
////�������� �������� auto���� �ڵ�����:���������� ���������� �ϴ� ������ ���������� ������ ��ġ
////���� �Լ��� ȣ��Ǹ� �ڵ����� �Ҹ�Ǵ� ������ �������� ��� �ϴ°��̴�
////���� ������ �����Ϸ��� auto Ű���带 ���̸� �ȴ�. ���ݱ��� ���������� ����ϸ鼭
////�� �ѹ��� ���並 ������ �ʾҴ�. �׷��� �ڵ����� �Ҹ��� �̷������.
////�� ������ �ٷ� �����Ϸ��� ���������� �����ϸ� �⺻������ ���������� ������ �����ֱ� ������ 
////�׷���. static variable,automatic variable
//#include <stdio.h>
////����� ���� �Լ� ����
//void func(int hap, int cnt);
//int main(void)
//{
//	auto int hap = 0;//���� ���� ���� �� �ʱ�ȭ
//	int cnt = 10;//�������� ���� �� �ʱ�ȭ
//	printf("auto int hap �� ��:%d \n", hap);
//	printf("int cnt �� ��:%d\n", cnt);
//	func(hap, cnt);
//	printf("main �Լ�����\n");
//	printf("auto int hap�� ��:%d\n", hap);
//	printf("int cnt�� �� %d", cnt);
//
//
//	return 0;
//}
//void func(int hap, int cnt)//�Ű������� �Ѿ�� �� ���� ���������� �Լ� ����� �Բ� �Ҹ�.
//{
//	printf("func �Լ�����\n");
//	printf("auto int hap�� ��:%d\n", hap);
//	printf("int cnt�� �� %d", cnt);
//	hap++;
//	cnt++;
//	return;
//}
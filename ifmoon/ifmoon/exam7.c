//#include <stdio.h>
////switch ���� ���� �ǽ�
////�б���� if ���� switch ������ ���� ���� �ִ�. switch ���� �������� if ������ ����
////switch ���� -case ��� - break (switch���� ����� ����)-default(else������ ����)
////�ɼ��̴� switch �� �뵵 : ������ ��, ����ȭ �Ǿ��ִ� ��(���� ��� 1,12��,����,����)
////�� �� �������ִ� ���� �б��Ҷ�, ����ϴ� ���� �ٶ����ϴ�.
////��� switch ���� if ������ ������ ����������,�ݴ�� ��� if ���� switch ������ ������
////�Ұ����ϴ�
////switch�� ������ ������ ����� ������ ����� ����� �����ϹǷ� �ٷ�� �ִ� ������ü��
////if���� ���� ����
////break ���� ���ٸ� ���� ���ɹ��� �� �����ϹǷ� �ݵ�� break���� �����ؾ� �Ѵ�.
//
////�� ���� ���� �ܿ��� Ư¡�� ��Ÿ���� ���α׷�
//int main(void)
//{
//	char season = ' ';
//
//	printf("��: A�Ǵ� a\n");
//	printf("����: S�Ǵ� s\n");
//	printf("����: F�Ǵ� f\n");
//	printf("�ܿ�: W�Ǵ� w\n");
//
//	printf("�����ϴ� ������ �Է����ּ���:");
//	scanf_s("%c", &season, sizeof(char));
//	//case ���� ������ �����ϴ� �߰�ȣ�� ����ǰ� �־ ó���� �ȴ�.
//	switch (season) {
//	case 'A':
//	case 'a':
//		printf("������ ����:��\n");
//		printf("������ �һ��ϴ°���\n");
//		break;
//	
//	case 'S':
//	case 's':
//		printf("������ ����:����\n");
//		printf("��Ĳ���� ������ ����\n");
//		break;
//	case 'F':
//	case 'f':
//		printf("������ ����:����\n");
//		printf("��İ� ������ ǳ���� ����\n");
//		break;
//	case 'W':
//	case 'w':
//		printf("������ ����:�ܿ�\n");
//		printf("���Ͼ� ���� ���� ��Ű�� ����\n");
//		break;
//	default: 
//		printf("������ ������ �����ϴ�\n");
//		printf("A S F W �߿� ����\n");
//		break;
//		
//}//break ���� ���ٸ� ���õ� case���� ���ɹ� �Ӹ��ƴ϶� ���� ��������� �����Ѵ�.
//
//
//	return 0;
//}
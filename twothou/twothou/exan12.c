////���ڿ� ���ó���� ���� �ǽ�
////������ (pointer)����:'������ ����Ű�°�', ������ ������ ���� �ּҸ� �������ִ�
////������� ���� 
////������ ������ ���� �Ҷ��� *�� ������ �տ� ����Ѵ� �ƽ�Ʈ��ũ�� �ٿ��� ������ �Ѵ�
////��� ���ڿ� ���� ��� ���ڿ��� �޸��� ������ ������ �����Ǿ����ٸ�
////�ݵ�� �ּҸ� ������ �ִ� ���ּҸ� ������ ������ �־ ���ڿ��� ����
////���������� �Ͽ� ó���� �ϴ°��̴�.
//
//#include <stdio.h>
//
//int main(void)
//{//������ ������ �ʱ�ȭ ������ �׻� NULL�� ����������Ѵ�
//	char* ptr = NULL;//������ �ּҸ� �������ִ� ����
//	ptr = "�ȳ��ϼ���";
//
//	printf("���� ptr �� ����Ű�� �ִ°��� ���ڿ��� %s\n", ptr);//��������
//	printf("������ �޸𸮿� ������ ���ڿ��� �ּҰ�: %p\n", ptr);//���Ǹ޸��ּҰ�
//	printf("ptr�� ���� �Ҵ�� �ּҰ���?: %p", &ptr);//ptr ���� ��ü�� �޸� �ּҰ�
//	printf("������ ���� ptr�� ����Ʈ ��: %d����Ʈ \n", sizeof(ptr));//�޸��Ҵ� ����Ʈ��
//
//	printf("-------------------------------------\n");
//	//������ ������ ������ �����̱� ������ �ּҸ� �󸶵��� �ٲپ� ������ �ִ�
//	ptr = "�ݰ�  ���ϴ�";
//	printf("���� ptr �� ����Ű�� �ִ°��� ���ڿ��� %s\n", ptr);//��������
//	printf("������ �޸𸮿� ������ ���ڿ��� �ּҰ�: %p\n", ptr);//���Ǹ޸��ּҰ�
//	printf("ptr�� ���� �Ҵ�� �ּҰ���?: %p", &ptr);
//	//ptr ������ �Ҵ�� �ּҰ��� ������ ���ڿ��� �ּҰ��� �ٸ���
//	//������ ������ ����� ���ڿ��� ���� ���鵵 �ϳ��� ���ڿ��� ������ҷ� ���⶧����
//	//������ �������� �ʴ´�
//	//������ ������ ��ڷ����� ������ 4����Ʈ ��ŭ�� �����Ϸ��� �޸𸮸� �Ҵ����ش�
//	int* iptr = NULL;
//	
//	iptr = "�����ٶ�";
//	printf("������ ���� iptr �� ���� �Ҵ�� ����Ʈ ��:%u����Ʈ\n",sizeof(iptr));
//	return 0;
//}
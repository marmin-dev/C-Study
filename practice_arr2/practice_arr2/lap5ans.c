//#include <stdio.h>
//#define LENGTH 5
//
//int main(void)
//{
//	char stack[LENGTH] = { ' ' };
//	int top = 0; //�ڵ��� ���� ����� ī�����ϴ� ����
//	char carName = 'A'; //ASCII 65
//	int select = 0;
//	printf("�ڵ��� ���� ���α׷� ���� �Ϸ�\n");
//	while (select!=3)
//	{
//		printf("\n��ư�� �����ּ���\n");
//		printf("1.�ڵ��� ����,2.�ڵ��� ����, 3. ����: ");
//		scanf_s("%d", &select);
//		switch (select)
//		{
//		case 1:
//			if (top >= LENGTH) {
//				printf("������ �Ǿ� ������ ���� �ʽ��ϴ�. �ٸ� ���� �̿����ּ���.\n");
//			}
//			else {//���� ������ �����Ѵٸ�
//				stack[top] = carName;
//				printf("%c�ڵ��� ���� �Ϸ�\n", stack[top]);
//				top++; //������ �Ϸ�Ǿ��ٸ� ��ġ����
//			}
//			break;
//		case 2:   //����
//			if (top <= 0) { //�����忡 �����Ǿ� �ִ� �ڵ����� �ϳ��� ������...�����޽��� ���
//				printf("������ �ڵ����� ����\n");
//			}
//			else {//�ڵ����� 1���̻� �����Ǿ��ٸ�..?
//				top--;
//				printf("%c�ڵ��� ���� �Ϸ�\n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//		case 3: //������
//			printf("���� �����忡 �ڵ��� %d��� �����Ǿ� ����\n", LENGTH);
//			printf("���α׷��� �����մϴ�\n");
//			break;
//		default:
//			printf("�߸� �Է��ϼ̽��ϴ�.");
//			break;
//		}
//	}
//	return 0;
//}
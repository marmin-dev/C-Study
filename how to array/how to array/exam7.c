////�ڵ��� ���� ���α׷� �ۼ��ϱ�
//
//#include <stdio.h>
//#define CAR 10
//
//int main(void)
//{
//	char yn = ' ';//���۰�  ���� ���� ����
//	int choice = 0, cnt = 0;//�ڵ��� �� ��ȣ ���ð� ī��Ʈ ����
//	int car[CAR] = { 0 };//�迭��� ���� ��� 0���� �ʱ�ȭ
//	do {
//		printf("�ڵ��� ���� �����Ͻðڽ��ϱ�?Y/N");
//		/*scanf_s("%c", &yn, sizeof(char));*/
//		// getchar();//���� ���� ù��°��� ���� ���� �Լ�
//		scanf_s(" %c",&yn,sizeof(char));
//		//���������� �տ� �� ������ �ϳ� �θ� gechar()�� ������ �Ѵ�
//		//���� ���� Ż�� �ڵ�
//		if (yn == 'N' || yn == 'n')
//		{//���� ������ ������ �ʴ´ٸ� ������ ����������.
//			break;
//		}
//		else if (yn == 'Y' || 'y')
//		{//���� �����Ѵٸ� 
//			printf("�ڵ��� �� ��ȣ : 1 2 3 4 5 6 7 8 9 10\n");
//			printf("�ڵ��� ���� ��Ȳ:");
//			//�ڵ��� ���� ��Ȳ�� ����ϴ� �ڵ�
//			for (cnt = 0; cnt < CAR; cnt++)
//			{
//				printf("%2d", car[cnt]);
//			}
//			printf("\n");
//		re_input:
//			printf("\n�ڵ��� �� ����(1~10)");
//			scanf_s("%d", &choice);
//			//�� ���Է� ���� ó�� �ڵ�
//			if (choice < 1 || choice>10)
//			{
//				printf("�� ��ȣ�� 1~10���� �Դϴ�. �߸� �Է��ϼ̽��ϴ�\n");
//				printf("�� ��ȣ�� �ٽ� �Է����ּ���\n");
//				goto re_input;
//			}
//			else
//			{
//				if (car[choice - 1] == 0)
//				{
//					car[choice - 1] = 1;
//					printf("%d �� ���� �Ϸ��\n", choice);
//				}
//				else if (car[choice] == 1)
//				{
//					printf("[NO.%d] ���� �̹� ������ �Ϸ�Ǿ����ϴ�!\n", choice);
//					printf("�𵨹�ȣ�� �ٽ� �Է����ּ���");
//				}
//			}
//		}
//		else {
//			printf("�����߻�\n");
//			printf("�ٽ� �Է����ּ���\n");
//		}
//		
//	} while (1);
//	printf("\n���� ���� ��Ȳ\n");
//	for (cnt = 0; cnt < CAR; cnt++)
//	{
//		printf("%2d", car[cnt]);//%2d��  ������ ������ ������ �ǹ��Ѵ�
//	}
//
//
//
//	return 0;
//}
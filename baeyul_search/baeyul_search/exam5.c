//#define _CRT_SECURE_NO_WARNINGS
////�迭�� Ȱ���� ���İ� Ž�� �ǽ�
////Ž���߿� ����Ž���� ���ؼ� �ǽ��� �Ѵ�
////����Ž���� �迭�� ��Ҹ� �ϳ��ϳ��� �� ������ ã�����ϴ� ������ ã�������� Ž���ϴ� ����̴�
////����Ž���� �����ϴ°��� �ܼ��� �������� �迭�� ��� ��Ҹ� ������ Ž���ϱ� ������
////����� ���� �������ٸ� �ټ� �ð��� �ɸ��ٴ� ������ �ִ�
//
////����Ž���� ����
//#include <stdio.h>
//#define LENGTH 7
//int main(void)
//{
//	int arr[LENGTH] = { -7,9,10,100,258,31,66 };
//	int search_value = 0 ;
//	char yn = " ";
//	printf("�ʱ� �迭 ��ҵ��� ��: �ʱ�迭 ��ҵ��ǰ� -7 9 10 100 258 31 66\n ");
//	while (1) {
//		printf("ã�� ���ڸ� �Է��Ͻÿ�:-7~258");
//		scanf_s("%d", &search_value);
//		printf("\n");
//		if(search_value!=-7||search_value !=9 ||search_value != 10 ||
//			search_value != 10 ||search_value != 258 || search_value != 31 ||
//				search_value != 66)
//		{printf("�ش簪�� �������� �ʽ��ϴ�");
//		printf("�ٽ� �Է����ּ���");
//		continue;
//
//		}
//		for (count = 0; count < LENGTH; count++)
//		{
//			if (arr[count] == search_value)
//			{
//				printf("���� Ž�� Ƚ�� %dȸ\n", count + 1);
//				printf("ã���� �ϴ� ���� �ε����� %d�Դϴ�.", count);
//			}
//		re_ch:
//			printf("���α׷��� �ٽ� �����ұ��??( y/n)");
//			scanf_s("%c", yn, sizeof(char));
//			if (yn == 'N' || yn == 'n')
//			{
//				printf("���α׷��� �����մϴ� \n");
//				break;
//			}
//			else if (yn == 'y' || yn == 'Y')
//			{
//				printf("���ĺ��� Ȯ�����ּ��� �߸��Է��ϼ̽��ϴ�");
//				goto re_ch;
//			}
//		}
//	}
//
//
//
//	return 0;
//}
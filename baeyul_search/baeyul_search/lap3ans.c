//#include <stdio.h>
//#include <string.h> //strlen()�� ����ϱ� ���ؼ� ����
//#define MAX_LENGTH 64
//
//int main(void)
//{
//	char str[MAX_LENGTH] = "";
//	char temp=' ';
//	int i = 0, j = 0, length = 0;
//	printf("���ڿ��� �Է��ϼ���:");
//	scanf_s("%s", str, MAX_LENGTH);
//	//���ڿ��� ���̸� ���ϴ� �ڵ�
//	length = strlen(str)-1;
//	//���������� ����Ͽ� ���ڿ��� ���Ե� ���ڵ��� ������������ �����Ѵ�.
//	//�Ѻ񱳴ܰ�� ���ڿ��� ����-1 ��ŭ�̴�.
//	for (i = 0; i < length ; i++)//�����ø��� ���η������� ���� ���
//	{//�� �ܰ躰�� ��Ƚ���� '�׸��� ����' -1�� �����ؼ� 1���پ��� ���η����� �����ϸ� �ȴ�.
//		for (j = 0; j < length - i; j++)//������ �� ���ڸ� ���Ͽ� ���� ���� �ڷκ�����.
//		{//j��° ���ڿ� j+1��° ���ڸ� ���Ͽ� �ƽ�Ű�ڵ� ���� ��ū ���ڸ� �ڷ� ������.
//			//���ڰ� 8���̸� 8x7������ �پ��⶧���� /2��ŭ ����.
//			if (str[j] > str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//	}
//	printf("������������ ���ĵ� ���ڿ� %s\n\n", str);
//	return 0;
//}
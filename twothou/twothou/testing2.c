//#include <stdio.h>
//#include <ctype.h>//is �� �����ϴ� �Լ����� ��ϵ��� �ִ� �������
//
//int main(void)
//{
//	int sub = 0;
//	printf("�ϳ��� ������ �Է��ϼ���:");
//	if (scanf_s("%d", &sub) == 0)
//	{
//		printf("���ڸ� �Է��� �����մϴ�");
//		rewind(stdin);//ǥ���Է� ���ۿ� ����� ��� ���ڸ� �����Ѵ�
//		return 0;
//	}
//	//���ڰ� �ƴ϶�� isdigit�� ���ڶ�� 0�� �ƴ� ���� ��ȯ�Ѵ�.
//	//isalpha�� ���ĺ��̸� 0�̾ƴѰ��� ��ȯ�Ѵ�
//	/*if (!isdigit(sub)==0||isalpha(sub)==0)
//	{
//		printf("���ڸ� �Է��� �����մϴ�");
//		return sub;
//	}*/
//
//	if (sub % 2 == 0 && sub % 3 == 0)
//	{
//		printf("%d�� 2�� 3�� ����Դϴ�",sub);
//	}
//	else
//		printf("%d�� 2�� 3�� ������� �ƴմϴ�",sub);
//
//	return 0;
//}
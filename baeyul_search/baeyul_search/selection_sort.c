//#include <stdio.h>
//#define LENGTH 5 //�迭�� ũ��
//
//int main(void)
//{
//	int s_list[LENGTH] = { 5,4,1,3,2 };
//	int i = 0, j = 0, temp = 0, sort = 0;
//
//	printf("�ʱ�>�迭���: 5 4 1 3 2\n");
//	printf("\nfor ������ ���� ���� ����\n");
//	//�ڽŰ� ���� �ε����� �����ϱ� ���ؼ� -1�� �Ѵ�
//	for (i = 0; i < LENGTH - 1; i++)
//	{
//		sort = i;
//		for (j = i + 1; LENGTH; j++)
//		{
//			if (s_list[j] < s_list[sort])
//				sort = j;
//		}
//	temp = s_list[i];
//	s_list[i] = s_list[sort];
//	s_list[sort] = temp;
//	}
//	printf("���>���ĵ� �������:");
//	for (i = 0; i < LENGTH; i++)
//	{
//		printf("%d", s_list[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
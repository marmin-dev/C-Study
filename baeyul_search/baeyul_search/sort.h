////�迭�� Ȱ���� ���İ� Ž�� �ǽ�-4
////���ݱ��� ��� ����, ���� ,���������� �������̿� ���ؼ� �ǽ��� �غ���
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_SIZE 10000
//#define SWAP(x,y,temp) {temp=x;x=y;y=temp;}
////�������� ����
//int original[MAX_SIZE]; //rand(0~32767)�� ��ȯ �� ���� �����͸� ������ �����迭
//int list[MAX_SIZE];		//�� ���� �˰��򿡼� ����� ������ �迭
//int n = 0;		//�������� ������ �޴� ��������
//
////����ð� ������ ���� �������� ����
//clock_t start = 0, end = 0, used_time = 0;
//
//// �Լ��� ����
//void selection_sort(int list[], int n);
//void bubble_sort(int list[], int n);
//void insert_sort(int list[], int n);
//void copyArr(void); //���� �迭�� �����ϴ� �Լ�
//void calcTime(void); //����ð��� ���� �� ����� �ϴ� �Լ�
//void copyArr(void)
//{
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		list[i] = original[i];
//	}
//	return;
//} //���� �迭�� �����ϴ� �Լ�
//void selection_sort(int list[], int n)
//{
//	int i = 0, sort = 0, temp = 0, j = 0;
//	printf("����������\n");
//	for (i = 0; i < n - 1; i++)
//	{//���ǿ��� length -1 �� �ϴ� ������ �ڽŰ� ���ϴ� �ε����� �����ϱ� ����
//		sort = i;	//�迭��� 4���� �ݺ������� ������ �ϱ� ���ؼ� 
//		for (j = i + 1; j < n; j++)
//		{//�ڽ��� �ε����� ���� �����ϱ� ���ؼ� j���� i+1�� ������.
//			if (list[j] < list[sort])//�ε�ȣ�� ������ ���� ũ�� ��������,������ ������������ ������ �ȴ�
//			{//������ ���� ���Ͽ� �񱳴���� �Ǵ� s_list[sort]���� ũ�ٸ� ��ù��° ���ο����� 4 <5 �̹Ƿ� ���̴�
//				sort = j;//�ּҰ��� �ε����� �����ϴ� �κ�
//			}
//			//���������� ���� ���� ġȯ
//		}
//		temp = list[i];
//		list[i] = list[sort];
//		list[sort] = temp;
//	}
//	return;
//}
//void bubble_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//	printf("����������\n");
//	for (i = n; i > 1; i--)
//	{//9�� ����
//		for (j = 1; j < i; j++)
//		{//i����ŭ ������ ���� 
//			//���� �� �ڵ�(
//			if (list[j - 1] > list[j])//���� ��Ұ� ���� ��Һ��� ũ�ٸ�..?
//			{
//				SWAP(list[j - 1], list[j], temp);//��ũ�� �Լ� ȣ��
//			}
//		}
//	}
//
//	return;
//}
//void insert_sort(int list[], int n)
//{
//	int i = 0, j = 0, temp = 0;
//
//	for (i = 1; i < n; i++)		//�ܰ� �������� ������ ������ Ȯ���ذ��� ����� �ϰ��ִ�
//	{
//		for (j = i; j > 0; j--)
//		{
//			if (list[j - 1] > list[j])		//�տ��ִ� ��Ұ� ��ũ�ٸ�
//			{
//				SWAP(list[j - 1], list[j], temp);
//			}
//			else {//���� ��Ұ� �۴ٸ�...���� ������ Ż���ϰ� �ܺη����� ���������� �̵���
//				break;
//			}
//		}
//	}
//	printf("����������\n");
//	return;
//}
//void calcTime(void)
//{
//	used_time = end - start;
//	printf("����Ϸ�\n");
//	printf("�ҿ�ð�: %f �� \n\n", (float)used_time / CLOCKS_PER_SEC);
//	return;
//}//����ð��� ���� �� ����� �ϴ� �Լ�

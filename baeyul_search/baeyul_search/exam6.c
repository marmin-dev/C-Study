//�迭�� Ȱ���� ���İ� Ž�� �ǽ� -6
//����Ž�� ���̳ʸ� ��ġ�� ã���� �ϴ� ������ �迭�� �߾ӿ��� ���� Ž���� �ϴ� ����̴�
//�����ƻ��� ó������ �˻��� �����ϴ� ����Ž������ �޸� �迭��ҵ��� �߾��� ���������ؼ� 
//������ ������ ã�¾˰����̴�
//����Ž���� Ž���� �ϱ����� �迭�� ��Ұ� ������ �Ǿ��־�� �Ѵٴ� ���������� �ٴ´�

#include <stdio.h>
#define LENGTH 8
int binary_search(int list[], int size, int searchvalue);
int main(void)
{
	int list[LENGTH] = { 12, 15 ,19 ,25 ,30, 45 ,60 ,99 };
	int search_value = 0, index = 0;
	do {
		printf("\n�ʱ� �迭 ��� ��  12, 15 ,19 ,25 ,30, 45 ,60 ,99");
		printf("ã���� �ϴ� ���� �Է�");
		scanf_s("%d", search_value);
		index = binary_search(list, LENGTH, search_value);

	} while (1);


}
int binary_search(int list[], int size, int searchvalue)
{
	int low = 0;//���� �ε��� ��
	int high = size - 1;//���� �ε��� ���ε� ������� -1�� ���־���Ѵ� �ε����� 0���� �����ϱ⋚��
	int md = 0, cnt = -1;
	while (low <= high) {//���Ѱ��� ���Ѱ��� �ʰ��ϸ� ����Ż��
		printf("%dȸ ����Ž�� : ");
		printf("Ž������ %d - %d\n",low,high);
		//�߾Ӱ��� ���
		md = (low + high) / 2; // ���� ���Ѱ��� ���Ͽ� 2�γ���� �Ҽ����� ������ ����
		-
	}
}

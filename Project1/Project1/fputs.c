#include <stdio.h>
#define MAX 10000
int main(void)
{
	// ���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	// fputs, fgets
	char line[MAX];
	FILE* file = fopen("c:\\text1.txt", "wb");//r w a  t�ؽ�Ʈ b���̳ε�����
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);

	//������ ������ ���� ���� ���¿��� � ���α׷��� ������ �����?
	//������ �ս� �ߤ���
	//fprintf, fscanf
	//������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����?
	//������ �ս� �߻� ���� �׷��� �׻� ������ �ݾ��ִ� ������ �鿩�ּ���
	fclose(file);


	return;
}

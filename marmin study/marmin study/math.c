#include <stdio.h>
int main(void)
{
	//�����ۼ�
	//�̸� ���� ������ Ű ���˸�
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̽ʴϱ�?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� ų�α׷��̽ʴϱ�?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̽ʴϱ�?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������ϱ�?");
	scanf_s("%s", what, sizeof(what));

	//�������� ����ϱ�
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�     :%s\n", name);
	printf("����     :%d\n", age);
	printf("������   :%2f\n", weight);
	printf("Ű       :%2lf\n", height);
	printf("����     :%s\n", what);
	return 0;
}

////��ø if���� ����
////���� ó�� ���α׷�
////a+ a-������� ǥ��
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int jumsu = 0;
//	//CHAR �迭�� grade �� �ּҴ� �� ������ ����̴�(�ϳ��� �ּҸ��������ִ�)
//	//������ �迭���� �������ʴ� �ּҰ��� ����� �ϱ� ������ ������ ����� �ش��ϴ°�
//	//��� ���� �����ΰ��� �����ϸ� c2106�̶�� �����ڵ尡 �߻��Ѵ�
//	char* p_grade = NULL;
//	printf("����� ���� ������ �Է��ϼ���:");
//	scanf_s("%d", &jumsu);
//	//��ø if ���� �̿��Ͽ� ������ �����ϴ� �ڵ�
//	//��ø if ���� ������������ ��ø if ������ �����ִ�.
//	//�ִ��� ������ �� ¥���� ��øif ������ �����°� ���ϴ�
//	if (jumsu >= 90 && jumsu <= 100)
//	{
//		if (jumsu >= 95) {
//			p_grade = "A+";
//		}
//		else {
//			p_grade = "A-";
//		}
//	}
//	else if (jumsu >= 80 && jumsu < 90)
//	{
//		if (jumsu >= 85) {
//			p_grade = "B+";
//		}
//		else {
//			p_grade = "B-";
//		}
//	}
//	else if (jumsu >= 70 && jumsu < 80)
//	{
//		if (jumsu >= 75) {
//			p_grade = "B+";
//		}
//		else {
//			p_grade = "B-";
//		}
//	}
//	else if (jumsu >= 60 && jumsu < 70)
//	{
//		if (jumsu >= 65) {
//			p_grade = "C+";
//		}
//		else {
//			p_grade = "C-";
//		}
//	}
//	else if (jumsu >= 0 && jumsu < 60)
//	{
//		p_grade = "F";
//	}
//	else 
//	{
//		printf("���� ���� ������ (0~100)�� �ƴմϴ�.\n");
//		printf("���α׷��� �����մϴ�");
//		return 0;
//	}
//	printf("�Է��� ������ %d�Դϴ�.\n", jumsu);
//	printf("�Է��� ������ %s�Դϴ�.\n", p_grade);
//
//	return 0;
//}
//#include<stdio.h>
//#define mile 1.6093
//#define lb 0.4535
//void km_to_miles(float a);
//void kg_to_lbs(float a);
//
//
//int main(void)
//{
//	int choice = 0;
//	float km = 0.0, kg = 0.0;
//	while (1)
//	{
//		printf("1.km�� mile������ ��ȯ�մϴ�\n 2.kg�� lb�� ��ȯ�մϴ�\n3.����");
//		scanf_s("%d", &choice);
//		if (choice == 1)
//		{
//			printf("�� km�� mile ������ ��ȯ �Ͻðڽ��ϱ�?");
//			scanf_s("%f", &km);
//			km_to_miles(km);
//		}
//		else if(choice == 2)
//		{
//			printf("�� kg�� lb ������ ��ȯ �Ͻðڽ��ϱ�?");
//			scanf_s("%f", &kg);
//			kg_to_lbs(kg);
//		}
//		else if (choice == 3)
//		{
//			printf("���α׷��� �����մϴ�\n");
//			return 0;
//		}
//		else
//		{
//			printf("�߸��� �Է°��Դϴ� 1~3�߿� �����Ͻÿ�\n");
//		}
//
//	}
//
//	return 0;
//}
//void km_to_miles(float a)
//{
//	float dis = 0.0;
//	dis = a / mile;
//	printf("�Է��Ͻ� %.2fkm�� %.2fmile �Դϴ�\n",a,dis);
//}
//void kg_to_lbs(float a)
//{
//	float wei = 0.0;
//	wei = a / lb;
//	printf("�Է��Ͻ� %.2fkg�� %.2flb �Դϴ�\n",a,wei);
//	return;
//}
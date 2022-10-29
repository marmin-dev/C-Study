#include <stdio.h>
int grade[5][5];
int WriteRecord();
int WriteSumrecord();
void ShowAllRecord();
int main(void)
{
	WriteRecord();
	WriteSumrecord();
	ShowAllRecord();

	return 0;
}
int WriteRecord()
{
	int i = 0, j = 0;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 학생의 성적 입력\n", i+1);
		for (j = 0; j < 4; j++)
		{
			printf("%d번째 과목:", j+1);
			scanf_s("%d", &grade[i][j]);
			sum += grade[j][i];
		}
		grade[i][4] = sum;
	}
	
	return 0;
}
int WriteSumrecord()
{
	int i = 0, j = 0;
	int sum = 0;
	for (i = 0; i < 4; i++);
	{
		
		for (j = 0; j < 4; j++);
		{
			sum += grade[j][i];
			grade[4][i] = sum;
		}
		grade[4][4] += sum;
	}
	return 0;
}
void ShowAllRecord()
{
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d", grade[i][j]);
		}
		printf("\n");
	}
}
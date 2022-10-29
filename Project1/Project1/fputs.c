#include <stdio.h>
#define MAX 10000
int main(void)
{
	// 파일 입출력
	//파일에 어떤 데이터를 저장
	//파일에 저장된 데이터를 불러오기

	// fputs, fgets
	char line[MAX];
	FILE* file = fopen("c:\\text1.txt", "wb");//r w a  t텍스트 b바이널데이터
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요\n", file);

	//파일을 열고나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	//데이터 손실 발ㅅㅇ
	//fprintf, fscanf
	//파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	//데이터 손실 발생 가능 그래서 항상 파일을 닫아주는 습관을 들여주세요
	fclose(file);


	return;
}

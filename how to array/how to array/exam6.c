////배열에 대한 실습-6
////배열의 요소의 개수를 구하는 방법(공식)
////배열의 요소 개수를 구할땐 = sizeof(배열명)/sizeof(배열명[0])
////배열의 요소 개수를 구할땐 = sizeof(배열명)/sizeof(배열의 데이터 타입)
////배열의 요소의 개수를 구하는 실습
////sizeof 함수는 매개변수의 바이트 수를 리턴
//#include <stdio.h>
//#define Length 10//매크로 상수 선언
//int main(void)
//{//아래는 배열의 방의 개수르 지정하지 않아도 컴파일러가 알아서 배열요소의 개수르 보고 스택메모리에 40바이트를 각각
//	//연속적으로 할당하고 초기화된 값으로 저장이 되어진다
//	int arr[Length] = {0};
//	int cnt = 0;//배열의 개수를 저장할 변수
//	int i=0 ,j= 0;
//	int num = 0;
//	printf("배열의 요소의 값을 입력하세요-1을 입력하면 끝\n");
//	//무한 루프를 돌면서 사용자로 부터 원하는 배열의 값을 입력받는 코드
//	while (1)
//	{
//		
//		printf("arr[%d]방의 값 입력", j);
//		scanf_s("%d", &num);
//		if(num==-1)
//		{
//			break;
//		}
//		arr[j] = num;
//		j++;
//	}
//	/*for (i = 0; i < Length; i++)
//	{
//		printf("arr[%d]방의 값 입력", i);
//		scanf_s("%d", &arr[i]);
//	}*/
//	//printf("arr[]={10,20,30,40,50,60,70,80,90,100]\n");
//	//cnt = sizeof(arr);
//	//printf("arr의 바이트수:%d\n", sizeof(arr));
//	//printf("arr의 바이트수:%d\n", sizeof(arr[0]));
//	//printf("arr의 바이트수:%d\n", sizeof(int));
//	////배열 요소의 개수를 구하기
//	cnt = sizeof(arr) / sizeof(arr[0]);
//	
//	printf("arr[]배열 요소의 개수는 %d\n", cnt);
//	cnt = sizeof(arr) / sizeof(arr[0]);
//	printf("arr[]배열 요소의 개수는 %d\n", cnt);
//	for (i = 0; i < cnt; i++)
//	{
//		printf("arr[%d]의 값 %2d\n", i, arr[i]);
//	}
//	printf("\n");
//		return 0;
//
//}//결론 배열의 단점이 정적이다 라는 것 때문에 배열의 방의 개수를 미리ㅣ 지정해두어야 한다는것.
////그런 이유로 계속 입력시 배열의 크기보다 많게 입력을 하면 저장할 방이 없고 적게 입력하면 메모리 낭비를 초래한다.
////call by reference
////2. 참조에 의한 호출 call by reference 참조에 의한 호출방식은 함수를 호출할때 인수값으로 값을 
////넘기는 것이 아니라 메모리 주소값을 넘긴다.주소값을 넘기기에 호출한곳에 영향을 끼칠수밖에 없다
////함수 호출의 인수의 주소값과 매개변수의 주소값이 동일하기 때문에 함수에서 어떠한 연산이나 수행을 하게되면 
////호출한곳에 영향을 끼친다.
////c언어에서는 주소를 참조하여 함수를 호출하는 방식이 존재하지 않기 때문에 주소를 저장하는 포인터변수와
////인수값 앞에 &를 붙여서 호출하여야한다.
////포인터 변수란 자신만의 메모리 공간을 4바이트로 만들고 그공간에는 오로지 값이아니라 주소값만 
////저장할수 있는 변수이다.
//#include <stdio.h>
////함수 선언(원형)
//int call_reference(int* num);
//
//
//int main(void)
//{
//	int num = 100, call_after = 0;
//	printf("main 함수 영역\n");
//	printf("호출전 함수 호출하기 전의 num의값:%d\n", num);
//	printf("호출전 함수 호출하기 전의 num의값:%d\n", &num);
//	printf("설명>함수 호출:인수와 주소 참조 연산자를 &와 함께 전달\n");
//
//	call_after = call_reference(&num);
//	printf("메인함수영역으로 돌아옴");
//	printf("호출후 함수 호출하기 후의 num의값:%d\n", num);
//	printf("호출후 함수 호출하기 후의 num의값:%d\n", &num);
//	printf("호출후 > 함수 호출한후의 call_after 의값:%d\n", call_after);
//
//
//
//
//	return 0;
//}
//int call_reference(int* num)//main 에서 주소값이 매개변수로 넘어오기때문에 포인터변수로 
////매개변수로 선언하여 주소값을 저장한다 주소가 공우가 되는 것.
//{
//	printf("call_reference()영역\n");
//	printf("call refernce()영역의 num 주소값: %p\n", num);
//	printf("함수수행>전달받은 주소에 저장된 값인 100+10을 반환함\n");
//	*num += 10;
//	
//	return *num;//간접참조를 통한 실제 값을 main에게 반환하고 있다.
//}
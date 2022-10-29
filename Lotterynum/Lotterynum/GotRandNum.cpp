#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		arr[i] = (rand() % 45) + 1;
	}
	printf("로또 번호 추첨 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d " , arr[i]);
	}



}
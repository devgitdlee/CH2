#include <stdio.h>

int main(void) {
	printf("%d\n", 12);  //10진수
	printf("%d\n", 014); //8진수
	printf("%d\n", 0xc); //16진수
	
	printf("\n");

	printf("%d\n", 12);  //10진수
	printf("8진수 출력:%o\n", 12); //8진수 출력
	printf("16진수 출력:%x\n", 12); //16진수 출력

	return 0;
}
#include <stdio.h>

int main(void) {
	printf("%d\n", 12);  //10����
	printf("%d\n", 014); //8����
	printf("%d\n", 0xc); //16����
	
	printf("\n");

	printf("%d\n", 12);  //10����
	printf("8���� ���:%o\n", 12); //8���� ���
	printf("16���� ���:%x\n", 12); //16���� ���

	return 0;
}
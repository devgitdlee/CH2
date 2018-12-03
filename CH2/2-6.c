#include <stdio.h>

int main(void) {
	printf("%.1lf\n", 1e6); //지수 형태의 실수를 소수점 형태로 출력 e6=10^6
	printf("%.7lf\n", 3.14e-5); // 소수점 이하 7짜리까지 출력 e-5=10^-5

	return 0;
}
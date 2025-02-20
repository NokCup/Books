#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float main() {
	float  a, b;

	// scanf() : 입력함수
	// scanf() 기능이 좋은 것이 '%f%f' 로 붙여 써도, 입력하는 과정에서 띄어쓰기를 구분해서 입력받는다.
	scanf("%f%f", &a, &b);	// &(앰퍼센드) : 포인터			

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f\n", hap);
	printf("%f\n", cha);
	printf("%f\n", gop);
	printf("%f\n", mok);



}
// for문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}*/

	// 위 while문과 아래 for문은 동일하다.

	for (int i = 1; i <= 10; i++) 
		printf("%d\n", i);
	
	int g = 2;
	

	// for문에서 조건이나 변수 선언, 증감 설정을 안해도 된다.
	// 조건을 생략하면 잠정적인 true 로 인식된다. 
	int j;
	scanf("%d", &j);

	for (; ;j++) {
		printf("%d\n", j);
	}
	


	
	


}
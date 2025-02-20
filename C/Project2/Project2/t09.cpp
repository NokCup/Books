#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

//  좌변에서 지수가 1 2 3 ... 으로 1씩 증가 / 우변은 x2 씩 증가
// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// 2^3 = 8

int main() {
	
	
	// n = 지수의 최댓값
	int n;
	scanf("%d", &n);

	/*
	int i = 0, t = 1;

	while (i <= n) {
		printf("%d^%d = %d\n", 2, i, t);
		i++;
		t *= 2;
	}
	*/

	//위 while문을 for문으로 바꾸면
	for (int i = 0, t = 1; i <= n; i++, t *= 2) {
		printf("2^%d = %d\n", i, t);
	}
	


}
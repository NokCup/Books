#include <stdio.h>
int main() {
	int a = 2;
	
	// 파이썬, C 공통 문법
	a += 1; 
	printf("%d\n", a);

	a++;		// C에서만 가능
	printf("%d\n", a);


	// ++ or -- 전치 후치 
	int b = ++a;			//a 먼저 증가시키고 b에 값을 대입

	int c = a++;			//a 값을 c에 먼저 대입하고 a 증가

}
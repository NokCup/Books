#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


// break : 반복문을 벗어난다.
// continue : 반복문 내 코드들을 건너뛰고 처음으로 돌아옴
// 중첩 for문
int main() {
	int a;

	for (int i = 0; ; i++) {
		scanf("%d", &a);

		if (a == 17) break;
		printf("%d", a);

	}
}
//while, do-while, 

#include <stdio.h>
int main() {
	int i = 1;

	while (i <= 10) { // 괄호 안 조건을 만족할 때만 반복
		printf("%d\n", i);
		i++;
	}

	/* while문은 조건에 부합하면 실행하지 않지만, do-while문은 우선 한 번은 실행한 이후 조건을 보고 반복여부를 결정한다.
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10); */

	
}


// 포인터(pointer) : 변수의 주소를 저장하는 변수
/*포인터는 변수를 가리킨다*/

#include <stdio.h>

int main() {
	int a = 20;

	// 포인터 선언
	int *ptr_a;		// 가리킬 변수의 자료형 + '*' + '포인터 이름'

	ptr_a = &a;		// a의 주소(&)를 포인터 변수에 넣는다.
	printf("%d\n", ptr_a);

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("prt_a에 저장된 값 : %d\n", ptr_a);	// (= &a)

	//여기에서 *ptr_a는 선언할 때 *ptr_a 와 다르다.
	// 선언 *ptr_a 는 이 변수가 포인터 변수라는 것은 컴퓨터에게 가르쳐 준것이다.
	// 이 코드에서 *ptr_a 는 ptr_a가 가리키는 변수 자체를 말한다. (= a)
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
}
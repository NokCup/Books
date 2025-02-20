// C에서 논리연산자 기호는 && || ! 이다.
// 파이썬에서 논리연산자 기호는 and or not 이다. (비트연산자는 & | )

// C에서 조건문은 if (조건) {내용 };  / else if (조건) {};  / else { }; 


// 본 코드는 (중첩)if문을 잘 활용하기 위한 예시다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);



	if (a > b) {		// a > b > c  ,  c > a > b , a > c > b 	
		if (a > c) {		// a가 최댓값이 되는 조건은 a가 c보다 커야 한다는 것
			printf("%d는 최댓값", a);
		}
		else {
			printf("%d는 최댓값", c);
		}
	}

	// 조건문 내용이 한 줄(세미콜론 1개) 일 경우 중괄호 생략 가능, if 와 내용을 붙일 수도 있다.
	else {			// b > a > c, b > c > a , c > b > a
		if (b > c)printf("%d는 최댓값", b);
		else printf("%d는 최댓값", c);		
	} 
}
//문자열
//C언어에서는 문자형 배열을 선언해서 문자열을 만들어야 한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[] = "Hello, World!";

	printf("%s\n", arr);		

	//배열의 크기 (문자열은 총 13개인데 어째서 14개 나오는가?)
	printf("배열 크기 : %d\n", sizeof(arr) / sizeof(char));
	printf("배열 크기 : %d\n", sizeof(arr));


	// 문자열에 NULL문자가 숨어있었다.
	char a[] = "abc";

	//위와 아래 코드는 동일한 코드다.
	char b[] = { 'a', 'b', 'c', '\0' };





	char s[100];

	scanf("%s", s);		//문자열은 '&' 를 붙이지 않는다.
	printf("%s\n", s);
}
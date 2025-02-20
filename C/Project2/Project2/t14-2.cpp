//문자열에 관한 다양한 함수를 배워본다.
//C++에는 string 이라는 새로운 자료형이 있기 때문에 웬만하면 char가 아닌 string을 씀

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	//strlen()
	char str[] = "Hello";
	
	//문자열 길이 구하기 1: sizeof(str) / sizeof(char) - 1 (-1 은 널문자를 뺀 것)
	// 2 : strlen() <string.h> 에서 가져오기
	int len;
	len = strlen(str);
	printf("문자열 길이 : %d\n", len);




	//strcpy(복사받을 것, 복사할 것)
	char str1[] = "HelloWorld!";
	char str2[100];
	
	strcpy(str2, str1);
	printf("str2 : %s\n", str2);




	//strcat(덧붙일 변수, "문자열") : 문자열을 붙일 수 있다.
	char str3[100] = "Hello ";
	strcat(str3, "World!");
	printf("%s\n", str3);
	 



	//strcmp : 문자열을 비교함  / 첫번째 문자열이 두번재 문자열보다 사전 순으로
	// 앞에 있다면 -1, 역은 1, 같으면 0
	char str4[] = "sample";
	char str5[] = "simple";

	int cmp = strcmp(str4, str5);

	printf("%d\n", cmp);
}




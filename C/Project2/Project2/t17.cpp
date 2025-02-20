//배열 포인터

#include <stdio.h>
int main() {
	int arr[3] = { 1, 2 ,3 };

	int(*ptr_arr)[3];		//길이가 3인 int형 배열을 가리키는 포인터 선언
	ptr_arr = &arr;		//12바이트의 배열의 주소
	

	//*ptr_arr[i]은 arr 배열의 i요소를 의미
	for (int i = 0; i < 3; i++) {
		printf("(*ptr_arr)[i] = %d\n", (*ptr_arr)[i]);
	}

}
// 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
	
	//5칸의 배열을 만들고 각 칸에 순서대로 3, 1, 4, 1, 5를 넣는다.

	int a[5] = { 3, 1, 4, 1, 5 };
	for (int i = 0; i <= 4; i++) 
		printf("%d\n", a[i]);

	// int = 4byte, 배열 안 숫자가 10개, 따라서 총 40byte
	int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	// 조건으로 sizeof() 를 많이 쓴다.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%d ", arr[i]);

}
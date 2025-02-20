#include <stdio.h>

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");


	//arr = *arr[0]
	for (int i = 0; i < 10; i++)
		printf("%d ", *(arr + i));		
	printf("\n");



	//ex) int a = 10;
	//	  int *ptr = &a;
	// 
	//ex2) int *ptr = arr		: 배열에서 변수는 출력 시 주소다.
	//     ptr == arr
	for (int* ptr = arr; ptr < arr + 10; ptr++)
		printf("%d ", *ptr);
}

//결론 : arr[i] = *(arr +i) = *(ptr + i) 
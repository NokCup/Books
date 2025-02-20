
// arr[i] == *(arr +i) == *(ptr + i) == *(i + ptr) == i[ptr](이건쓰지말기) == ptr[i]

/*
	1. arr == &arr[0] (arr = ptr)
	2. ptr == &ptr[0]
	3.*ptr == *(&ptr[0]) = ptr[0]
	4. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값

	*/


#include <stdio.h> 
int main() {
	int arr[3] = { 1, 2, 3 };

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1);

	
	// &arr 은 12바이트의 배열의 주소로 보아야 한다.
	printf("&arr = %d\n", &arr);
	printf("&arr + 1 = %d\n", &arr + 1);


}







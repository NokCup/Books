//배열과 포인터의 관계 (배열포인트 아님)
//배열에서 변수는 곧 주소다.

#include <stdio.h> 
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };

	//실제로 4x8 바이트가 생성되며 수가 커질수록 4byte 다음 주소로 할당됨
	for (int i = 0; i < 10; i++)
		printf("&arr[%d] = %d\n", i, &arr[i]);

	printf("arr의 주소 = %d\n\n", arr); //arr = &arr[0] -> arr + 1 = &arr[0] + 1 

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}

	
}



/*
   a | 00000000 00000000 00000000 00001010  -> [0xa284] 

	42584654

ptr_ = 0xa284 
ptr + 1 = 0xa288 */
/*
	1. arr == &arr[0]		<=>		         (arr = ptr)
	2.*arr == arr[0]		<=>				ptr == &ptr[0])
	3. arr + 1 == arr에 sizeof(*arr)을 더한 값							    
	

*/

#include <stdio.h>

int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	// 1. ptr[i] == arr[i] 성립하는가?
	// 2. ptr[i][j] == arr[i][j] 성립하는가?

	int(*ptr)[3] = arr;	//(arr = &arr[0])

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", ptr[i][j]);	//arr = ptr
		printf("\n");
	}
	

	/*
		1. ptr[i] = arr[i] 라면 -> ptr[i] = ptr + i -> 4 5 6 
				1 2 3
				4 5 6 -> arr + i

				따라서 ptr[i] = arr[i]
	*/

}
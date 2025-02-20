#include <stdio.h>

int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	
	//2차원배열 크기비교
	printf("%d\n", sizeof(arr));		//24
	printf("%d\n", sizeof(arr[0]));		//12
	printf("%d\n", sizeof(arr[0][0]));	//4
	//&arr == &arr[0] == &arr[0][0]
	 
}
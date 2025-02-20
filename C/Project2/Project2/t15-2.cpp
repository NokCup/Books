#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr;
	ptr = &a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);

	ptr = &b;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);

	int c = 10;
	int* ptr_c;
	ptr_c = &c;

	printf("c의 값 : %d\n", c);
	
	*ptr_c = 20;
	printf("c의 값 : %d\n", c);






	//실무에서 쓰이는 것 : 포인터를 가리키는 포인터
	int k = 10;
	int* ptr_k;
	ptr_k = &k;
	//포인터를 가리키는 포인터
	int** ptr_ptr_k;
	ptr_ptr_k = &ptr_k;
	
	printf("k = %d\n", k);
	printf("&k = %d\n", &k);

	printf("ptr_k = %d\n", ptr_k);			
	printf("&ptr_k = %d\n", &ptr_k);		
	
	printf("ptr_ptr_k = %d\n", ptr_ptr_k);	

	printf("*ptr_ptr_k = %d\n", *ptr_ptr_k);
	printf("**ptr_ptr_k = %d\n", **ptr_ptr_k);

}
### 1 : 3.141592를 소수점 둘째 자리까지 출력

```cpp
#include <stdio.h>
int main() {
	double a = 3.141592;
	printf("%.2lf", a);
}
```
<Br>

### 2 : 자료형 크기

```c++
기본 자료형(암기)
	=========================================
	문자형			: char			1Byte
	부호없는 문자형   : unsigned char   1Byte
	=========================================
	정수형			: short			1Byte
					: int		    4Byte
					: long			4Byte
		       	    :  long long       8Byte
	==========================================
	부호없는 정수형   : unsigned short  2Byte
					: unsigned int    4Byte
					: unsigned long	4Byte
	==========================================
	실수				: float			4Byte
					: double			8Byte
					: long double		8Byte
	==========================================
```

<BR>

### 3 :  int k = ++a 와 int k = a++의 차이

- 전자 : a를 1 증가시키고 k에 대입

- 후자 : a를 k에 대입하고 1 증가

<br>


### 4 : switch를 이용해 코드 작성
(1을 누르면 새게임, 2를 누르면 불러오기, 3을 누르면 설정, 4를 누르면 종료)

```c++
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("새게임");
		break;
	case 2:
		printf("불러오기");
		break;
	case 3: 
		printf("설정");
		break;
	case 4:
		printf("종료");
		break;
	default:
		printf("잘못입력했습니다.");
		break;
	}
}
```

<br>

### 5 : int형 5개 배열을 만들기 (각 요소는 3 1 4 1 5, 순서대로 출력, 반대로 출력, 최대 최소 구하기)


1. 순서대로 출력

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5] = { 3, 1, 4, 1, 5 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%d ", arr[i]);
}
```

<br>

2. 반대로 출력

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[5] = { 3, 1, 4, 1, 5 };
	for (int i = 5 - 1; i >= 0; i--)
		printf("%d ", arr[i]);
}
```

<br>

3. 최대/최소 구하기
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int arr[100];		//미리 많이 할당해두기

	printf("몇 개 입력?(최대 100개)\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);


	// 최댓값 구하기
	int max = arr[0];

	for (int i = 0; i < n - 1; i++)
		if (max < arr[i + 1])
			max = arr[i + 1];

	printf("%d", max);
}
```

<Br>

### 6 : while 과 do-while의 차이/코드

- `while` 은 괄호 안 조건 만족할때만 반복한다.
```cpp
int i = 1
while(i = 10)
    printf("HI\n");
    i++;
```

<br>

- `do-while` 은 일단 한번 괄호 안 코드를 수행한 후  조건을 확인해서 반복할지를 결정

```cpp
int i = 11
do {
    printf("Hi\n");
    i++;
} while (i <= 10);
```


<br>

### 7 : 배열을 이용해 문자열을 만들 때 배열의 크기와 문자열의 개수가 맞지 않는 이유

- 배열을 이용해 문자열을 만들 경우
NULL 문자가 배열에 포함된다. <br>
따라서 배열의 크기가 문자열의 개수보다 1 크다.

```cpp
#include <stdio.h>
#include <string.h>

int main() {
	char arr[] = "Hello World!"; //문자열 개수 : 12개
	int len = strlen(arr);

	printf("%d", sizeof(arr));	//13
	printf("%d", len)	//12
}
```

<br><br>

### 8 : 문자열 "Hello World!" 을 배열로 출력
```cpp
#include <stdio.h> 
int main() {
	char arr[] = "Hello World!"; 
	
	printf("%s", arr);
}
```

<br><Br>

### 9 : 2차원 배열 만들어서 순서대로 출력하기
```cpp
#include <stdio.h> 
int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", arr[i][j]);
	}
}
```

<br><Br>

### 10 : 

<br><Br>

### 11 : 포인터란? / (int a = 10) 를 가리키는 포인터 변수를 만들어서 a의 값과 a의 주소를 각각 2가지 방식으로 출력 / 포인터를 이용해 (int a = 10) 의 값을 20으로 변경
```cpp
#include <stdio.h>
int main() {
	int a = 10;
	int* ptr = &a;

	// a의 값
	printf("%d ", a);
	printf("%d\n", *ptr);
	
	// a의 주소값
	printf("%d ", &a);
	printf("%d\n", ptr);
	

	// a 값 변경
	*ptr = 20;
	printf("%d", a);
}
```

<Br><br>

### 12 : 

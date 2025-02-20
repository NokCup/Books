//C 언어 시작


//2.18 기본 C 언어 문법

#include <stdio.h>			// #include : 포함해라	    <stdio.h> : 표준입출력 헤더파일, 이 문서 내부에 앞으로 우리가 사용하게 될 기본적인 함수들의 정의가 담겨있음 ()

int main() {					// 파이썬과 다르게 printf 할때마다 줄바꿈이 안됨
	printf("Hello, World!\n");
	printf("동해물과 백두산이");
	printf("마르고");
	printf("닳도록\n");







	// %d : 정수 출력
	printf("%d + %d = %d\n", 1, 2, 3);	

	// %f : 실수 출력(소수점 아래 여섯자리)
	printf("%f\n", 3.141);
	// %.2f : 반올림해서 소수점 둘째자리 까지 출력
	printf("%.2f\n", 3.141592);

	// %c : 문자 출력 (알파벳, 숫자, 기호, \n)
	printf("%c %c %c\n", '97', 'b', 'c');			// 97 은 아스키코드로 문자 a와 일치한다. %c 를 사용했으니 문자로 나온다. 
	
	// %s : 문자열 출력
	printf("%s\n", "안녕하세요!");









	//int : 정수를 담을 때 쓰는 자료형(32비트(4바이트))

	int a;			// a 라는 변수를 선언함. 이 변수는 32비트의 정수형이다.
	a = 3;			// a에 3이라는 값을 할당함
	printf("%d\n", a);	// a 라는 변수를 참조한다.


	int b = 5;		// 선언 및 초기화
	printf("%d\n", a);
	
	return 0;


	
	/*기본 자료형(암기)
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
	*/ 

	/* int a = 4byte = 32비트 = 2 ^ 32 데이터 = [-2 ^ 31 ~2 ^ 31 - 1]

	(*int a = signed int a)



		부호 없는 정수형 :

	unsigned int a = 4byte = 2 ^ 32데이터 = [0 ~2 ^ 32 - 1]



		바이트 = 컴퓨터에서 데이터를 처리하는 가장 작은 단위

		void : 리턴값이 없는 함수의 자료형 */





}



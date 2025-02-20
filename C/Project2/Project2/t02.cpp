#include <stdio.h>
int main() {
	
	//sizeof() : 바이트 크기를 알 수 있다. (자료형, 변수)
	printf("%d %d %d %d \n", sizeof(int), sizeof(float), sizeof(char), sizeof(double));

	int a; float b; char c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));


	


	//형 변환 
	int math = 90; int koreans = 95; int english = 96;
	int sum = math + koreans + english;
	double avg = sum / 3;

	printf("평균은 %f 점 입니다.\n", avg);		// 계산기 = 93.666667 .   컴파일 = 93.000000 


	// 형 변환시에 자료형을 조심해야 한다.
	// 정수 / 정수 = 정수
	// 실수 / 실수 = 실수
	// 실수 / 정수 = 실수 
	// 정수 / 실수 = XXXXX

	double avg2 = (double)sum / 3;
	printf("평균은 %f 점 입니다.\n", avg2);
	
}
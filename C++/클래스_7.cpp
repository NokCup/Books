#include <iostream>
using namespace std;


// odd() 실행시간 <  호출 오버헤드 [안좋은 예]
int odd(int x) {
	return (x % 2);
}
int main() {
	int sum = 0;

	for (int i = 0; i <= 10000; i++) {
		if (odd(i)) sum += i;
	}
	cout << sum << endl;
}

// inline 함수 사용하면 프로그램 실행 시간이 빨라짐
// 단점은 인라인 함수 코드의 삽입으로 인해 코드 전체 길이가 길어진다
// 따라서 짧은 코드의 함수를 인라인으로 사용하는 것이 좋음
#include <iostream> 
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int x, int y);
};

Point::Point() : Point(0, 0) {}	//위임생성자

Point::Point(int a, int b) : x(a), y(b) {}	//타겟생성자



// 클래스에서 생성자를 선언하지 않으면 기본 생성자 Circle() 을 컴파일러가
// 자동으로 만들어줌

// 만일 클래스에 하나 이상의 생성자를 선언할 시 기본생성자가 만들어지지 않음


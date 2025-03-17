#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;		//객체 타입(클래스이름) 객체;
	donut.radius = 3;	//객체이름.맴버변수
	double area = donut.getArea();	//객체이름.멤버함수
	cout << "donut의 면적은 " << area << "입니다" << endl;

	Circle pizza;
	pizza.radius = 5;
	double area2 = pizza.getArea();
	cout << "Pizza의 면적은" << area2 << "입니다" << endl;
}
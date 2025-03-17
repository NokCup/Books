#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		//생성자(매개변수 x)
	Circle(int a);	//생성자(매개변수 O, 리턴X)
	double getArea();
};
/*

// donut
Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

//pizza
Circle::Circle(int a) {
	radius = a;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

*/

//타겟생성자
Circle::Circle(int a) {
	radius = a;
	cout << "반지름은 " << radius << " 입니다" << endl;
}

Circle :: Circle() : Circle(1) {}	//위임생성자

double Circle::getArea() {
	return radius * radius * 3.14;
}



int main() {
	Circle donut;
	cout << "도넛의 넓이는 " << donut.getArea() << endl;

	Circle pizza(30);
	cout << "피자의 넓이는 " << pizza.getArea() << endl;

	
}
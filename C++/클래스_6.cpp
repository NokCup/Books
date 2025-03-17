#include <iostream> 
using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);

	~Circle();	//소멸자 생성 (선언하지 않아도 생성되는 기본소멸자)
	double getArea();

};

Circle::Circle() : Circle(1) {};// 위임생성자

Circle::Circle(int a) {			//타겟생성자
	radius = a;
	cout << "반지름은 " << radius << " 입니다" << endl;
}

//지역객체의 소멸 -> 전역객체의 소멸
Circle::~Circle() {		//객체 생성과 반대방향으로 소멸
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

Circle globalDonut(1000);
Circle globalPizza(2000);


void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
	
	return 0;
}

//지역객체, 전역객체 생성 및 소멸 과정
/*
globalDonut 생성	[프로그램 로딩]
globalPizza 생성	

mainDonut	생성	[main() 시작]
mainPizza	생성

fDonut		생성	[f실행]
fPizza		생성	

fPizza		소멸	[f종료]
fDonut		소멸

mainPizza	소멸	[main 종료]
mainDonut	소멸

globalPizza	소멸	[프로그램 종료]
globalDonut	소멸
*/
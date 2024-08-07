#include<iostream>

#pragma region 다형성
/*
▶ 다형성
- 객체의 속성이나 기능이 상황에 따라 여러가지 형태를 가질수 있는 성질

VirtualFunction
※ 상속관계에 있는 클래스에서 부모클래스의 함수를 자식 클래스에서 재정의(오버라이딩)
하고 부모클래스의 포인터나 참조를 통해 자식클래스의 메서드 호출


*/
#pragma endregion
#include"Bike.h"
#include"Car.h"

int main() 
{
	Vehicle* v;
	//부모의 포인터로 자식클래스 를 창조 (동적바인딩)
	v = new Car("현기차");
	v->Move();
	delete v;

	v = new Bike("오토바이");

	v->Move();
	delete v;
}
#include "Bike.h"

Bike::Bike(const std::string& n)
	:Vehicle(n)
{
	std::cout << "자식(Bike)생성자 호출 " << std::endl;
}

Bike::~Bike()
{
	std::cout << "자식(Bike)소멸자 호출 " << std::endl;
}

void Bike::Move() const
{
	std::cout << name << "자식(Bike)클래스의 오토바이 함수 호출" << std::endl;
}

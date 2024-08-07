#pragma once
#include<iostream>
//부모클래스
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	//가상함수 virtual 을 쓰면 소멸자에 붙여줘야함
	//이유는 다형성이라는것을 활용할때 객체가 올바르게 정확하게 해제가 될수있도록 보장을해줌
	//안쓰면 기본클래스의 소멸자만호출되고 자식클래스의 소멸자가 호출되지않음
	//만약 자식클래스에 동적으로 할당한게 있다면 해제해야함
	virtual ~Vehicle();

	virtual void Move()const = 0;
	//virtual void Move()const =0; //순수 가상함수

	



};


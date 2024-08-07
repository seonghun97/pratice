#pragma once
#include<iostream>
//virtual void Move()const = 0;
// 순수 가상함수 : 선언만하고 구현하지않음
// 순수가상함수를 한개 이상을 포함하고 있는클래스를 추상클래스라고 불린다.
// 다형성이 연관이있다
// 특정함수의 구현을 강제화시킴

//추상클래스 : 인스턴스화 시킬수없다
// 다른 클래스들이 상속받아야하는 기본 인터페이스나 기본동작을 정의하는 사용
// 다형성, 코드 재사용성...
// 특정 함수들이 자식클래스에 의해 구현되도록 강제한다

//추상클래스
class Unit0806 
{
protected:
	std::string name;
	int health = 0;
public:
	Unit0806(const std::string& n, const int h);
	virtual~Unit0806();

public:
	//가상함수
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;




};


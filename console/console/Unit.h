#pragma once

#include<iostream>
//���� �θ� Ŭ����
class Unit
{
protected:
	std::string name;
	int health;


public:
	Unit();
	Unit(const std::string& n, const int h);
	~Unit();

public:
	void TakeDamge(const int damage);
};




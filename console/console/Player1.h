#pragma once
#include"Unit0806.h"

class Player1 : public Unit0806
{
public:
	Player1(const std::string& n, const int h);
	~Player1();
		
	void Attack() const override;
	void TakeDamage(int damage) override;

};


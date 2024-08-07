#include "Player1.h"

Player1::Player1(const std::string& n, const int h)
	:Unit0806(n,h)
{

}

Player1::~Player1()
{
}

void Player1::Attack() const
{
	std::cout << name  << "����!" << std::endl;
}

void Player1::TakeDamage(int damage)
{
	health -= damage; 
	std::cout <<"���� ���� " << damage << std::endl;
	std::cout <<"���� ü�� " << health << std::endl;
}

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
	std::cout << name  << "공격!" << std::endl;
}

void Player1::TakeDamage(int damage)
{
	health -= damage; 
	std::cout <<"받은 공격 " << damage << std::endl;
	std::cout <<"남은 체력 " << health << std::endl;
}

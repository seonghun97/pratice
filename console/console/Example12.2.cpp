#include"Player1.h"

int main()
{
	Player1* p = new Player1("홍", 200);
	p->Attack();
	p->TakeDamage(10);

	//추상클래스는 인스턴스화 시킬수없음
	//Unit0806* u = new Unit0806("asdas", 200)
}
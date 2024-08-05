#include <iostream>

#pragma region constructor(생성자)
/*
▶ constructor
- 객체가 생성될때 자동으로 호출되는 특별한 멤버함수
- 객체의 초기화를 담당하고 클래스와 동일한 이름을 가지며 반환형x
- 생성자는 기본생성자, 매개변수가 있는 생성자, 복사생성자...

생성자 멤버 초기화 리스트 > 상수와 참조멤버 초기화가능
-생성자 매개변수 뒤에 삽입되고 :(콜론)으로 시작한 다음 초기화 할 각 변수를 
 쉼표로 구분하여 나열

-멤버변수가 생성되고 나중에 값을 변경하는것보다 효율적이다.
상수 및 참조 멤버변수는 초기화
ㄴ const 멤버변수, 참조멤버는 반드시 이녀석을 통해 초기화 해야한다 생성자 본문안에서는 불가.
*/
#pragma endregion

class Exam 
{
public :

	const int num;
	int& score;

	//error
	/*Exam()
	{
		num = 1;
		score = 2;
	}*/

	//Ok
	Exam(int num, int score) :num(num), score(score) {}
};


class Monster
{
public:
	std::string name;
	int Atk;
	int Def;

//생성자 멤버 초기화 리스트
	Monster(const std::string& monstername, int monsterAtk, int monsterDef)
		:name(monstername), Atk(monsterAtk), Def(monsterDef)
	{
		//여기서 할 필요가 전혀 없다는 뜻
	}
};





class Player
{
public:
	std::string name;
	int mAtk; // m 은 member의 멤버변수
	int mDef;
	//const int a;
	//int* b;
	Player()
	{
		name = "윈터";
		mAtk = 10;
		mDef = 20;
	}
	//매개변수가 있는 생성자
	Player(const std::string& playerName, int playerAtk, int playerDef) 
	{
		name = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}
	void PrintInfo()const;//붙이는 이유 : 멤버함수가 객체상태를 변경하지 않겠다는뜻
};



int main()
{
	Player* player = new Player();
	player->PrintInfo();

	Player* player1 = new Player("카리나", 10, 50);
	player1->PrintInfo();

	delete player;
	player = nullptr;
}

void Player::PrintInfo() const
{
	std::cout << name << std::endl;
	std::cout << mAtk << std::endl;
	std::cout << mDef << std::endl;
}

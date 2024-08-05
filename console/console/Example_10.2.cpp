#include <iostream>

#pragma region constructor(������)
/*
�� constructor
- ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
- ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ��x
- �����ڴ� �⺻������, �Ű������� �ִ� ������, ���������...

������ ��� �ʱ�ȭ ����Ʈ > ����� ������� �ʱ�ȭ����
-������ �Ű����� �ڿ� ���Եǰ� :(�ݷ�)���� ������ ���� �ʱ�ȭ �� �� ������ 
 ��ǥ�� �����Ͽ� ����

-��������� �����ǰ� ���߿� ���� �����ϴ°ͺ��� ȿ�����̴�.
��� �� ���� ��������� �ʱ�ȭ
�� const �������, ��������� �ݵ�� �̳༮�� ���� �ʱ�ȭ �ؾ��Ѵ� ������ �����ȿ����� �Ұ�.
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

//������ ��� �ʱ�ȭ ����Ʈ
	Monster(const std::string& monstername, int monsterAtk, int monsterDef)
		:name(monstername), Atk(monsterAtk), Def(monsterDef)
	{
		//���⼭ �� �ʿ䰡 ���� ���ٴ� ��
	}
};





class Player
{
public:
	std::string name;
	int mAtk; // m �� member�� �������
	int mDef;
	//const int a;
	//int* b;
	Player()
	{
		name = "����";
		mAtk = 10;
		mDef = 20;
	}
	//�Ű������� �ִ� ������
	Player(const std::string& playerName, int playerAtk, int playerDef) 
	{
		name = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}
	void PrintInfo()const;//���̴� ���� : ����Լ��� ��ü���¸� �������� �ʰڴٴ¶�
};



int main()
{
	Player* player = new Player();
	player->PrintInfo();

	Player* player1 = new Player("ī����", 10, 50);
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

#include<iostream>
#include<time.h>
using namespace std;


/*
2. 대전게임
클래스로 만들기
플레이어와 몬스터 각각의 클래스가 있다.
기본적으로 둘다 공격력, 방어력, 체력이 있음.
멤버변수는 무조건 private
멤버함수들은 (공격하는함수, 공격당하고 정보를 띄우는함수) public
get,set사용해야함
종료조건은 둘중하나 다이하면 끝
*/

int plife = 0;

int mlife = 0;


class Battle
{
public:

	void BattlePage()
	{






	}


	int RemainPlyaerHp()
	{
		return RemainPhp;
	}
	int RemainMonster()
	{
		return RemainMhp;
	}

	void PlayerAttack() //플레이어의 공격, 남은 몬스터의 체력
	{
		RemainMhp = mHp - (pDamage - mDef);
	}

	void MonsterAttack() //몬스터의 공격, 남은 플레이어의 체력
	{
		RemainPhp = pHp - (mDamage - pDef);
	}

	//플레이어의 이름, 데미지 , 방어력, 체력 받기
	void setPlayer(const string&pname, int pDamage ,int pDef, int pHp)
	{
		this->pname = pname;
		this->pDamage = pDamage;
		this->pDef = pDef;
		this->pHp = pHp;
	}

	//몬스터 이름, 데미지 , 방어력, 체력 받기
	void setMonster(const string& mname, int mDamage, int mDef, int mHp)
	{
		this->mname = mname;
		this->mDamage = mDamage;
		this->mDef = mDef;
		this->mHp = mHp;
	}
	void printrule() { cout << "남은체력이 0이되면 게임이 종료된다.  데미지는 공격력의 랜덤이고  데미지에 방어력을 빼서 남은체력을 계산한다 " << endl; }
	void printPlyaer() { cout << pname << "의 받은 데미지 : " << mDamage << "    남은체력" << RemainPhp << endl; }

	void printMonster() { cout << mname << "의 받은 데미지 : " << pDamage << "   남은체력" << RemainMhp << endl; }
private:
	string pname;
	string mname;
	int pAtk = 0;
	int pDef = 0;
	int pHp = 0;
	int pDamage = 0;
	int mAtk = 0;
	int mDef = 0;
	int mHp = 0;
	int mDamage = 0;

	//남은체력
	int RemainPhp = 0;
	int RemainMhp = 0;
};


class Player
{

public:
	void CalDamage()
	{
		pDamage = rand() % 20 + pAtk;
	}

	void playerInfor()
	{
		cout << "이름 : " << name << " 공격력 : " << pAtk << " 방어력 : " << pDef << " 체력 : " << pHp << endl;
	}

	void seta(const string& name, int pAtk, int pDef, int pHp)
	{
		this->name = name;
		this->pAtk = pAtk;
		this->pDef = pDef;
		this->pHp = pHp;
	}
	int getpDamage()
	{
		return pDamage;
	}
private:
	string name;
	int pAtk = 0;
	int pDef = 0;
	int pHp = 0;
	int pDamage = 0;
};



class Monster
{
public:
	void CalDamage()
	{
		mDamage = rand() % 20 + mAtk;
	}
	//void print() { cout << name << "공격 : " << mDamage << " 데미지" << endl; }

	void monsterInfor()
	{
		cout << "이름 : " << name << " 공격력 : " << mAtk << " 방어력 : " << mDef << " 체력 : " << mHp << endl;
	}
	void seta(const string& name, int mAtk, int mDef, int mHp)
	{
		this->name = name;
		this->mAtk = mAtk;
		this->mDef = mDef;
		this->mHp = mHp;
	}
	int getmDamage()
	{
		return mDamage;
	}
private:
	string name;
	int mAtk = 0;
	int mDef = 0;
	int mHp = 0;
	int mDamage = 0;
};





int main()
{
	int Mdamage = 0;
	int Pdamage = 0;

	srand(time(NULL));
	//클래스 선언
	Player p;
	Monster m;
	Battle b;

	// 정보 넘기기
	p.seta("전사", 20, 12, 800);
	m.seta("오크", 15, 8, 400);

	//데미지 계산
	p.CalDamage();
	m.CalDamage();
	//데미지 몇인지 갖고오기
	p.getpDamage();
	m.getmDamage();

	// 데미지 보내기 위해 만들어놓은 변수에 데미지 저장
	Mdamage = p.getpDamage();
	Pdamage = m.getmDamage();

	//battle 클래스로 정보 넘기기
	b.setPlayer("전사", Mdamage, 12, 800);
	b.setMonster("오크", Pdamage, 8, 400);



	// 배틀 선언  
	while (true)
	{
		b.PlayerAttack(); // 플레이어의 공격  즉 몬스터의 남은체력
		b.MonsterAttack(); // 반대

		b.printrule();  // 룰

		cout << endl;
		p.playerInfor();  //플레이어 정보
		m.monsterInfor();  //몬스터 정보

		cout << endl << endl;



		// 플레이어 , 몬스터의 남은체력 출력
		b.printPlyaer();
		cout << endl;
		b.printMonster();

		if (b.RemainMonster() < 0 || b.RemainPlyaerHp() < 0)
		{
			break;
		}
	}
}
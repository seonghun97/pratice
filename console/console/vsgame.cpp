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




class Battle
{
public:

	bool battleEnd(int& Hp)
	{
		if (Hp == 0)
		{
			cout << "게임종료" << endl;

			return true;
		}
		return false;
	}
	void BattleRound(int& Php, int& Mhp)
	{
		while (battleEnd(Php) == false || battleEnd(Mhp) == false)
		{

		}
	}

	void RemainHp(int Damage, int Def, int& Hp)
	{
		Hp -= Damage;
		battleEnd(Hp);
	}

	void printbattle(const string& _Pname, const string& _Mname ,int pDamage, int mDamage , int Php, int Mhp)
	{
		cout << "이름 : " << _Pname  <<"|" << " 받은 데미지 : " << pDamage << " 남은 체력 : " << Php << endl;
		cout << endl << endl;
		cout << "이름 : " << _Mname  <<"|" << " 받은 데미지 : " << mDamage << " 남은 체력 : " << Mhp << endl;
	}
	void printrule() { cout << "남은체력이 0이되면 게임이 종료된다.  데미지는 공격력의 랜덤이고  데미지에 방어력을 빼서 남은체력을 계산한다 " << endl;	}
private:
	

	//남은체력
	int Remainhp = 0;
};


class Player
{
	
public:
	void CalDamage()
	{
		pDamage = rand() % 23 + pAtk;
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
	void pRemainHp(int remainHp)
	{

	}
	string getname()
	{
		return name;
	}

	int getPlayerHp()
	{
		return pHp;
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
		mDamage = rand() % 30 + mAtk;
	}

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
	string getname()
	{
		return name;
	}
	int getMonsterHp()
	{
		return mHp;
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
	p.seta("전사", 50, 12, 800);
	m.seta("오크", 41, 8, 700);

		
		//데미지 계산
		p.CalDamage();
		m.CalDamage();
		//데미지 몇인지 갖고오기
		p.getpDamage();
		m.getmDamage();

		// 데미지 보내기 위해 만들어놓은 변수에 데미지 저장
		Mdamage = p.getpDamage();
		Pdamage = m.getmDamage();

		int remainphp = p.getPlayerHp();
		int remainmhp = m.getMonsterHp();

		//battle 클래스로  정보 넘기기
		b.RemainHp(Mdamage, 12, remainphp);
		b.RemainHp(Pdamage, 8, remainmhp);

		p.getname();
		m.getname();

		//받은 데미지 갖고오기
		p.playerInfor();  //플레이어 정보
		m.monsterInfor();  //몬스터 정보
		cout << "-------------------------------------------------------" << endl;
		cout <<  endl;

		b.printbattle(p.getname(), m.getname(), Mdamage, Pdamage, remainphp, remainmhp);
		/*b.BattleRound(remainmhp, remainphp);*/
		// 배틀 선언  

	
	
}
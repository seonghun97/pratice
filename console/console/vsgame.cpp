#include<iostream>
#include<time.h>
using namespace std;


/*
2. ��������
Ŭ������ �����
�÷��̾�� ���� ������ Ŭ������ �ִ�.
�⺻������ �Ѵ� ���ݷ�, ����, ü���� ����.
��������� ������ private
����Լ����� (�����ϴ��Լ�, ���ݴ��ϰ� ������ �����Լ�) public
get,set����ؾ���
���������� �����ϳ� �����ϸ� ��
*/




class Battle
{
public:

	bool battleEnd(int& Hp)
	{
		if (Hp == 0)
		{
			cout << "��������" << endl;

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
		cout << "�̸� : " << _Pname  <<"|" << " ���� ������ : " << pDamage << " ���� ü�� : " << Php << endl;
		cout << endl << endl;
		cout << "�̸� : " << _Mname  <<"|" << " ���� ������ : " << mDamage << " ���� ü�� : " << Mhp << endl;
	}
	void printrule() { cout << "����ü���� 0�̵Ǹ� ������ ����ȴ�.  �������� ���ݷ��� �����̰�  �������� ������ ���� ����ü���� ����Ѵ� " << endl;	}
private:
	

	//����ü��
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
		cout << "�̸� : " << name << " ���ݷ� : " << pAtk << " ���� : " << pDef << " ü�� : " << pHp << endl;
		
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
		cout << "�̸� : " << name << " ���ݷ� : " << mAtk << " ���� : " << mDef << " ü�� : " << mHp << endl;
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
	//Ŭ���� ����
	Player p;
	Monster m;
	Battle b;

	// ���� �ѱ��
	p.seta("����", 50, 12, 800);
	m.seta("��ũ", 41, 8, 700);

		
		//������ ���
		p.CalDamage();
		m.CalDamage();
		//������ ������ �������
		p.getpDamage();
		m.getmDamage();

		// ������ ������ ���� �������� ������ ������ ����
		Mdamage = p.getpDamage();
		Pdamage = m.getmDamage();

		int remainphp = p.getPlayerHp();
		int remainmhp = m.getMonsterHp();

		//battle Ŭ������  ���� �ѱ��
		b.RemainHp(Mdamage, 12, remainphp);
		b.RemainHp(Pdamage, 8, remainmhp);

		p.getname();
		m.getname();

		//���� ������ �������
		p.playerInfor();  //�÷��̾� ����
		m.monsterInfor();  //���� ����
		cout << "-------------------------------------------------------" << endl;
		cout <<  endl;

		b.printbattle(p.getname(), m.getname(), Mdamage, Pdamage, remainphp, remainmhp);
		/*b.BattleRound(remainmhp, remainphp);*/
		// ��Ʋ ����  

	
	
}
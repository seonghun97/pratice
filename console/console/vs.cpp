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

	void PlayerAttack() //�÷��̾��� ����, ���� ������ ü��
	{
		RemainMhp = mHp - (pDamage - mDef);
	}

	void MonsterAttack() //������ ����, ���� �÷��̾��� ü��
	{
		RemainPhp = pHp - (mDamage - pDef);
	}

	//�÷��̾��� �̸�, ������ , ����, ü�� �ޱ�
	void setPlayer(const string&pname, int pDamage ,int pDef, int pHp)
	{
		this->pname = pname;
		this->pDamage = pDamage;
		this->pDef = pDef;
		this->pHp = pHp;
	}

	//���� �̸�, ������ , ����, ü�� �ޱ�
	void setMonster(const string& mname, int mDamage, int mDef, int mHp)
	{
		this->mname = mname;
		this->mDamage = mDamage;
		this->mDef = mDef;
		this->mHp = mHp;
	}
	void printrule() { cout << "����ü���� 0�̵Ǹ� ������ ����ȴ�.  �������� ���ݷ��� �����̰�  �������� ������ ���� ����ü���� ����Ѵ� " << endl; }
	void printPlyaer() { cout << pname << "�� ���� ������ : " << mDamage << "    ����ü��" << RemainPhp << endl; }

	void printMonster() { cout << mname << "�� ���� ������ : " << pDamage << "   ����ü��" << RemainMhp << endl; }
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

	//����ü��
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
		cout << "�̸� : " << name << " ���ݷ� : " << pAtk << " ���� : " << pDef << " ü�� : " << pHp << endl;
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
	//void print() { cout << name << "���� : " << mDamage << " ������" << endl; }

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
	p.seta("����", 20, 12, 800);
	m.seta("��ũ", 15, 8, 400);

	//������ ���
	p.CalDamage();
	m.CalDamage();
	//������ ������ �������
	p.getpDamage();
	m.getmDamage();

	// ������ ������ ���� �������� ������ ������ ����
	Mdamage = p.getpDamage();
	Pdamage = m.getmDamage();

	//battle Ŭ������ ���� �ѱ��
	b.setPlayer("����", Mdamage, 12, 800);
	b.setMonster("��ũ", Pdamage, 8, 400);



	// ��Ʋ ����  
	while (true)
	{
		b.PlayerAttack(); // �÷��̾��� ����  �� ������ ����ü��
		b.MonsterAttack(); // �ݴ�

		b.printrule();  // ��

		cout << endl;
		p.playerInfor();  //�÷��̾� ����
		m.monsterInfor();  //���� ����

		cout << endl << endl;



		// �÷��̾� , ������ ����ü�� ���
		b.printPlyaer();
		cout << endl;
		b.printMonster();

		if (b.RemainMonster() < 0 || b.RemainPlyaerHp() < 0)
		{
			break;
		}
	}
}
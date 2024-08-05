#include <iostream>
#include <time.h> 
using namespace std;

class Battle
{
public:
    bool battleEnd(int Hp, const string& name)
    {
        if (Hp <= 0)
        {
            cout << name << "��������" << endl;
            return true;
        }
        return false;
    }

    void RemainHp(int Damage, int Def, int& Hp)
    {
        int actualDamage = Damage - Def;
        if (actualDamage <= 0);
        Hp -= actualDamage;
    }

    void printbattle(const string& _Pname, const string& _Mname, int pDamage, int mDamage, int Php, int Mhp)
    {
        cout << "�̸� : " << _Pname << " | ���� ������ : " << mDamage << " | ���� ü�� : " << Php << endl;
        cout << "�̸� : " << _Mname << " | ���� ������ : " << pDamage << " | ���� ü�� : " << Mhp << endl;
    }

    void printrule() {
        cout << "����ü���� 0�̵Ǹ� ������ ����ȴ�. �������� ���ݷ��� �����̰� �������� ������ ���� ����ü���� ����Ѵ�." << endl;
    }
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
        cout << "�̸� : " << name << " | ���ݷ� : " << pAtk << " | ���� : " << pDef << " | ü�� : " << pHp << endl;
    }

    void seta(const string& name, int pAtk, int pDef, int pHp)
    {
        this->name = name;
        this->pAtk = pAtk;
        this->pDef = pDef;
        this->pHp = pHp;
    }

    string getname() const
    {
        return name;
    }

    int getPlayerHp() const
    {
        return pHp;
    }

    void setPlayerHp(int hp)
    {
        pHp = hp;
    }

    int getpDamage() const
    {
        return pDamage;
    }

    int getpDef() const
    {
        return pDef;
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
        cout << "�̸� : " << name << " | ���ݷ� : " << mAtk << " | ���� : " << mDef << " | ü�� : " << mHp << endl;
    }

    void seta(const string& name, int mAtk, int mDef, int mHp)
    {
        this->name = name;
        this->mAtk = mAtk;
        this->mDef = mDef;
        this->mHp = mHp;
    }

    string getname() const
    {
        return name;
    }

    int getMonsterHp() const
    {
        return mHp;
    }

    void setMonsterHp(int hp)
    {
        mHp = hp;
    }

    int getmDamage() const
    {
        return mDamage;
    }

    int getmDef() const
    {
        return mDef;
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
    srand(static_cast<unsigned int>(time(NULL)));

    // Ŭ���� ����
    Player p;
    Monster m;
    Battle b;

    // ���� �ѱ��
    p.seta("����", 50, 12, 800);
    m.seta("��ũ", 41, 8, 700);

    b.printrule();
    cout << endl;

    // �ʱ� ���� ���
    p.playerInfor();
    m.monsterInfor();
    cout << "-------------------------------------------------------" << endl;
    cout << endl;

    // ��Ʋ ����
    while (true)
    {
        // �÷��̾� ����
        p.CalDamage();
        int playerDamage = p.getpDamage();
        int monsterHp = m.getMonsterHp();
        b.RemainHp(playerDamage, m.getmDef(), monsterHp);
        m.setMonsterHp(monsterHp);

        // ���� ���� ��� �� ���� Ȯ��
        if (b.battleEnd(monsterHp, m.getname())) break;

        // ���� ����
        m.CalDamage();
        int monsterDamage = m.getmDamage();
        int playerHp = p.getPlayerHp();
        b.RemainHp(monsterDamage, p.getpDef(), playerHp);
        p.setPlayerHp(playerHp);

        // �÷��̾� ���� ��� �� ���� Ȯ��
        if (b.battleEnd(playerHp, p.getname())) break;

        cout << "-------------------------------------------------------" << endl;
        cout << endl;

        // ���� ��Ʋ ��Ȳ ���
        b.printbattle(p.getname(), m.getname(), playerDamage, monsterDamage, playerHp, monsterHp);
    }

    return 0;
}

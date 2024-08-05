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
            cout << name << "게임종료" << endl;
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
        cout << "이름 : " << _Pname << " | 받은 데미지 : " << mDamage << " | 남은 체력 : " << Php << endl;
        cout << "이름 : " << _Mname << " | 받은 데미지 : " << pDamage << " | 남은 체력 : " << Mhp << endl;
    }

    void printrule() {
        cout << "남은체력이 0이되면 게임이 종료된다. 데미지는 공격력의 랜덤이고 데미지에 방어력을 빼서 남은체력을 계산한다." << endl;
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
        cout << "이름 : " << name << " | 공격력 : " << pAtk << " | 방어력 : " << pDef << " | 체력 : " << pHp << endl;
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
        cout << "이름 : " << name << " | 공격력 : " << mAtk << " | 방어력 : " << mDef << " | 체력 : " << mHp << endl;
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

    // 클래스 선언
    Player p;
    Monster m;
    Battle b;

    // 정보 넘기기
    p.seta("전사", 50, 12, 800);
    m.seta("오크", 41, 8, 700);

    b.printrule();
    cout << endl;

    // 초기 정보 출력
    p.playerInfor();
    m.monsterInfor();
    cout << "-------------------------------------------------------" << endl;
    cout << endl;

    // 배틀 루프
    while (true)
    {
        // 플레이어 공격
        p.CalDamage();
        int playerDamage = p.getpDamage();
        int monsterHp = m.getMonsterHp();
        b.RemainHp(playerDamage, m.getmDef(), monsterHp);
        m.setMonsterHp(monsterHp);

        // 몬스터 정보 출력 및 종료 확인
        if (b.battleEnd(monsterHp, m.getname())) break;

        // 몬스터 공격
        m.CalDamage();
        int monsterDamage = m.getmDamage();
        int playerHp = p.getPlayerHp();
        b.RemainHp(monsterDamage, p.getpDef(), playerHp);
        p.setPlayerHp(playerHp);

        // 플레이어 정보 출력 및 종료 확인
        if (b.battleEnd(playerHp, p.getname())) break;

        cout << "-------------------------------------------------------" << endl;
        cout << endl;

        // 현재 배틀 상황 출력
        b.printbattle(p.getname(), m.getname(), playerDamage, monsterDamage, playerHp, monsterHp);
    }

    return 0;
}

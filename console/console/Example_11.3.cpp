#include<iostream>

#pragma region 상속
/*
▶ 상속
부모 -> 자식
클래스간의 상속관계를 맺을때는 공통의 기능을
상위 클래스에 묶어넣어 다른 클래스로 확장할수 있게 하는것이 목적

만약 클래스들이 서로 비슷한 또는 완전히 같은 코드를 갖고있다면
해당코드를 상위 클래스로 묶어 내는것을 고려하는게 좋다.

ex) 
player
-> 이름, 공격력, 방어력 등등 (속성)
-> 공격하기, 스킬, 도망가기 등등 (행동)
monster
-> 이름, 공격력, 방어력 등등 (속성)
-> 공격하기, 스킬, 도망가기 등등 (행동)

public 상속 :
	부모 클래스의 public 멤버는 자식클래스의 public 으로
	부모 클래스의 proteted 멤버는 자식클래스의 protected로
	부모 클래스의 private 멤버는 자식클래스 접근 x

	다중상속(지향)
class Mage : public Character (,) < 찍으면 다중상속이됨


무기라는 클래스가 있는대 활은 무기다 < 상속, 활은 무기를 포함한다 < 포함

is-a : 바나나는 과일이다( 상속ok)
has-a  바나나는 과일을 포함한다 ?
포함관계

class Weapon {};

class Sw : public Weapon
{

public:
	void use();

};
class CChharacter
{
	Sw* s; //포함
public:
	void attack()
	{
		s->use();
	}
};

독립성이 있어야함

*/
#pragma endregion

//부모, 자식
class Parent 
{
public:
	int publicValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3) {}

	void ShowValue()
	{
		std::cout << "부모 클래스 public 값 : " << publicValue << std::endl;
		std::cout << "부모 클래스 protected 값 : " << protectedValue << std::endl;
		std::cout << "부모 클래스 private 값 : " << privateValue << std::endl;
	}
protected:
	int protectedValue;

private:
	int privateValue;


};
// 자식 : 접근제어 지시자 부모클래스 
class ChildPublic : public Parent
{
public:
	void ShowValue()
	{
		std::cout << "자식클래스 에서의 public값:" << publicValue << std::endl;
		std::cout << "자식클래스 에서의 protected값:" << protectedValue << std::endl;
		
		//자식에서 접근 불가
		//std::cout << "자식클래스 에서의 private값:" << privateValue << std::endl;
	}
};
class ChildProtected : protected Parent
{
public:
	void ShowValue()
	{
		std::cout << "자식클래스 에서의 public값:" << publicValue << std::endl;
		std::cout << "자식클래스 에서의 protected값:" << protectedValue << std::endl;

		//자식에서 접근 불가
		//std::cout << "자식클래스 에서의 private값:" << privateValue << std::endl;
	}
};
class ChildPrivate : private Parent
{
public:
	void ShowValue()
	{
		std::cout << "자식클래스 에서의 public값:" << publicValue << std::endl;
		std::cout << "자식클래스 에서의 protected값:" << protectedValue << std::endl;

		//자식에서 접근 불가
		//std::cout << "자식클래스 에서의 private값:" << privateValue << std::endl;
	}
};

#pragma region 상속을 쓰지않았을때
//class Warrior
//{
//	std::string name;
//	int health;
//public:
//	Warrior(const std::string& n, const int h) :name(n), health(h) {}
//
//	void attack()
//	{
//		std::cout << name << "이(가) 칼을 휘두릅니다 " << std::endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		std::cout << name << "이(가)" << damage << "만큼 데미지 받음! 체력 :" << health << std::endl;
//	}
//
//private:
//
//};
//
//class Mage 
//{
//	Mage(const std::string& n, const int h) :name(n), health(h) {}
//
//	std::string name;
//	int health;
//public:
//	void Castskill()
//	{
//		std::cout << name << "이(가) 마법 공격 " << std::endl;
//	}
//};
#pragma endregion

#pragma region 상속을 썼을때
class Character
{
public:
	std::string name;
	int health;

	Character(const std::string& n, const int h): name(n), health(h) {}
	void TakeDamage(const int damage)
	{
		health -= damage;
		std::cout << name << "이(가)" << damage << "만큼 데미지 받음! 체력 :" << health << std::endl;
	}
};

class Warrior : public Character
{
public:
	//Character(n,h) : 자식클래스인 warrior에서 부모클래스인 Character의 생성자를 호출
	//부모 -> 자식  부모클래스의 생성자를 활용하여 초기화 가능
	Warrior(const std::string& n, const int h) : Character(n, h) {}
	void attack()
	{
		std::cout << name << "이(가) 칼을 휘두릅니다 " << std::endl;
	}
};
class Mage : public Character
{
public:
	Mage(const std::string& n, const int h) : Character(n, h) {}
	void Cast()
	{
		std::cout << name << "이(가) 마법 공격 " << std::endl;
	}
};


#pragma endregion

class Weapon {};

class Sw : public Weapon
{

public:
	void use()
	{
		std::cout << "사용";
	}

};
class CChharacter
{
	Sw* s; //포함
	public:
	void attack()
	{
		s->use();
	}
};



int main()
{
	//ChildPublic c1;
	//c1.ShowValue();
	//std::cout << c1.publicValue << std::endl;

	//ChildProtected c2;
	//c2.ShowValue();

	Warrior* w = new Warrior("전사", 100);
	w->attack(); // 자식꺼
	w->TakeDamage(10); // 부모꺼

	Character* c = new Character("법사", 200);

}
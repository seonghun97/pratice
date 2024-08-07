#include<iostream>

#pragma region ���
/*
�� ���
�θ� -> �ڽ�
Ŭ�������� ��Ӱ��踦 �������� ������ �����
���� Ŭ������ ����־� �ٸ� Ŭ������ Ȯ���Ҽ� �ְ� �ϴ°��� ����

���� Ŭ�������� ���� ����� �Ǵ� ������ ���� �ڵ带 �����ִٸ�
�ش��ڵ带 ���� Ŭ������ ���� ���°��� ����ϴ°� ����.

ex) 
player
-> �̸�, ���ݷ�, ���� ��� (�Ӽ�)
-> �����ϱ�, ��ų, �������� ��� (�ൿ)
monster
-> �̸�, ���ݷ�, ���� ��� (�Ӽ�)
-> �����ϱ�, ��ų, �������� ��� (�ൿ)

public ��� :
	�θ� Ŭ������ public ����� �ڽ�Ŭ������ public ����
	�θ� Ŭ������ proteted ����� �ڽ�Ŭ������ protected��
	�θ� Ŭ������ private ����� �ڽ�Ŭ���� ���� x

	���߻��(����)
class Mage : public Character (,) < ������ ���߻���̵�


������ Ŭ������ �ִ´� Ȱ�� ����� < ���, Ȱ�� ���⸦ �����Ѵ� < ����

is-a : �ٳ����� �����̴�( ���ok)
has-a  �ٳ����� ������ �����Ѵ� ?
���԰���

class Weapon {};

class Sw : public Weapon
{

public:
	void use();

};
class CChharacter
{
	Sw* s; //����
public:
	void attack()
	{
		s->use();
	}
};

�������� �־����

*/
#pragma endregion

//�θ�, �ڽ�
class Parent 
{
public:
	int publicValue;

	Parent() :publicValue(1), protectedValue(2), privateValue(3) {}

	void ShowValue()
	{
		std::cout << "�θ� Ŭ���� public �� : " << publicValue << std::endl;
		std::cout << "�θ� Ŭ���� protected �� : " << protectedValue << std::endl;
		std::cout << "�θ� Ŭ���� private �� : " << privateValue << std::endl;
	}
protected:
	int protectedValue;

private:
	int privateValue;


};
// �ڽ� : �������� ������ �θ�Ŭ���� 
class ChildPublic : public Parent
{
public:
	void ShowValue()
	{
		std::cout << "�ڽ�Ŭ���� ������ public��:" << publicValue << std::endl;
		std::cout << "�ڽ�Ŭ���� ������ protected��:" << protectedValue << std::endl;
		
		//�ڽĿ��� ���� �Ұ�
		//std::cout << "�ڽ�Ŭ���� ������ private��:" << privateValue << std::endl;
	}
};
class ChildProtected : protected Parent
{
public:
	void ShowValue()
	{
		std::cout << "�ڽ�Ŭ���� ������ public��:" << publicValue << std::endl;
		std::cout << "�ڽ�Ŭ���� ������ protected��:" << protectedValue << std::endl;

		//�ڽĿ��� ���� �Ұ�
		//std::cout << "�ڽ�Ŭ���� ������ private��:" << privateValue << std::endl;
	}
};
class ChildPrivate : private Parent
{
public:
	void ShowValue()
	{
		std::cout << "�ڽ�Ŭ���� ������ public��:" << publicValue << std::endl;
		std::cout << "�ڽ�Ŭ���� ������ protected��:" << protectedValue << std::endl;

		//�ڽĿ��� ���� �Ұ�
		//std::cout << "�ڽ�Ŭ���� ������ private��:" << privateValue << std::endl;
	}
};

#pragma region ����� �����ʾ�����
//class Warrior
//{
//	std::string name;
//	int health;
//public:
//	Warrior(const std::string& n, const int h) :name(n), health(h) {}
//
//	void attack()
//	{
//		std::cout << name << "��(��) Į�� �ֵθ��ϴ� " << std::endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		std::cout << name << "��(��)" << damage << "��ŭ ������ ����! ü�� :" << health << std::endl;
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
//		std::cout << name << "��(��) ���� ���� " << std::endl;
//	}
//};
#pragma endregion

#pragma region ����� ������
class Character
{
public:
	std::string name;
	int health;

	Character(const std::string& n, const int h): name(n), health(h) {}
	void TakeDamage(const int damage)
	{
		health -= damage;
		std::cout << name << "��(��)" << damage << "��ŭ ������ ����! ü�� :" << health << std::endl;
	}
};

class Warrior : public Character
{
public:
	//Character(n,h) : �ڽ�Ŭ������ warrior���� �θ�Ŭ������ Character�� �����ڸ� ȣ��
	//�θ� -> �ڽ�  �θ�Ŭ������ �����ڸ� Ȱ���Ͽ� �ʱ�ȭ ����
	Warrior(const std::string& n, const int h) : Character(n, h) {}
	void attack()
	{
		std::cout << name << "��(��) Į�� �ֵθ��ϴ� " << std::endl;
	}
};
class Mage : public Character
{
public:
	Mage(const std::string& n, const int h) : Character(n, h) {}
	void Cast()
	{
		std::cout << name << "��(��) ���� ���� " << std::endl;
	}
};


#pragma endregion

class Weapon {};

class Sw : public Weapon
{

public:
	void use()
	{
		std::cout << "���";
	}

};
class CChharacter
{
	Sw* s; //����
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

	Warrior* w = new Warrior("����", 100);
	w->attack(); // �ڽĲ�
	w->TakeDamage(10); // �θ�

	Character* c = new Character("����", 200);

}
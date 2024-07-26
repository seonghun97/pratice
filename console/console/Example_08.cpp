#include<iostream>

using namespace std;

/*
- ����� ���� �ڷ���
������ü, ����ü, ������, Ŭ������ �ִ�.

*/
#pragma region C_enum (������)
/*
1. ������

- ���õ� ������� �ϳ��� �׷����� ���´�.
- �ڵ��� �������� ���̰� �ǹ��ִ� �̸��� �ο��Ҽ� �ִ�. 

�� �⺻ ���� ���

enum Color{Red, Green, White};
            0     1      2
������� ���� �Ҵ�

enum Direction {Left, Right = 2,  Up, Down};
	             0      2          3     4




enum Color { Red, Green, White };
enum RGB { Red, Green, White }; // red�� �ΰ��־ ���� ��

enum Direction { Left, Right = 2, Up, Down };
int main()
{
	//Color color = Red;  //��

	//if (color==Red)
	//{
	//	cout << "����" << endl;
	//}
	//else if (color==Green)
	//{
	//	cout << "���" << endl;
	//}

	//Direction key = Left;

	//switch (key)
	//{
	//case Left:
	//	cout << "�������� �̵�" << endl;
	//	break;

	//case Right:
	//	cout << "���������� �̵�" << endl;
	//	break;

	//case Up:
	//	cout << "���� �̵�" << endl;
	//	break;

	//case Down:
	//	cout << "�Ʒ��� �̵�" << endl;
	//	break;
	//}

	//int red = Red; // ���� �ֳ��ϸ� �Ͻ��� ����ȯ����
}
*/
#pragma endregion
#pragma region enumClass

/*
�� enumclass

- enum class�� �ڽŸ��� �������� ������ �ִ�.
- ���� �̸��� ������ ����� �ٸ� �������� �浹���� �ʴ´�.
- Ÿ���� �������� ������

enum class Color
{
	RED, GREEN, WHITE
};
enum class SkillType
{
	Fire,
	Ice,
	Lighting
};
void userSkill(SkillType skill);

int main()
{
	//���� ������ ��Ȯ�� ����� �Ѵ�.
	//Color color = RED;
	Color color = Color::RED;  

	//Ÿ���� �������� �����ϱ� ���� �Ͻ������� ����ȯ�� ��������ʴ´�.
	//int c = Color::RED; 
	//��������� ����ȯ�� ������Ѵ�.
	int c = static_cast<int>(Color::RED);
}

void userSkill(SkillType skill)
{
	switch (skill)
	{
	case SkillType::Fire:
		break;
	case SkillType::Ice:
		break;
	case SkillType::Lighting:
		break;
	default:
		break;
	}
}

*/
#pragma endregion
/*
�� ���
- enum�� ������ ����� ������������ �ش���.  �Ϲ����� ����ȯ�� ��� -> Ÿ�Կ� ���� �������̳���

- enumClass�� ������ ��ü�� �������� �ش���. �Ϲ����� ����ȯ�� ������� �ʴ´�. -> Ÿ�Կ� ���� �������� �����Ѵ�.
*/


#pragma region ����ü : Struck
/*
�� ����ü : Struct
- �ϳ� �̻��� ������ �׷���� ���ο� �ڷ����� ����

<����ü ����>
struct ����ü �̸� {����ü ����};
- ����ü �������δ� ������ �Լ��� ������ ����
- ����ü�� ������ ������ ��� ����, ���Ե� �Լ��� ����Լ���� �Ѵ�.
*/
#pragma endregion
//struct Student
//{
//	string name;
//	int math;
//	int english;
//	int science;
//
//	float Average()
//	{
//		return(math + english + science) / 3.0f;
//	}
//};
//
//struct Point
//{
//	int x;
//	int y;
//	void print();	
//};
//
//// �����ڰ� �ִ� ����ü
//// <����ü ������>
//// ��ȯ�� ���� ����ü�� �̸��� �Լ��� �����Ͽ� ���
//
//struct Monster
//{
//	string name;
//	int hp;
//	int mp;
//
//	//�Ű����������� ������
//	Monster()
//	{
//		name = "����";
//		hp = 10;
//		mp = 20;
//	}
//	//�Ű������� �ִ� ������
//	Monster(string _name, int _hp, int _mp)
//	{
//		name = _name;
//		hp = _hp;
//		mp = _mp;
//	}
//	// ������ �����ε�
//
//};
//
//
//int main()
//{
//	//����ü ����
//	Point P;
//	P.x = 10;
//	P.y = 20;
//
//	cout << "����ü P.x�� �� :" << P.x << endl;
//	cout << "����ü P.y�� �� :" << P.y << endl;
//	//P.print();
//
//	Point p1 = { 50,120 }; //������ ���ÿ� �ʱ�ȭ
//
//	cout << endl << endl;
//
//	Monster monster;
//	Monster dragon = Monster("�巡��", 250, 100);
//	Monster slime = Monster("������", 10, 3);
//
//
//	cout << monster.name << endl;
//	cout << monster.hp << endl;
//	cout << monster.mp << endl;
//
//	cout << "=========================" << endl;
//
//	cout << dragon.name << endl;
//	cout << dragon.hp << endl;
//	cout << dragon.mp << endl;
//
//	cout << "=========================" << endl;
//
//	cout << slime.name << endl;
//	cout << slime.hp << endl;
//	cout << slime.mp << endl;
//}
//
//
//void Point::print()
//{
//	cout << "����Ʈ ����ü ��� �Լ���";
//}
// �����غ���.
//����ü�� Ȱ���ؼ� �������踦 ����غ�����

struct Family
{
	string familyr;
	string name;
	int age;


	Family(string _familyr, string _name, int _age)
	{
		familyr = _familyr;
		name = _name;
		age = _age;
	}

};

int main()
{
	Family dad = { "��" , "�ڼ���" ,53 };
	Family mom = { "��" , "�ӹ̰�" ,58 };
	Family sister = { "����" , "�ڻ���" ,24 };

	cout << dad.familyr << endl;
	cout << dad.name << endl;
	cout << dad.age << endl;

	cout << "=========================" << endl;

	cout << mom.familyr << endl;
	cout << mom.name << endl;
	cout << mom.age << endl;

	cout << "=========================" << endl;

	cout << sister.familyr << endl;
	cout << sister.name << endl;
	cout << sister.age << endl;

	
}
/*
�� �ڷ��� ������
- �ڷ����� ��Ī�� �����ϰ� ���� �ڷ��� �̸� ��� ���
<typedef �ڷ��� ��Ī>
//���� ��Ÿ��
	typedef int myIn_t;					//�ڷ��� �����Ǵ� _t�� �����°��� ����
	typedef unsigned long long uint64_t //������ �ڷ����� ����ȭ ����

//C++11 ���Ե� ��Ÿ��	
	using integer = int;

*/
 
/*
���� 
1. ī����� �����
Ʈ����ī��� 52��

���� �� ���� ������ ���� ī�尡 ���Դٸ� (���) 
�Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������.
�̱�� ���� ������������� 7 �� 9�� ������ �ȿ� ������ ���ڸ� ������ �̱�
���ڰ� ������ ��������

���� �����ȿ������� �¸�(���þ׿� 2��)
���� �����ϴٸ� ���þ׸�ŭ ����
���� �����ȿ� ������ �ʴ´ٸ� ���þ� * 2����

����)�ѹ� ����� ī��� ������ �˴ϴ�. (������� �ʴ°� ��)
17�ǵ����� �ڵ����� ��������( 3���� ī�带 ���ϸ��� �Һ��ϹǷ�)
������ ������ �ִٸ�
�ּҹ��ñݾ��� �ְ� ���������� �ּҹ��ñݾ׺��� ������ȵ�

��7�� ���Դٸ� �ι��ٽ� ��7 �� ������� �ʴ´�.
A =1 J = 11 Q = 12 K = 13


��7		��8		��9
		�� �������� ī�尡�ƴ�

��8

��

��

��

��


���� �׽�Ʈ ����
�� ���� ... �ϴٸ��� ������ ������ ����

�ָ�����
1. �������
	
	1
		5
			25

���� 1�� �Է��ϸ� ���ڴ� 5x5 


	��
		5
			25

�̷��� �ٲ�
1���� �����
����1�� �ϼ�.  ���μ��δ밢�� ���� üũ�ؾ��� �������� 3�ٵǸ� �ϼ�


2. �����̵� ������� �����
1
	2
		4
			5	8
			9	*	
������ġ�� �������  ��������Ű��������
1
	2
		4
			5	8
			*	9
���� = ĭ�� ����� �ȵ�
�迭 ����
�������� ����





*/
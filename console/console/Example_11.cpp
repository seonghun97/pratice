#include<iostream>

using namespace std;
#pragma region static, extern
/*
�� static 
- ���������� �ٴ� static�� �Լ� ���ο��� �ٴ� static Ŭ���� ��������� static ������ �ٸ���


�� extern
- �ܺκ���

- �ٸ����Ͽ� ���ǵ� ���������� ����Ҽ��ְ����ش�

����
-���������� ����




Ŭ���� ���ο��� static���� ����� ������ �ش� Ŭ������
��� �ν��Ͻ����� ������. Ŭ������ �ν��Ͻ� ���� �������� ���Ǵ� ����
Ŭ������ �ν��Ͻ��� ���̵� ������.
-----------------------------------------------------------
���� ���

Ŭ���� ���ο��� static�� ����Ͽ� ����
�� ������ �����Ϸ����� �ش� Ŭ������ ���� ��������� ������ �˷���

�ܺο��� �ʱ�ȭ �ؾ���
:: ���� ���������� �� ����ؼ� �ʱ�ȭ�� �ؾ��Ѵ�.
-----------------------------------------------------------

*/
#pragma endregion

#pragma region
//staticVariable.cpp�ȿ� �ִ� ��������
//extern int num1;
//
//void Count();	
//
//static int sNum; //����ƽ�� 0���� �ʱ�ȭ �����൵ �˾Ƽ� �ʱ�ȭ ����
//int main()
//{
//	Count();
//	Count();
//	Count();
//}
//
//void Count()
//{
//	static int x = 0; // ����
//	int y = 0; //����
//	x = x + 1;
//	y = y + 1;
//
//	std::cout << "x�� : " << x << "y�� :" << y << std::endl;
//
//}
#pragma endregion

class Character
{
	private:
		static int count;
		
	public:
		Character() 
		{
			count++;
		}
		static void PrintCount() //���� ����Լ� Ŭ������ �ν��Ͻ����� ȣ���Ҽ����� �����Լ������� �Ϲ� ����Լ��� ȣ���Ҽ�����
		{
			cout << count << endl;
			//cout << num << endl; (err) // static����Լ�(�����Լ�) ������ �Ϲ� ��������� ȣ���Ҽ�����
		}
};

int Character::count = 0;

int main()
{
	Character::PrintCount();
	Character baba;
	Character::PrintCount();
	Character war;
	Character::PrintCount();
}
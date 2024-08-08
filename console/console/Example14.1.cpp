#include<iostream>
#include<vector>
#include<memory>  // ����Ʈ������ ������ �־����

class Weapon
{

public:
	Weapon(const std::string& name, int damage)
		:name(name),damage(damage){}

	void Print()const
	{
		std::cout << "�̸� : " << name << ", ���ݷ� : " << damage << std::endl;
	}
private:

	std::string name;
	int damage;

};


void ShowPrintValue(const std::vector<int>vec)
{
	for (int i :vec)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	std::vector<int>vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	std::cout << "vec�� capactiy : " << vec.capacity() << std::endl;
	vec.clear();
	std::cout << "vec�� capactiy(Ŭ����) : " << vec.capacity() << std::endl;//���Ҵ� ���󰡵� ������ �����־ 6 �״�� ����
	//���͸��� ���ҽ�Ű�� ������ �����(������ũ�� �ٲ�)

	std::vector<int>().swap(vec);

	std::cout << "vec�� capactiy(������) : " << vec.capacity() << std::endl; //0

	std::vector<int>myVec = { 1,2,3,4,5,6 };
	ShowPrintValue(myVec);

	// Vector ��ü�� ������ ���ͻ���
	std::vector<Weapon>weapon;

	weapon.push_back(Weapon("���", 50));
	weapon.push_back(Weapon("Ȱ", 10));
	weapon.push_back(Weapon("�ܰ�", 100));
	weapon.push_back(Weapon("�����", 600));

	for (const auto& w : weapon)
	{
		w.Print();
	}
	std::vector<Weapon*> weapon1;

	weapon1.push_back(new Weapon("���", 50));
	weapon1.push_back(new Weapon("Ȱ", 10));
	weapon1.push_back(new Weapon("�ܰ�", 100));
	weapon1.push_back(new Weapon("�����", 600)); 
	//�����Ҵ��߱⶧���� �����ؾ���

	for (auto& w : weapon1)
	{
		delete w;
	}
	//����Ʈ������ delete ���ص� �޸𸮰��� �˾Ƽ��� (auto_ptr ,shared,shared_ptr, weak_ptr)
	//std::vector<std::unique_ptr<Weapon>>weapon2;
	//std::make_unique // ��ü�� �����ϰ� ���ÿ� �־��� �Ű������� �����ؼ� �ش������Ͱ� �ùٸ��� �ʱ�ȭ�Ǹ�, std::unique_ptr�� ���� �ڵ����� �޸� ������ �̷������. 

}
//1. �ƹ��ų� Ŭ���� ���� ���Ϳ� �����ϰ� ����ϱ�(�ǽ�)
//2. �����ý���(����)
//�� shop Ŭ���� , item Ŭ����, ���� �������� �˰��־���ϰ� 
// ĳ���� Ŭ���� - �κ��丮 Ŭ����
// ���� (ĳ���Ͱ�) �������� �������� ����̰� ���ݷ¿� ���õ����������� �װ� �ٳ����� ����� ����� ������ �������� �κ��丮�� ������
// �κ��丮 â������ �����Ҽ� �־���� Ż���� �Ǿ��� ���ȱ� ��ɵ� �־���� �Ĵ°����� �춧�� ������
// ���������� �ٻ�� ���� ����2���ְ�
// ĳ���Ͱ� �������� �����ϸ� ���ݷ��̳� ������� �׸�ŭ �ö󰡾��� ���ָ��� ���ݷ��� 10�δ� ���ݷ��� 20�̵ȴ� ĳ���� �������ͽ� â���־����
// ����ȱ�, ������ ���� Ż��, ��������


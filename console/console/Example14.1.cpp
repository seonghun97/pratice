#include<iostream>
#include<vector>
#include<memory>  // 스마트포인터 쓰려면 있어야함

class Weapon
{

public:
	Weapon(const std::string& name, int damage)
		:name(name),damage(damage){}

	void Print()const
	{
		std::cout << "이름 : " << name << ", 공격력 : " << damage << std::endl;
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

	std::cout << "vec의 capactiy : " << vec.capacity() << std::endl;
	vec.clear();
	std::cout << "vec의 capactiy(클리어) : " << vec.capacity() << std::endl;//원소는 날라가도 공간이 남아있어서 6 그대로 나옴
	//빈벡터만들어서 스왑시키면 공간도 사라짐(참조링크를 바꿈)

	std::vector<int>().swap(vec);

	std::cout << "vec의 capactiy(스왑후) : " << vec.capacity() << std::endl; //0

	std::vector<int>myVec = { 1,2,3,4,5,6 };
	ShowPrintValue(myVec);

	// Vector 객체를 저장할 벡터생성
	std::vector<Weapon>weapon;

	weapon.push_back(Weapon("장검", 50));
	weapon.push_back(Weapon("활", 10));
	weapon.push_back(Weapon("단검", 100));
	weapon.push_back(Weapon("집행검", 600));

	for (const auto& w : weapon)
	{
		w.Print();
	}
	std::vector<Weapon*> weapon1;

	weapon1.push_back(new Weapon("장검", 50));
	weapon1.push_back(new Weapon("활", 10));
	weapon1.push_back(new Weapon("단검", 100));
	weapon1.push_back(new Weapon("집행검", 600)); 
	//동적할당했기때문에 해제해야함

	for (auto& w : weapon1)
	{
		delete w;
	}
	//스마트포인터 delete 안해도 메모리관리 알아서함 (auto_ptr ,shared,shared_ptr, weak_ptr)
	//std::vector<std::unique_ptr<Weapon>>weapon2;
	//std::make_unique // 객체를 생성하고 동시에 주어진 매개변수를 선언해서 해당프린터가 올바르게 초기화되며, std::unique_ptr를 통해 자동으로 메모리 관리가 이루어진다. 

}
//1. 아무거나 클래스 만들어서 벡터에 저장하고 출력하기(실습)
//2. 상점시스템(벡터)
//ㄴ shop 클래스 , item 클래스, 샵은 아이템을 알고있어야하고 
// 캐릭터 클래스 - 인벤토리 클래스
// 내가 (캐릭터가) 샵에들어가면 아이템이 뜰것이고 공격력에 관련된템을누르면 그게 다나오고 사야함 사고나서 내가산 아이템이 인벤토리로 가야함
// 인벤토리 창에서는 장착할수 있어야함 탈착도 되야함 되팔기 기능도 있어야함 파는가격은 살때의 반정도
// 수량제한은 다사면 매진 대충2개있고
// 캐릭터가 아이템을 장착하면 공격력이나 수비력이 그만큼 올라가야함 맨주먹이 공격력이 10인대 공격력이 20이된다 캐릭터 스테이터스 창도있어야함
// 사고팔기, 아이템 장착 탈착, 수량제한


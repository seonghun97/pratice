#include<iostream>

/*
멤버변수는 private
생성자, 소멸자 , 멤버함수는 public
접근자(getter),  설정자 (setter)
*/

class Person
{
private:
	std::string name;
	int age = 0;

public:
	//getter
	std::string getName()const
	{
		return name;
	}
	//setter
	void SetName(const std::string& name) 
	{
		//Person::name = name;
		this->name = name;//this = 자기 자신을 가리키는 포인터
	}
};

int main()
{
	Person p;
	p.SetName("d");
	std::cout << p.getName() << std::endl;
}
/*
요약
- 클래스는 설계도임
- 객체를 찍어내기위한 녀석.
- 구조체와 클래스의 차이는 기본접근제어지시자가 다르다
- 접근제어지시자는 private, public, protected(상속)
- private는 오로지 클래스 내부에서만 접근가능(멤버변수는 이곳에)
- public은 클래스 내, 외부에서 접근이 가능.(외부에 공개할 멤버함수, 생성자, 소멸자)
- protected는 상속관계에서 활용되며 클래스 내부와 상속관계에서 접근을 허용한다.
- 생성자는 기본적으로 무조건 호출되며 없는경우 컴파일러가 알아서 생성해준다
- 생성자는 일반적으로 멤버들을 초기화 할때 사용하며, 멤버 이니셜 라이즈 리스트를 사용하는게
 효율적임. (상수와 참조변수들은 반드시 이녀석을 이용해야함.)
 - 소멸자는생성자와 마찬가지로 자동호출되며(객체가 소멸될때
 이곳에 메모리해제를 할때 사용
 - 생성자 -> 소멸자 호출순서
 - 생성자는 오버로딩이 가능하고 소멸자는 불가능.
 -접근자, 설정자는 데이터 캡슐화를 보존하며 외부에서 변경이가능

 ※const 쓰는 버릇을 기릅시다.
*/

//주말맞이 과제
/*
1.택1)
ㄴ슬라이드, 빙고 , 카드게임
ㄴ셋중 한개를 클래스화 시킬것.
동적할당도 활용

2. 대전게임
클래스로 만들기
플레이어와 몬스터 각각의 클래스가 있다.
기본적으로 둘다 공격력, 방어력, 체력이 있음.
멤버변수는 무조건 private
멤버함수들은 (공격하는함수, 공격당하고 정보를 띄우는함수) public
get,set사용해야함
종료조건은 둘중하나 다이하면 끝


*/
#include<iostream>

using namespace std;
class CParent
{
protected:
	int m_i;

public:
	void SetInt(int _a)
	{
		m_i = _a;
	}
public:
	CParent()
		:m_i(0)
	{}
	~CParent()
	{}
		
};

class CChild : public CParent
{
private:
	float m_f;

public:
	void SetFloat(float _f)
	{
		m_f = _f;
		m_i = 100;
	}
public:
	CChild()
		:m_f(0.f)
	{}
};

void FuncA()
{
	cout << "Function A" << endl;
}
void FuncB()
{
	FuncA();
	cout << "Function B" << endl;
}

int main()
{

	FuncB(); //호출순서는 B > A 실행순서는 A > B
	//초기화는 부모부터
	/*
	- 객체지향 언어 특징
	1. 캡슐화 (은닉성)
	2. 상속
	3. 다향성
	4. 추상화

	상속
	자식 or 부모 클래스는 상속관계에서 다른 클래스의 멤버를 초기화 할 수 없다.
	생성자 호출 순서 자식 > 부모
	생성자 실행 순서, 초기화 순서 부모 - > 자식

	소멸자 실행 및 호출 순서 , 자식 -> 부모

	오버라이딩
	부모 클래스의 멤버함수를 자식쪽에서 재정의 함으로써, 자식 클래스에구현된 기능이 호출되도록한다
	*/
	CParent parent; //parent 사이즈가 4
	CChild child;

	parent.SetInt(10);
	child.SetInt(10);
}
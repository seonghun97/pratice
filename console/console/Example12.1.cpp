#include<iostream>
/*
▶ 정적 바인딩
- 컴파일타입에 함수 호출이 어떤함수로 연결될지 결정하는방식 
- 실행속도가 빠름
- 런타임에 영향이없다

단점 
- 컴파일후 변경불가

▶ 동적바인딩
- 런타임에 함수호출이 어떤함수로 연결될지 결정하는방식
- 바인딩시간이 실행시간까지 미룬다.
- 호출할때 오버라이딩 된 함수를 동적으로 찾아냄
- 정적바인딩 보다 오버헤드 발생

쓰는이유
- 포인터에 의해서 접근이 되었는가에 상관없이 참조된 인스턴스에 실제 클래스형에따라서 재정의된 함수호출이가능 (다형성)


가상함수 선언하면 클래스에서 가상함수테이블을 생성 
그 가상함수테이블은 클래스의 가상함수 테이블의 주소를 저장
그리고 객체가 생성되는순간 객체의 가상함수 테이블의 포인터가 해당클래스의 가상함수테이블을 가리키게되고
객체의 가상함수포인터를 통해서 호출한 함수의 포인터를 찾는다.
이과정이 동적바인딩의 과정
*/

class CPrint
{
public:
	void Print(int a)
	{
		std::cout << "int 출력 " << a << std::endl;
	}
	void Print(double a);
};

class Base
{
public:
	virtual void Show()
	{
		std::cout << "부모 클래스 Show 함수" << std::endl;
	}
	virtual ~Base() = default; //기본구현을 컴파일러한테 만들라하는것
};

class Parent
{
public:
	virtual void Show()
	{
		std::cout << "부모 클래스 Show 함수" << std::endl;
	}
	virtual ~Parent() = default; 
};
class Child : public Parent
{
public:
	void Show()override
	{
		std::cout << "자식클래스 Show" << std::endl;
	}
};
int main()
{
	CPrint c;
	c.Print(10);
	c.Print(20.5);
	//정적바인딩 자료형에 의해 호출되고있음
//-------------------------------
	Parent* pPtr = new Child();
	pPtr->Show();

	delete pPtr;
	//동적 바인딩

}
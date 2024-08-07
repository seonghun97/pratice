#include<iostream>


#pragma region 업,다운캐스팅
/*
Up+Casting
- 자식 클래스의 객체를 부모 클래스타입으로 변환
- 명시적인 타입 변환이 필요 없다.
Down+Casting
- 부모클래스 포인트를 자식클래스타입으로 변환을해서 고유 멤버함수를 사용할수있음
*/
#pragma endregion

class Shape 
{
public:
	virtual void Draw()const
	{
		std::cout << "부모 클래스 Shape" << std::endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "자식 클래스" << std::endl;
	}
	void CircleFunc()
	{
		std::cout << "Circle클래스의 멤버함수" << std::endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw()const override 
	{
		std::cout << "자식 클래스 Rectangle" << std::endl;
	}
	void RectangleFunc()
	{
		std::cout << "Circle클래스의 멤버함수" << std::endl;
	}
};
void Print(const int* value) //const_cast
{
	int* newValue = const_cast<int*>(value);
	*newValue = 100;
}

int main()
{
	/*Shape* shape1;
	shape1 = new Circle();*/
	Shape* shape1 = new Circle();
	Shape* shape2 = new Rectangle();

	shape1->Draw();
	shape2->Draw();
	//자식클래스의 고유 멤버함수를 호출할수없음 그래서 하나의 방법이있음(다운캐스팅)

	Circle* c = dynamic_cast<Circle*>(shape1);

	c->CircleFunc();

	/*
		static_cast 
		dynamic_cast 
		const_cast - 포인터(pointer) 또는 참조형(reference)의 상수성(const)를 잠깐 제거해주는데 사용한다
		reinterpret_cast -  임의의 포인터 타입끼리 변환을 허용하는 캐스트 연산자 
	
		UpdownCasting
	*/
}
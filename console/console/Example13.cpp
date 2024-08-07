#include<iostream>


#pragma region ��,�ٿ�ĳ����
/*
Up+Casting
- �ڽ� Ŭ������ ��ü�� �θ� Ŭ����Ÿ������ ��ȯ
- ������� Ÿ�� ��ȯ�� �ʿ� ����.
Down+Casting
- �θ�Ŭ���� ����Ʈ�� �ڽ�Ŭ����Ÿ������ ��ȯ���ؼ� ���� ����Լ��� ����Ҽ�����
*/
#pragma endregion

class Shape 
{
public:
	virtual void Draw()const
	{
		std::cout << "�θ� Ŭ���� Shape" << std::endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw()const override
	{
		std::cout << "�ڽ� Ŭ����" << std::endl;
	}
	void CircleFunc()
	{
		std::cout << "CircleŬ������ ����Լ�" << std::endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw()const override 
	{
		std::cout << "�ڽ� Ŭ���� Rectangle" << std::endl;
	}
	void RectangleFunc()
	{
		std::cout << "CircleŬ������ ����Լ�" << std::endl;
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
	//�ڽ�Ŭ������ ���� ����Լ��� ȣ���Ҽ����� �׷��� �ϳ��� ���������(�ٿ�ĳ����)

	Circle* c = dynamic_cast<Circle*>(shape1);

	c->CircleFunc();

	/*
		static_cast 
		dynamic_cast 
		const_cast - ������(pointer) �Ǵ� ������(reference)�� �����(const)�� ��� �������ִµ� ����Ѵ�
		reinterpret_cast -  ������ ������ Ÿ�Գ��� ��ȯ�� ����ϴ� ĳ��Ʈ ������ 
	
		UpdownCasting
	*/
}
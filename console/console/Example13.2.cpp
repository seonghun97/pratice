#include<iostream>

template<typename T>
class Shape
{
public:
	virtual void draw()const = 0; //�����Լ�
	virtual T area()const = 0; //�����Լ�
};

template <typename T>
class Circle :public Shape<T>
{
private:
	T radius;
public:
	Circle(T r) :radius(r) {}

	void draw()const override
	{
		std::cout << "���� ������ : " << radius << std::endl;
	}
	T area()const override 
	{
		return 3.14 * radius * radius;
	}
};
template <typename T>
class Rectangle : public Shape<T>
{
private:
	T width;
	T height;
public:
	Rectangle(T w, T h) :width(w),height(h) {}
	void draw()const override
	{
		std::cout << "���� :" << width << "���� :" << height << std::endl;
	}
	T area()const override
	{
		return width * height;
	}
};

//�Լ� ���ø� : Shape �����͸� ���ڷ� �޾Ƽ� draw�� area�� ����ϰ� ������
template<typename T>
void Show(const Shape<T>* shape)
{
	shape->draw();
	std::cout << "���� " << shape->area() << std::endl;
}

int main()
{
	Circle<double> circle(3.14);
	Rectangle<int> rectangle(4, 3);
	Show(&circle);
	Show(&rectangle);
}


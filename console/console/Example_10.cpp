#include<iostream>


#pragma region class
/*
�� Class
- ��ü���� ���α׷��� ?
���츮�� ��� �ִ� �������谡 ��ü��� �����Ǿ� �ִ°�ó��
����Ʈ��� ��ü�� �����ϴ� ���
�����,TV,��Ź�� , �������. ���� ��ü�� ������.
�������ѱ���� �����ϰ� �ٸ� ��ü��� ��ȣ�ۿ�.

-��ü��
��Ŭ���� - > Ʋ�̳� ���赵 -> ��ü�� �����ϴ� Ʋ�̳� ���赵
����ü�� ���赵�� ������� ��üȭ ��Ų�� -> �׷��� ����ϴϱ�


	
	����ü�� Ŭ������ ���� ����Ʈ �������� �����ڰ� �ٸ�
	private, public, protected

	private : Ŭ���� ���ο����� ��������
	 �����ܾ��� �������

	public : �Լ�, ������, �Ҹ���


	protected : Ŭ���� ���ο� ���Ŭ���������� ��������

	��������			Ŭ��������			Ŭ�����ܺ�			���Ŭ����
	private				O					X					X
	public				O					O					O
	protected			O					X					O


*/



#pragma endregion
//����ü 
//struct Circle //�Ϲ������� public
//{
//
//	int radius;
//	std::string color;
//
//	double calArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};

//Ŭ����
// ����ü�� Ŭ������ ����ü ���� �ٸ���
//class Circle1 // �Ϲ������� private
//{
//public:
//	int radius;
//	std::string color;
//	double calArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//class MyClass //���������� private�� �Ʒ�����
//{
//public:
//	
//
//private:
//
//};

//
//class Student 
//{
//private:
//
//public:
//
//	void print() { std::cout << "��Ʃ��Ʈ Ŭ������ ����Ʈ �Լ�"; }
//	void print(int a, int b) {};
//	void print(std::string str = "����Ʈ �Ű�����") { std::cout << str << std::endl; }
//
//	//Ŭ���� ���ο� �Լ� ������
//	int Sum(int a, int b);
//};



/*

�簢���� Ŭ������ �����ÿ�
-����Լ��δ� �簢���� ���̸� ���.
����±��� �غ���

*/
class Rect
{

public:
	void RectArea()
	{
		result = width * height;
	}
	void print() { std::cout <<"���� :"<<width<<"���� :" <<height << " = " << result; }

	void set(int _width, int _height)
	{
		width =_width;
		height = _height;
	}

private:
	int width = 0;
	int height = 0;
	int result = 0;
};



int main()
{
	////����ü
	//Circle c;
	//c.radius = 5;

	////Ŭ����
	//Circle1 cc;
	//cc.radius = 5;  

	Rect r;
	r.set(5, 3);

	r.RectArea();
	r.print();
}

//int Student::Sum(int a, int b)
//{
//	return 0;
//}
//

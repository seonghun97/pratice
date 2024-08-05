#include<iostream>


#pragma region class
/*
▶ Class
- 객체지향 프로그래밍 ?
ㄴ우리가 살고 있는 실제세계가 객체들로 구성되어 있는것처럼
소프트웨어도 객체로 구성하는 방법
ㄴ사람,TV,세탁기 , 냉장고등등. 많은 객체가 존재함.
ㄴ고유한기능을 수행하고 다른 객체들과 상호작용.

-객체란
ㄴ클래스 - > 틀이나 설계도 -> 객체를 정의하는 틀이나 설계도
ㄴ객체는 설계도를 기반으로 실체화 시킨것 -> 그래야 사용하니까


	
	구조체와 클래스의 차이 디폴트 접근제어 지시자가 다름
	private, public, protected

	private : 클래스 내부에서만 참조가능
	 ㄴ숨겨야할 멤버변수

	public : 함수, 생성자, 소멸자


	protected : 클래스 내부와 상속클래스에서만 참조가능

	접근제어			클래스내부			클래스외부			상속클래스
	private				O					X					X
	public				O					O					O
	protected			O					X					O


*/



#pragma endregion
//구조체 
//struct Circle //암묵적으로 public
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

//클래스
// 구조체와 클래스가 도대체 뭐가 다른가
//class Circle1 // 암묵적으로 private
//{
//public:
//	int radius;
//	std::string color;
//	double calArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//class MyClass //관습적으로 private는 아래에씀
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
//	void print() { std::cout << "스튜던트 클래스의 프린트 함수"; }
//	void print(int a, int b) {};
//	void print(std::string str = "디폴트 매개변수") { std::cout << str << std::endl; }
//
//	//클래스 내부에 함수 원형만
//	int Sum(int a, int b);
//};



/*

사각형의 클래스를 만들어보시오
-멤버함수로는 사각형의 넓이를 계산.
ㄴ출력까지 해보자

*/
class Rect
{

public:
	void RectArea()
	{
		result = width * height;
	}
	void print() { std::cout <<"길이 :"<<width<<"높이 :" <<height << " = " << result; }

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
	////구조체
	//Circle c;
	//c.radius = 5;

	////클래스
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

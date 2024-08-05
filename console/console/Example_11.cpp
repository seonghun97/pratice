#include<iostream>

using namespace std;
#pragma region static, extern
/*
▶ static 
- 전역변수에 붙는 static과 함수 내부에서 붙는 static 클래스 멤버변수의 static 성격이 다르다


▶ extern
- 외부변수

- 다른파일에 정의된 전역변수를 사용할수있게해준다

단점
-유지보수가 힘듬




클래스 내부에서 static으로 선언된 변수는 해당 클래스의
모든 인스턴스에서 공유됨. 클래스의 인스턴스 끼리 공통으로 사용되는 변수
클래스의 인스턴스가 없이도 가능함.
-----------------------------------------------------------
선언 방법

클래스 내부에서 static을 사용하여 선언
이 선언은 컴파일러한테 해당 클래스에 정적 멤버변수가 있음을 알려줌

외부에서 초기화 해야함
:: 범위 지정연산자 를 사용해서 초기화를 해야한다.
-----------------------------------------------------------

*/
#pragma endregion

#pragma region
//staticVariable.cpp안에 있는 전역변수
//extern int num1;
//
//void Count();	
//
//static int sNum; //스태틱은 0으로 초기화 안해줘도 알아서 초기화 해줌
//int main()
//{
//	Count();
//	Count();
//	Count();
//}
//
//void Count()
//{
//	static int x = 0; // 정적
//	int y = 0; //지역
//	x = x + 1;
//	y = y + 1;
//
//	std::cout << "x값 : " << x << "y값 :" << y << std::endl;
//
//}
#pragma endregion

class Character
{
	private:
		static int count;
		
	public:
		Character() 
		{
			count++;
		}
		static void PrintCount() //정적 멤버함수 클래스에 인스턴스없이 호출할수있음 정적함수에서는 일반 멤버함수를 호출할수없음
		{
			cout << count << endl;
			//cout << num << endl; (err) // static멤버함수(정적함수) 에서는 일반 멤버변수를 호출할수없음
		}
};

int Character::count = 0;

int main()
{
	Character::PrintCount();
	Character baba;
	Character::PrintCount();
	Character war;
	Character::PrintCount();
}
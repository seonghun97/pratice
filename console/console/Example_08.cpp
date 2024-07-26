#include<iostream>

using namespace std;

/*
- 사용자 정의 자료형
ㄴ구조체, 공용체, 열거형, 클래스가 있다.

*/
#pragma region C_enum (열거형)
/*
1. 열거형

- 관련된 상수들을 하나의 그룹으로 묶는다.
- 코드의 가독성을 높이고 의미있는 이름을 부여할수 있다. 

▶ 기본 선언 방법

enum Color{Red, Green, White};
            0     1      2
명시적인 값을 할당

enum Direction {Left, Right = 2,  Up, Down};
	             0      2          3     4




enum Color { Red, Green, White };
enum RGB { Red, Green, White }; // red가 두개있어서 오류 ★

enum Direction { Left, Right = 2, Up, Down };
int main()
{
	//Color color = Red;  //★

	//if (color==Red)
	//{
	//	cout << "빨강" << endl;
	//}
	//else if (color==Green)
	//{
	//	cout << "녹색" << endl;
	//}

	//Direction key = Left;

	//switch (key)
	//{
	//case Left:
	//	cout << "왼쪽으로 이동" << endl;
	//	break;

	//case Right:
	//	cout << "오른쪽으로 이동" << endl;
	//	break;

	//case Up:
	//	cout << "위로 이동" << endl;
	//	break;

	//case Down:
	//	cout << "아래로 이동" << endl;
	//	break;
	//}

	//int red = Red; // 가능 왜냐하면 암시적 형변환가능
}
*/
#pragma endregion
#pragma region enumClass

/*
▶ enumclass

- enum class는 자신만의 스코프를 가지고 있다.
- 같은 이름의 열거형 상수가 다른 열거형과 충돌하지 않는다.
- 타입의 안정성을 보장함

enum class Color
{
	RED, GREEN, WHITE
};
enum class SkillType
{
	Fire,
	Ice,
	Lighting
};
void userSkill(SkillType skill);

int main()
{
	//범위 지정을 명확히 해줘야 한다.
	//Color color = RED;
	Color color = Color::RED;  

	//타입의 안정성을 보장하기 위해 암시적으로 형변환을 허용하지않는다.
	//int c = Color::RED; 
	//명시적으로 형변환을 해줘야한다.
	int c = static_cast<int>(Color::RED);
}

void userSkill(SkillType skill)
{
	switch (skill)
	{
	case SkillType::Fire:
		break;
	case SkillType::Ice:
		break;
	case SkillType::Lighting:
		break;
	default:
		break;
	}
}

*/
#pragma endregion
/*
▶ 요약
- enum은 열거형 상수가 전역스코프에 해당함.  암묵적인 형변환을 허용 -> 타입에 대한 안정성이낮다

- enumClass는 열거형 자체의 스코프에 해당함. 암묵적인 형변환을 허용하지 않는다. -> 타입에 대한 안정성을 보장한다.
*/


#pragma region 구조체 : Struck
/*
▶ 구조체 : Struct
- 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의

<구조체 선언>
struct 구조체 이름 {구조체 내용};
- 구조체 내용으로는 변수와 함수가 포함이 가능
- 구조체에 포함한 변수를 멤버 변수, 포함된 함수를 멤버함수라고 한다.
*/
#pragma endregion
//struct Student
//{
//	string name;
//	int math;
//	int english;
//	int science;
//
//	float Average()
//	{
//		return(math + english + science) / 3.0f;
//	}
//};
//
//struct Point
//{
//	int x;
//	int y;
//	void print();	
//};
//
//// 생성자가 있는 구조체
//// <구조체 생성자>
//// 반환형 없이 구조체의 이름의 함수를 구현하여 사용
//
//struct Monster
//{
//	string name;
//	int hp;
//	int mp;
//
//	//매개변수가없는 생성자
//	Monster()
//	{
//		name = "몬스터";
//		hp = 10;
//		mp = 20;
//	}
//	//매개변수가 있는 생성자
//	Monster(string _name, int _hp, int _mp)
//	{
//		name = _name;
//		hp = _hp;
//		mp = _mp;
//	}
//	// 생성자 오버로딩
//
//};
//
//
//int main()
//{
//	//구조체 변수
//	Point P;
//	P.x = 10;
//	P.y = 20;
//
//	cout << "구조체 P.x의 값 :" << P.x << endl;
//	cout << "구조체 P.y의 값 :" << P.y << endl;
//	//P.print();
//
//	Point p1 = { 50,120 }; //생성과 동시에 초기화
//
//	cout << endl << endl;
//
//	Monster monster;
//	Monster dragon = Monster("드래곤", 250, 100);
//	Monster slime = Monster("슬라임", 10, 3);
//
//
//	cout << monster.name << endl;
//	cout << monster.hp << endl;
//	cout << monster.mp << endl;
//
//	cout << "=========================" << endl;
//
//	cout << dragon.name << endl;
//	cout << dragon.hp << endl;
//	cout << dragon.mp << endl;
//
//	cout << "=========================" << endl;
//
//	cout << slime.name << endl;
//	cout << slime.hp << endl;
//	cout << slime.mp << endl;
//}
//
//
//void Point::print()
//{
//	cout << "포인트 구조체 멤버 함수임";
//}
// 지금해볼것.
//구조체를 활용해서 가족관계를 출력해보세요

struct Family
{
	string familyr;
	string name;
	int age;


	Family(string _familyr, string _name, int _age)
	{
		familyr = _familyr;
		name = _name;
		age = _age;
	}

};

int main()
{
	Family dad = { "부" , "박성건" ,53 };
	Family mom = { "모" , "임미경" ,58 };
	Family sister = { "동생" , "박샘이" ,24 };

	cout << dad.familyr << endl;
	cout << dad.name << endl;
	cout << dad.age << endl;

	cout << "=========================" << endl;

	cout << mom.familyr << endl;
	cout << mom.name << endl;
	cout << mom.age << endl;

	cout << "=========================" << endl;

	cout << sister.familyr << endl;
	cout << sister.name << endl;
	cout << sister.age << endl;

	
}
/*
▶ 자료형 재정의
- 자료형의 별칭을 생성하고 실제 자료형 이름 대신 사용
<typedef 자료형 별칭>
//고전 스타일
	typedef int myIn_t;					//자료형 재정의는 _t로 끝내는것을 권장
	typedef unsigned long long uint64_t //복잡한 자료형의 간소화 버전

//C++11 도입된 스타일	
	using integer = int;

*/
 
/*
과제 
1. 카드게임 만들기
트럼프카드는 52장

예를 들어서 만약 다음과 같은 카드가 나왔다면 (출력) 
아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함.
이기는 조건 문양은상관없고 7 과 9를 냈을때 안에 들어오는 숫자를 넣으면 이김
숫자가 같으면 무조건짐

만약 범위안에들어오면 승리(배팅액에 2배)
만약 동일하다면 배팅액만큼 소진
만약 범위안에 들어오지 않는다면 배팅액 * 2차감

조건)한번 사용한 카드는 버려야 됩니다. (사용하지 않는것 뿐)
17판돌리면 자동으로 끝나야함( 3장의 카드를 한턴마다 소비하므로)
소지금 만원이 있다면
최소배팅금액이 있고 내소지금이 최소배팅금액보다 작으면안됨

♧7가 나왔다면 두번다시 ♧7 는 사용하지 않는다.
A =1 J = 11 Q = 12 K = 13


♧7		♤8		♡9
		ㄴ 보여지는 카드가아님

♤8

♧

♤

♡

◇


내일 테스트 시험
ㄴ 쉬움 ... 하다못해 객관식 문제도 있음

주말과제
1. 빙고게임
	
	1
		5
			25

내가 1을 입력하면 숫자는 5x5 


	ㆍ
		5
			25

이렇게 바뀜
1줄을 만들면
빙고1줄 완성.  가로세로대각선 전부 체크해야함 종료조건 3줄되면 완성


2. 슬라이드 퍼즐게임 만들기
1
	2
		4
			5	8
			9	*	
시작위치는 상관없음  내가왼쪽키를누르면
1
	2
		4
			5	8
			*	9
조건 = 칸을 벗어나면 안됨
배열 스왑
종료조건 없음





*/
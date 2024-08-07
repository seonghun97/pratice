#include<iostream>

/*
Template 
- 타입에 구애 받지 않음.
- 일반 적으로 변수 ,함수와 특정 데이터를 사용하는 실체들의 대부분을 선언하기를 원함.
- 하지만 데이터형이 달라지더라도 동일한 코드를 갖는 경우가 많다.
- 정렬 등 기타등등 뭔가 같은 데이터 구조의 동작을 구현한다면 취급하는 데이터형이 달라지더라도
코드는 거의 동일함
- 단순무식하게 동일한 동작을 계속해서 구현할수 있긴 하지만
ㄴ 문제는 같은 동작을 계속해서 구현한다면 결국엔 같은 실수를 반복할수 있다.
ㄴ 또한 복잡하지만 더나은 할고리즘이 있더라도 많은 실수를 하게 될수도 있게 때문에 결국엔 피할수도 있다.

그래서 템플릿이라는 도구를 사용하면 문제를 해결 할수있다.
1. 아직 정해지지 않은 다양한 데이터형에 대해서 함수나 클래스를 정의할수 있다.
2. 템플릿을 사용하면 묵시적, 명시적 데이터형을 인자로 알린다.
3. 

<함수템플릿>
- 함수에 필요한 자료형을 선언하고 함수 호출시 자료형을 지정해서 사용한다.
- 템플릿으로 작성한 함수를 호출하는 때에 자료형 맞는 함수를 생성함.

<클래스 템플릿>
- 다양한 데이터 타입을 지원하는 클래스를 정의할수 있게 해줌
- 템플릿 매개변수를 통해 클래스의 멤버변수와 멤버함수의 타입을 일반화 할수 있다.
- 클래스에 필요한 자료형을 선언하고 클래스 자료형을 지정함
- 템플릿으로 작성한 함수를 호출하는 때에 자료형 맞는 클래스 를 생성함.
*/	
int GetMax(int x, int y)
{
	if (x > y)return x;
	else return y;
}
float GetMax(float x, float y)
{
	if (x > y)return x;
	else return y;
}
template <typename T> //템플릿에 t쓰는것은 관습
T GetMax(const T x, const T y)
{
	if (x > y)return x;
	else return y;
}
template <typename T>
T const& max(T const& a,T const& b )
{
	return a < b ? b : a;
}
//int const& max(int const& a, int const& b)
//{
//	return a < b ? b : a;
//}
template <typename T>
void Output(const T data)
{
	std::cout << "데이터 : " << data << std::endl;
}
template <typename T>
void Output1(T a, T b)
{
	std::cout << a << ", " << b << std::endl;
}
template <typename T1, typename T2>
//타입네임이 하나인경우에는 데이터형이 동일하지 않으면 오류가 나옴
void Output2(T1 a, T2 b)
{
	std::cout << a << ", " << b << std::endl;
}

template<typename T>
class Box
{
private:
	T data;
public:
	void SetData(T data) { this->data = data; }
	T GetData() { return data; }
	//void Print();
};

template<typename T1, typename T2>
class Box2
{
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirstData();
	T2 GetSecondData();

	void SetFirst(T1 val) { firstData = val; }
	void SetSecond(T2 val) { secondData = val; }
};

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirstData()
{
	return firstData;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecondData()
{
	return secondData;
}
int main()
{
	Output(1);
	Output(2.5);
	Output1(1, 1);
	Output2(1, 1.5);

	Box<int>box;
	box.SetData(100);
	std::cout << box.GetData() << std::endl;
	Box<double>box1;
	std::cout << box1.GetData() << std::endl;

	Box2<int, double>box2;
	box2.SetFirst(10);
	box2.SetSecond(20.5);

	std::cout << box2.GetFirstData() << " , " << box2.GetSecondData() << std::endl;

}


#include <iostream>

#pragma region 복사 생성자
/*
==============================
▶ 복사 생성자
- 동일한 클래스의 객체를 복사해서 생성할때 사용하는 생성자



얕은복사

-객체를 복사할때 객체의 모든 멤버변수를 단순히 복사.
만약 멤버변수가 포인터인 경우라면 포인터의 주소값 복사-> 같은 메모리 영역을 가리키게 됨.
-> 만약 한객체에서 해당메모리를 수정하면 영향을 받음
-> 두 객체가 같은 메모리 주소를 가리키기 때문에 한 객체가 소멸되면서 메모리를 해제
하면 다른객체는 더 이상 유효하지 않은 메모리를 가리키게 되어 문제가 발생됨.

-객체의 모든 멤버변수를 복사한다
-멤버변수가 포인터가 있다면 포인터의 주소값만 복사(같은 메모리영역을 가리킴)
만약 내가 kim이라는 녀석을남기고 메모리를 해제하는 순간 다른객체에서는 더이상은 유효하지않은 메모리를 갖게됨
그래서 나온게 깊은복사

깊은 복사
- 객체가 동적메모리를 사용할때 필요함.
- 원본객체가 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는 것을 의미함.
-> 다른메모리를 사용하게 되므로 서로 영향을 주지 않는다.

*/
#pragma endregion

#pragma region 얕은복사
//class Person
//{
//public:
//	Person(int a) :age(a) {};
//
//	//컴파일러가 생성하는 기본복사 생성자 형태
//	//없어도 컴파일러가 삽입한다.
//	//복사 생성자
//	Person(const Person& other) :age(other.age) 
//	{
//
//	}
//public:
//	void SetAge(int age) { this->age = age; }
//	int GetAge() { return age; }
//
//
//private:
//	int age;
//};
//
//int main()
//{
//	Person kim(21);
//	Person clone(kim);//복사생성자 호출
//}





//class MyArray
//{
//private:
//	int* data; 
//	int size;
//
//public:
//	MyArray(int size) :size(size), data(new int[size]) {}
//	~MyArray()
//	{
//		//delete[] data; < 오류뜨는이유는 메모리를 공유했는대 없는거를 또지우려고하니까 오류
//	}
//
//	void SetValue(int index, int value) { data[index] = value; }
//	int GetValue(int index) { return data[index]; }
//};
//
//
//int main()
//{
//	MyArray arr1(10);
//	arr1.SetValue(0, 42);
//
//	MyArray arr2(arr1);
//
//	std::cout << "arr1 값 : " << arr1.GetValue(0) << std::endl;
//	std::cout << "arr2 값 : " << arr2.GetValue(0) << std::endl;
//
//	arr1.SetValue(0, 100);
//	std::cout << "arr1 값(변경후) : " << arr1.GetValue(0) << std::endl;
//	std::cout << "arr2 값(변경후) : " << arr2.GetValue(0) << std::endl;
//
//}
#pragma endregion


#pragma region 깊은복사
//새로운 공간을 만들어놓고 데이터를 넣어주면됨

class MyArray
{
private:


public:
	int* data;
	int size;
	MyArray(int size);
	//깊은복사
	MyArray(const MyArray& other);
	~MyArray();


};

int main()
{
	MyArray arr(10);
	arr.data[0] = 1;

	std::cout << arr.data[0] << std::endl;

	//MyArray clone(arr);아래와 같은뜻 

	MyArray clone = arr;


	arr.data[0] = 2;
	std::cout << arr.data[0] << std::endl;

}

MyArray::MyArray(int size)
{
	this->size = size;
	data = new int[size];//생성자에서 동적 메모리 할당
}


//복사 생성자 정의(깊은복사)
MyArray::MyArray(const MyArray& other)
{
	this->size = other.size;
	this->data = new int[other.size];// 새로운 공간 할당
	for (int i = 0; i < size; i++) //데이터복사
	{
		this->data[i] = other.data[i];
	}
}

MyArray::~MyArray()
{
	if (data != nullptr)delete[] this->data;
	data = nullptr;
}

#pragma endregion


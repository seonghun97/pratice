#include <iostream>

#pragma region ���� ������
/*
==============================
�� ���� ������
- ������ Ŭ������ ��ü�� �����ؼ� �����Ҷ� ����ϴ� ������



��������

-��ü�� �����Ҷ� ��ü�� ��� ��������� �ܼ��� ����.
���� ��������� �������� ����� �������� �ּҰ� ����-> ���� �޸� ������ ����Ű�� ��.
-> ���� �Ѱ�ü���� �ش�޸𸮸� �����ϸ� ������ ����
-> �� ��ü�� ���� �޸� �ּҸ� ����Ű�� ������ �� ��ü�� �Ҹ�Ǹ鼭 �޸𸮸� ����
�ϸ� �ٸ���ü�� �� �̻� ��ȿ���� ���� �޸𸮸� ����Ű�� �Ǿ� ������ �߻���.

-��ü�� ��� ��������� �����Ѵ�
-��������� �����Ͱ� �ִٸ� �������� �ּҰ��� ����(���� �޸𸮿����� ����Ŵ)
���� ���� kim�̶�� �༮������� �޸𸮸� �����ϴ� ���� �ٸ���ü������ ���̻��� ��ȿ�������� �޸𸮸� ���Ե�
�׷��� ���°� ��������

���� ����
- ��ü�� �����޸𸮸� ����Ҷ� �ʿ���.
- ������ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ� ���� �ǹ���.
-> �ٸ��޸𸮸� ����ϰ� �ǹǷ� ���� ������ ���� �ʴ´�.

*/
#pragma endregion

#pragma region ��������
//class Person
//{
//public:
//	Person(int a) :age(a) {};
//
//	//�����Ϸ��� �����ϴ� �⺻���� ������ ����
//	//��� �����Ϸ��� �����Ѵ�.
//	//���� ������
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
//	Person clone(kim);//��������� ȣ��
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
//		//delete[] data; < �����ߴ������� �޸𸮸� �����ߴ´� ���°Ÿ� ����������ϴϱ� ����
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
//	std::cout << "arr1 �� : " << arr1.GetValue(0) << std::endl;
//	std::cout << "arr2 �� : " << arr2.GetValue(0) << std::endl;
//
//	arr1.SetValue(0, 100);
//	std::cout << "arr1 ��(������) : " << arr1.GetValue(0) << std::endl;
//	std::cout << "arr2 ��(������) : " << arr2.GetValue(0) << std::endl;
//
//}
#pragma endregion


#pragma region ��������
//���ο� ������ �������� �����͸� �־��ָ��

class MyArray
{
private:


public:
	int* data;
	int size;
	MyArray(int size);
	//��������
	MyArray(const MyArray& other);
	~MyArray();


};

int main()
{
	MyArray arr(10);
	arr.data[0] = 1;

	std::cout << arr.data[0] << std::endl;

	//MyArray clone(arr);�Ʒ��� ������ 

	MyArray clone = arr;


	arr.data[0] = 2;
	std::cout << arr.data[0] << std::endl;

}

MyArray::MyArray(int size)
{
	this->size = size;
	data = new int[size];//�����ڿ��� ���� �޸� �Ҵ�
}


//���� ������ ����(��������)
MyArray::MyArray(const MyArray& other)
{
	this->size = other.size;
	this->data = new int[other.size];// ���ο� ���� �Ҵ�
	for (int i = 0; i < size; i++) //�����ͺ���
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


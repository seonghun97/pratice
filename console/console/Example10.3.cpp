#include<iostream>

using namespace std;
#pragma region �Ҹ���
/*
�� �Ҹ���
- ��ü�� �Ҹ�ɶ� �ڵ����� ȣ��Ǵ� ����Լ�.
- �Ű������� ������ ���� ��ȯ���� ���ó� ���� �����ε� �Ұ���
*/
#pragma endregion


class MyClass
{
public:
	MyClass(int size); //������
	~MyClass();//�Ҹ���

private:
	int* data;
};

//������
MyClass::MyClass(int size)
{
	data = new int[size];
	cout << "���� ������ ����~~ ȣ��!" << endl;
}

//�Ҹ���
MyClass::~MyClass()
{
	delete[] data;//�ݳ�
	data = nullptr;
	cout << "���� �Ҹ�����~ ȣ��!" << endl;
}


int main()
{
	MyClass* m = new MyClass(10);
	delete m;
	
}

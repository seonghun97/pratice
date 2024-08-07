#include<iostream>

using namespace std;
class CParent
{
protected:
	int m_i;

public:
	void SetInt(int _a)
	{
		m_i = _a;
	}
public:
	CParent()
		:m_i(0)
	{}
	~CParent()
	{}
		
};

class CChild : public CParent
{
private:
	float m_f;

public:
	void SetFloat(float _f)
	{
		m_f = _f;
		m_i = 100;
	}
public:
	CChild()
		:m_f(0.f)
	{}
};

void FuncA()
{
	cout << "Function A" << endl;
}
void FuncB()
{
	FuncA();
	cout << "Function B" << endl;
}

int main()
{

	FuncB(); //ȣ������� B > A ��������� A > B
	//�ʱ�ȭ�� �θ����
	/*
	- ��ü���� ��� Ư¡
	1. ĸ��ȭ (���м�)
	2. ���
	3. ���⼺
	4. �߻�ȭ

	���
	�ڽ� or �θ� Ŭ������ ��Ӱ��迡�� �ٸ� Ŭ������ ����� �ʱ�ȭ �� �� ����.
	������ ȣ�� ���� �ڽ� > �θ�
	������ ���� ����, �ʱ�ȭ ���� �θ� - > �ڽ�

	�Ҹ��� ���� �� ȣ�� ���� , �ڽ� -> �θ�

	�������̵�
	�θ� Ŭ������ ����Լ��� �ڽ��ʿ��� ������ �����ν�, �ڽ� Ŭ������������ ����� ȣ��ǵ����Ѵ�
	*/
	CParent parent; //parent ����� 4
	CChild child;

	parent.SetInt(10);
	child.SetInt(10);
}
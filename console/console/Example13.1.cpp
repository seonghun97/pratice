#include<iostream>

/*
Template 
- Ÿ�Կ� ���� ���� ����.
- �Ϲ� ������ ���� ,�Լ��� Ư�� �����͸� ����ϴ� ��ü���� ��κ��� �����ϱ⸦ ����.
- ������ ���������� �޶������� ������ �ڵ带 ���� ��찡 ����.
- ���� �� ��Ÿ��� ���� ���� ������ ������ ������ �����Ѵٸ� ����ϴ� ���������� �޶�������
�ڵ�� ���� ������
- �ܼ������ϰ� ������ ������ ����ؼ� �����Ҽ� �ֱ� ������
�� ������ ���� ������ ����ؼ� �����Ѵٸ� �ᱹ�� ���� �Ǽ��� �ݺ��Ҽ� �ִ�.
�� ���� ���������� ������ �Ұ����� �ִ��� ���� �Ǽ��� �ϰ� �ɼ��� �ְ� ������ �ᱹ�� ���Ҽ��� �ִ�.

�׷��� ���ø��̶�� ������ ����ϸ� ������ �ذ� �Ҽ��ִ�.
1. ���� �������� ���� �پ��� ���������� ���ؼ� �Լ��� Ŭ������ �����Ҽ� �ִ�.
2. ���ø��� ����ϸ� ������, ����� ���������� ���ڷ� �˸���.
3. 

<�Լ����ø�>
- �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ��� �ڷ����� �����ؼ� ����Ѵ�.
- ���ø����� �ۼ��� �Լ��� ȣ���ϴ� ���� �ڷ��� �´� �Լ��� ������.

<Ŭ���� ���ø�>
- �پ��� ������ Ÿ���� �����ϴ� Ŭ������ �����Ҽ� �ְ� ����
- ���ø� �Ű������� ���� Ŭ������ ��������� ����Լ��� Ÿ���� �Ϲ�ȭ �Ҽ� �ִ�.
- Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� ������
- ���ø����� �ۼ��� �Լ��� ȣ���ϴ� ���� �ڷ��� �´� Ŭ���� �� ������.
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
template <typename T> //���ø��� t���°��� ����
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
	std::cout << "������ : " << data << std::endl;
}
template <typename T>
void Output1(T a, T b)
{
	std::cout << a << ", " << b << std::endl;
}
template <typename T1, typename T2>
//Ÿ�Գ����� �ϳ��ΰ�쿡�� ���������� �������� ������ ������ ����
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


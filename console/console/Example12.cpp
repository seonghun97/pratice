#include<iostream>

#pragma region ������
/*
�� ������
- ��ü�� �Ӽ��̳� ����� ��Ȳ�� ���� �������� ���¸� ������ �ִ� ����

VirtualFunction
�� ��Ӱ��迡 �ִ� Ŭ�������� �θ�Ŭ������ �Լ��� �ڽ� Ŭ�������� ������(�������̵�)
�ϰ� �θ�Ŭ������ �����ͳ� ������ ���� �ڽ�Ŭ������ �޼��� ȣ��


*/
#pragma endregion
#include"Bike.h"
#include"Car.h"

int main() 
{
	Vehicle* v;
	//�θ��� �����ͷ� �ڽ�Ŭ���� �� â�� (�������ε�)
	v = new Car("������");
	v->Move();
	delete v;

	v = new Bike("�������");

	v->Move();
	delete v;
}
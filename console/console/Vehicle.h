#pragma once
#include<iostream>
//�θ�Ŭ����
class Vehicle
{
protected:
	std::string name;
public:
	Vehicle(const std::string& n);
	//�����Լ� virtual �� ���� �Ҹ��ڿ� �ٿ������
	//������ �������̶�°��� Ȱ���Ҷ� ��ü�� �ùٸ��� ��Ȯ�ϰ� ������ �ɼ��ֵ��� ����������
	//�Ⱦ��� �⺻Ŭ������ �Ҹ��ڸ�ȣ��ǰ� �ڽ�Ŭ������ �Ҹ��ڰ� ȣ���������
	//���� �ڽ�Ŭ������ �������� �Ҵ��Ѱ� �ִٸ� �����ؾ���
	virtual ~Vehicle();

	virtual void Move()const = 0;
	//virtual void Move()const =0; //���� �����Լ�

	



};


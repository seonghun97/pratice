#pragma once
#include<iostream>
//virtual void Move()const = 0;
// ���� �����Լ� : �����ϰ� ������������
// ���������Լ��� �Ѱ� �̻��� �����ϰ� �ִ�Ŭ������ �߻�Ŭ������� �Ҹ���.
// �������� �������ִ�
// Ư���Լ��� ������ ����ȭ��Ŵ

//�߻�Ŭ���� : �ν��Ͻ�ȭ ��ų������
// �ٸ� Ŭ�������� ��ӹ޾ƾ��ϴ� �⺻ �������̽��� �⺻������ �����ϴ� ���
// ������, �ڵ� ���뼺...
// Ư�� �Լ����� �ڽ�Ŭ������ ���� �����ǵ��� �����Ѵ�

//�߻�Ŭ����
class Unit0806 
{
protected:
	std::string name;
	int health = 0;
public:
	Unit0806(const std::string& n, const int h);
	virtual~Unit0806();

public:
	//�����Լ�
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;




};


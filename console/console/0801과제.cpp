#include<stdio.h>
#include<iostream>
/*
����ü�� Ȱ���� �л����� ����ϱ�
�� �л������� ����ϴ� �Լ�
�� �л������� �߰��ϴ� �Լ�
void(����ü)
void(Student& s)
{
	���縻�� �����������
}
*/
void stdadd(char, char, int ,char);

struct Student 
{
	char name[10];
	char addr[30];
	int Age;
	char phNum[15];


};

//�л����� �߰��Լ�
struct AddStudent
{

};



int main()
{
	std::cout << "�л� ���� ����ϱ�" << std::endl;
	Student st1 = { "��ö��", "õȣ", 15, "01051475514" };
	stdadd;


}

void stdadd(char, char, int, char)
{
	Student st1 = { "��ö��", "õȣ", 15, "01051475514" };
	std::cout << st1.name << st1.addr << st1.Age << "\t" << st1.phNum << std::endl;
}

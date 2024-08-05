#include <iostream>

using namespace std;

// �л� ������ �����ϴ� ����ü
struct Student
{
    string name;
    string addr;
    int age;
    string phNum;
};

// �л� ������ �߰��ϴ� �Լ�
void addStudent(Student& s, string name, string addr, int age, string phNum)
{
    s.name = name;
    s.addr = addr;
    s.age = age;
    s.phNum = phNum;
}

// �л� ������ ����ϴ� �Լ�
void printStudent(Student& s)
{
    cout << "�̸�: " << s.name << endl;
    cout << "�ּ�: " << s.addr << endl;
    cout << "����: " << s.age << endl;
    cout << "��ȭ��ȣ: " << s.phNum << endl;
    cout << "-----------------------" << endl;
}

int main()
{
    Student students[3];

    addStudent(students[0], "��ö��", "õȣ��", 15, "010-5147-5514");
    addStudent(students[1], "�迵��", "����", 16, "010-1234-5678");
    addStudent(students[2], "�̹�ȣ", "��ϵ�", 17, "010-9876-5432");

    cout << "�л� ���� ����ϱ�" << endl;
    for (int i = 0; i < 3; ++i)
    {
        printStudent(students[i]);
    }

    return 0;


}
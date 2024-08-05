#include <iostream>

using namespace std;

// 학생 정보를 저장하는 구조체
struct Student
{
    string name;
    string addr;
    int age;
    string phNum;
};

// 학생 정보를 추가하는 함수
void addStudent(Student& s, string name, string addr, int age, string phNum)
{
    s.name = name;
    s.addr = addr;
    s.age = age;
    s.phNum = phNum;
}

// 학생 정보를 출력하는 함수
void printStudent(Student& s)
{
    cout << "이름: " << s.name << endl;
    cout << "주소: " << s.addr << endl;
    cout << "나이: " << s.age << endl;
    cout << "전화번호: " << s.phNum << endl;
    cout << "-----------------------" << endl;
}

int main()
{
    Student students[3];

    addStudent(students[0], "박철수", "천호동", 15, "010-5147-5514");
    addStudent(students[1], "김영희", "강동", 16, "010-1234-5678");
    addStudent(students[2], "이민호", "상암동", 17, "010-9876-5432");

    cout << "학생 정보 출력하기" << endl;
    for (int i = 0; i < 3; ++i)
    {
        printStudent(students[i]);
    }

    return 0;


}
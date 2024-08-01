#include<stdio.h>
#include<iostream>
/*
구조체를 활용한 학생정보 출력하기
ㄴ 학생정보를 출력하는 함수
ㄴ 학생정보를 추가하는 함수
void(구조체)
void(Student& s)
{
	복사말고 참조방식으로
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

//학생정보 추가함수
struct AddStudent
{

};



int main()
{
	std::cout << "학생 정보 출력하기" << std::endl;
	Student st1 = { "박철수", "천호", 15, "01051475514" };
	stdadd;


}

void stdadd(char, char, int, char)
{
	Student st1 = { "박철수", "천호", 15, "01051475514" };
	std::cout << st1.name << st1.addr << st1.Age << "\t" << st1.phNum << std::endl;
}

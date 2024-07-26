#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

/*
과제
1.함수 오버로딩을 활용한 캐릭터 스킬 만들기

ex)
스킬이름만 입력받아 사용하는 함수
스킬이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
스킬이름, 데미지, 크리티컬 확률
스킬이름, 데미지, 크리티컬 확률, 피격 거리 이런식


2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
ex)
	18324 = 1+8+3+2+4 = 18
	3849 = 3+8+4+9 =24

*/


//void skill(string skillname, int damage, int critical, int distance = 150)
//{
//	cout << "스킬이름 " << skillname << "데미지 " << damage << "크리티컬 " << critical << "사거리 " << distance << endl;
//}
//
//
//void skill(string skillname, double damage)
//{
//	cout << skillname << endl;
//
//	skill(skillname, damage, 30, 50);
//}
//
//
//
//int main()
//{
//	string a;
//	int b;
//	
//
//	cin >> a;
//	cin >> b;
//	skill(a, b);
//
//	
//
//}



//int hapsan(string num)
//{
//	int sum = 0;
//	for (int i = 0; i < num.size(); ++i)
//	{
//		string SubStr = num.substr(i, 1);
//		int sup = SubStr[0] - '0';
//
//		sum += sup;
//	}
//	return sum;
//}
//
//int main()
//{
//	string num;
//	cout << "숫자를 입력하세요: ";
//	cin >> num;
//
//		int result = hapsan(num);
//	cout << "총 합은 " << result << "입니다." << endl;
//
//
//}
//


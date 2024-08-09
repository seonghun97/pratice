#include<iostream>
#include<list> 
#include<map>
//벡터와 리스트의 차이점은 반드시 알아두시오.
//리스트 노드 기반 

/*
push_back : 리스트 끝에추가
push_front : 리스트 앞에추가
pop_back : 리스트 끝 요소 제거
pop_front : 리스트 앞 요소 제거
insert : 지정된 위치의 요소 삽입
erase : 지정된 위치의 요소 제거
clear : 모든 요소 제거
size : 리소트 요소 갯수 반환
front : 첫번째 요소 반환
back : 마지막 요소 반환
remonve : 지정한 값을 가지는 모든 요소제거
reverse : 리스트 순서 뒤집음
sort : 정렬

*/

/*
Map
-연관컨테이너 중에 자주사용하는 컨테이너 key 와 value로 저장되있음
- key, value 쌍으로 저장(pair)
이진검색트리 레드블랙트리로 구성 중복을 허용하지않음 중복되있는것으로 쓰려면 멀티맵

key값은 컨테이너에 중복저장이 되지않음

MAP 기본 형태
map <key, value> map1;
*/
int main()
{
	//std::list<int> lst = { 3, 1, 45, 8, 10 };

	//lst.push_back(9); //리스트 끝에 9추가
	//for (auto& i : lst)
	//{
	//	std::cout << i << std::endl;
	//}
	//lst.push_front(6); //리스트 앞에 6추가

	//std::list<int>::iterator iter = lst.begin();

	std::map<std::string, int> data;
	//반복자
	//std::map<std::string, int> ::iterator iter;

	//pair
	//두개의 값을 묶어서 하나의 객체로 사용하는 템플릿 클래스
	//두개의 서로다른 타입의 값을 함께 저장가능
	//페어는 두개의 멤버를 가지고있다.
	//first , second
	
	
	//1.value_type을 이용한 방법                          
	//기본적인 키-값 쌍 타입을 나타낸다. pair객체를 생성한 다음에 insert 에 전달
	//가독성이 떨어짐
	data.insert(std::map<std::string, int>::value_type("바보", 1));//키값   벨류값
	//2. make_pair : pair객체를 생성하는 함수 템플릿
	//make_pair("윈터", 5)->std::pair<string,int>;  
	// 템플릿인자를 자동으로 추론함, 타입이 명확하지 않을수 있음 
	// 복잡한타입을 다룰때는 명시적인 타입을 선언할 필요가있음
	data.insert(std::make_pair("윈터", 5));

	//3.pair를 이용한 방법 //키와 값을 명시적으로 타입선언을 해서 삽입한다
	data.insert(std::pair<std::string, int>("BTS", 10));
	data.insert(std::pair<std::string, int>("반장", 30));
	data.insert(std::pair<std::string, int>("아이유", 170));
	data.insert(std::pair<std::string, int>("정우성", 400));
	data.insert(std::pair<std::string, int>("언리얼", 20));

	//4.객체를 직접 생성하는 방법
	std::pair<std::string, int>pt1("대한민국", 10);
	data.insert(pt1);
	//객체를 재사용하거나 수정가능하지만 분리가 되어있기때문에 각각의 시점이 달라질수도있고 
	//약간 복잡해질수 있음
	
	data.erase("정우성");
	for (auto& pair : data)
	{
		std::cout << "키값 : " << pair.first << " , 데이터 : " << pair.second << std::endl;
	}
	std::cout << "==========================" << std::endl;
	//insert
	std::map<std::string, int>m;
	m.insert(std::pair<std::string, int>("Apple", 1));
	m.insert(std::pair<std::string, int>("Banana", 2));
	m.insert(std::make_pair("grape", 3));

	auto res = m.insert(std::make_pair("Banana", 10));
	if(!res.second)
	{
		std::cout << "바나나는 있을까" << res.first->second << std::endl;
	}
	//find
	auto iter = m.find("Apple");
	if (iter != m.end())
	{
		std::cout << "찾음!" << iter->second << std::endl;
	}
	else
	{
		std::cout << "없음" << std::endl;
	}

	//count 
	std::cout << "Apple : " << m.count("Apple") << std::endl; //주어진 키의 갯수를 리턴 있으면 1 없으면0

	//clear: 모든 요소를 삭제
	//empty : 비어있냐?
	//size : 맵에 저장된 노드의 갯수를 리턴
	//reverse iterator 지원
	for (auto it = m.begin(); it != m.end(); ++it)
	{

	}
	//역순
	for (auto it = m.rbegin(); it != m.rend(); ++it)
	{

	}


}

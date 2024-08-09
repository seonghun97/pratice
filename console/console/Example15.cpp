#include<iostream>
#include<list> 
#include<map>
//���Ϳ� ����Ʈ�� �������� �ݵ�� �˾Ƶνÿ�.
//����Ʈ ��� ��� 

/*
push_back : ����Ʈ �����߰�
push_front : ����Ʈ �տ��߰�
pop_back : ����Ʈ �� ��� ����
pop_front : ����Ʈ �� ��� ����
insert : ������ ��ġ�� ��� ����
erase : ������ ��ġ�� ��� ����
clear : ��� ��� ����
size : ����Ʈ ��� ���� ��ȯ
front : ù��° ��� ��ȯ
back : ������ ��� ��ȯ
remonve : ������ ���� ������ ��� �������
reverse : ����Ʈ ���� ������
sort : ����

*/

/*
Map
-���������̳� �߿� ���ֻ���ϴ� �����̳� key �� value�� ���������
- key, value ������ ����(pair)
�����˻�Ʈ�� �����Ʈ���� ���� �ߺ��� ����������� �ߺ����ִ°����� ������ ��Ƽ��

key���� �����̳ʿ� �ߺ������� ��������

MAP �⺻ ����
map <key, value> map1;
*/
int main()
{
	//std::list<int> lst = { 3, 1, 45, 8, 10 };

	//lst.push_back(9); //����Ʈ ���� 9�߰�
	//for (auto& i : lst)
	//{
	//	std::cout << i << std::endl;
	//}
	//lst.push_front(6); //����Ʈ �տ� 6�߰�

	//std::list<int>::iterator iter = lst.begin();

	std::map<std::string, int> data;
	//�ݺ���
	//std::map<std::string, int> ::iterator iter;

	//pair
	//�ΰ��� ���� ��� �ϳ��� ��ü�� ����ϴ� ���ø� Ŭ����
	//�ΰ��� ���δٸ� Ÿ���� ���� �Բ� ���尡��
	//���� �ΰ��� ����� �������ִ�.
	//first , second
	
	
	//1.value_type�� �̿��� ���                          
	//�⺻���� Ű-�� �� Ÿ���� ��Ÿ����. pair��ü�� ������ ������ insert �� ����
	//�������� ������
	data.insert(std::map<std::string, int>::value_type("�ٺ�", 1));//Ű��   ������
	//2. make_pair : pair��ü�� �����ϴ� �Լ� ���ø�
	//make_pair("����", 5)->std::pair<string,int>;  
	// ���ø����ڸ� �ڵ����� �߷���, Ÿ���� ��Ȯ���� ������ ���� 
	// ������Ÿ���� �ٷ궧�� ������� Ÿ���� ������ �ʿ䰡����
	data.insert(std::make_pair("����", 5));

	//3.pair�� �̿��� ��� //Ű�� ���� ��������� Ÿ�Լ����� �ؼ� �����Ѵ�
	data.insert(std::pair<std::string, int>("BTS", 10));
	data.insert(std::pair<std::string, int>("����", 30));
	data.insert(std::pair<std::string, int>("������", 170));
	data.insert(std::pair<std::string, int>("���켺", 400));
	data.insert(std::pair<std::string, int>("�𸮾�", 20));

	//4.��ü�� ���� �����ϴ� ���
	std::pair<std::string, int>pt1("���ѹα�", 10);
	data.insert(pt1);
	//��ü�� �����ϰų� �������������� �и��� �Ǿ��ֱ⶧���� ������ ������ �޶��������ְ� 
	//�ణ ���������� ����
	
	data.erase("���켺");
	for (auto& pair : data)
	{
		std::cout << "Ű�� : " << pair.first << " , ������ : " << pair.second << std::endl;
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
		std::cout << "�ٳ����� ������" << res.first->second << std::endl;
	}
	//find
	auto iter = m.find("Apple");
	if (iter != m.end())
	{
		std::cout << "ã��!" << iter->second << std::endl;
	}
	else
	{
		std::cout << "����" << std::endl;
	}

	//count 
	std::cout << "Apple : " << m.count("Apple") << std::endl; //�־��� Ű�� ������ ���� ������ 1 ������0

	//clear: ��� ��Ҹ� ����
	//empty : ����ֳ�?
	//size : �ʿ� ����� ����� ������ ����
	//reverse iterator ����
	for (auto it = m.begin(); it != m.end(); ++it)
	{

	}
	//����
	for (auto it = m.rbegin(); it != m.rend(); ++it)
	{

	}


}

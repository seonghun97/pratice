#include<iostream>
#include<algorithm>
#include<time.h>
#include<random>

using namespace std;
//
//int main()
//{
//	//srand(time(NULL));
//	// 
//	//�޸��� Ʈ������
//	random_device rd;
//	mt19937 gen(rd());
//	uniform_int_distribution<> dist(0, 10);
//
//
//	int number[10];
//
//	int dest, sour, temp;
//
//	for (int i = 0; i < 10; i++)
//	{
//		number[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "number[" << i << "]�ε���:" << number[i] << endl;
//	}
//
//	// �����
//	for (int i = 0; i < 1000; i++)
//	{
//		dest = dist(gen);
//		sour = dist(gen);
//
//		temp = number[dest];
//		number[dest] = number[sour];
//		number[sour] = temp;
//
//	}
//
//	cout << "=====================" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "number[" << i << "]�ε���:" << number[i] << endl;
//	}
//
//
//
//	int i;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << gen() << "  ";
//	}
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << dist(gen) << " ";
//	}
//
//
//
//
//
//}
//
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr; // ������ ��S����
	int i;
	//parr�����͸� �迭�� ù��° ����� �ּҸ� ����
	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		std::cout << "arr�� �ּ�" << &arr[i] << std::endl;
		std::cout << "parr�� �� : " << (parr + i) << std::endl;
		std::cout << "parr�� ���Ұ� : " << *(parr + i) << std::endl;

	}
}

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
//	//메르센 트위스터
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
//		cout << "number[" << i << "]인덱스:" << number[i] << endl;
//	}
//
//	// 섞어보자
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
//		cout << "number[" << i << "]인덱스:" << number[i] << endl;
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
	int* parr; // 정수형 포S인터
	int i;
	//parr포인터를 배열의 첫번째 요소의 주소를 저장
	parr = &arr[0];

	for (i = 0; i < 10; i++)
	{
		std::cout << "arr의 주소" << &arr[i] << std::endl;
		std::cout << "parr의 값 : " << (parr + i) << std::endl;
		std::cout << "parr의 원소값 : " << *(parr + i) << std::endl;

	}
}

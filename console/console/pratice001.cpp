//#include<iostream>
//#include<algorithm>
//#include<time.h>
//#include<random>
//
//using namespace std;
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
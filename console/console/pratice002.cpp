#include<iostream>
#include<stdio.h>
#include<time.h>
#include<string>

using namespace std;




//int main()
//{
//	int rows, cols;
//	cout << "���� �Է��ϼ��� :" << endl;
//	cin >> rows;
//	cout << "���� �Է��ϼ��� :" << endl;
//	cin >> cols;
//
//	int** array;
//
//	array = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		array[i] = new int[cols];
//	}
//
//	cout << "�迭�� ��Ұ��� �Է�";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "array[" << i << "][" << j << "] = ";
//			cin >> array[i][j];
//		}
//	}
//	cout << "�迭�� ����:\n";
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < cols; ++j)
//		{
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < rows; ++i)
//	{
//		delete[] array[i];
//	}
//	delete[] array;
//
//	return 0;
//
//}

//
//void pswap(int** ppa, int** ppb);
//
//int main() {
//    int a = 10, b = 20; // �ʱⰪ�� �߰��غ���
//    int* pa = &a;
//    int* pb = &b;
//
//    std::cout << "pa �� ����Ű�� ������ �ּҰ� : " << pa << std::endl; //&a = a���ּ�
//    std::cout << "pa �� �ּҰ� : " << &pa << std::endl; // pa�� �ּ� 
//    std::cout << "pb �� ����Ű�� ������ �ּҰ� : " << pb << std::endl; //&b = b�� �ּ�
//    std::cout << "pb �� �ּҰ� : " << &pb << std::endl; //pb�� �ּ�
//
//    std::cout << "------------- ȣ�� --------------" << std::endl;
//    pswap(&pa, &pb); //pa�� �ּҿ� pb�� �ּҰ� �Ѿ
//    std::cout << "------------- ȣ�ⳡ --------------" << std::endl;
//
//    std::cout << "pa �� ����Ű�� ������ �ּҰ� : " << pa << std::endl;
//    std::cout << "pa �� �ּҰ� : " << &pa << std::endl;
//    std::cout << "pb �� ����Ű�� ������ �ּҰ� : " << pb << std::endl;
//    std::cout << "pb �� �ּҰ� : " << &pb << std::endl;
//
//    return 0;
//}
//
//void pswap(int** ppa, int** ppb) { //pa�� �ּ� pb�� �ּҰ���
//    int* temp = *ppa;                 //pa�� �ּ� �� &pa�� *temp����
//
//    std::cout << "ppa �� ����Ű�� ������ �ּҰ� : " << ppa << std::endl;   // ppa�� ����Ű�� �������� �ּҰ� ��� &pa
//    std::cout << "ppb �� ����Ű�� ������ �ּҰ� : " << ppb << std::endl;   //    &pb
//
//    *ppa = *ppb;      //&pb  �� &pa �� �ְ� 
//    *ppb = temp;      //temp �� �Ʊ� �־��� &pa��  pb�� ��
//}

//int main() {
//    int a = 100;  // ���� a�� �����ϰ� �� 100�� �Ҵ��մϴ�.
//    int b = 200;  // ���� b�� �����ϰ� �� 200�� �Ҵ��մϴ�.
//    int c = 0;        // ���� c�� �����մϴ�. ���� ���� �Ҵ���� �ʾҽ��ϴ�.
//    c = a + b;
//    // c�� a + b�� �����ϰ� �� ���� ����մϴ�.
//    cout << c;
//
//    return 0;     // ���α׷� ����
//}
 
//#include <stdio.h>
//struct TEST {
//	int c;
//};
//int main() {
//	struct TEST t;
//	struct TEST* pt = &t;
//
//	/* pt �� ����Ű�� ����ü ������ c ����� ���� 0 ���� �Ѵ�*/
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	/* pt �� ����Ű�� ����ü ������ c ����� ���� 1 ���� �Ѵ�*/
//	pt->c = 1;
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}
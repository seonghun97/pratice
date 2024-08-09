#include<iostream>
#include<stdio.h>
#include<time.h>
#include<string>

using namespace std;




//int main()
//{
//	int rows, cols;
//	cout << "행을 입력하세요 :" << endl;
//	cin >> rows;
//	cout << "열을 입력하세요 :" << endl;
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
//	cout << "배열의 요소값을 입력";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "array[" << i << "][" << j << "] = ";
//			cin >> array[i][j];
//		}
//	}
//	cout << "배열의 내용:\n";
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
//    int a = 10, b = 20; // 초기값을 추가해보기
//    int* pa = &a;
//    int* pb = &b;
//
//    std::cout << "pa 가 가리키는 변수의 주소값 : " << pa << std::endl; //&a = a의주소
//    std::cout << "pa 의 주소값 : " << &pa << std::endl; // pa의 주소 
//    std::cout << "pb 가 가리키는 변수의 주소값 : " << pb << std::endl; //&b = b의 주소
//    std::cout << "pb 의 주소값 : " << &pb << std::endl; //pb의 주소
//
//    std::cout << "------------- 호출 --------------" << std::endl;
//    pswap(&pa, &pb); //pa의 주소와 pb의 주소가 넘어감
//    std::cout << "------------- 호출끝 --------------" << std::endl;
//
//    std::cout << "pa 가 가리키는 변수의 주소값 : " << pa << std::endl;
//    std::cout << "pa 의 주소값 : " << &pa << std::endl;
//    std::cout << "pb 가 가리키는 변수의 주소값 : " << pb << std::endl;
//    std::cout << "pb 의 주소값 : " << &pb << std::endl;
//
//    return 0;
//}
//
//void pswap(int** ppa, int** ppb) { //pa의 주소 pb의 주소가들어감
//    int* temp = *ppa;                 //pa의 주소 즉 &pa가 *temp에들어감
//
//    std::cout << "ppa 가 가리키는 변수의 주소값 : " << ppa << std::endl;   // ppa가 가리키는 포인터의 주소값 출력 &pa
//    std::cout << "ppb 가 가리키는 변수의 주소값 : " << ppb << std::endl;   //    &pb
//
//    *ppa = *ppb;      //&pb  를 &pa 에 넣고 
//    *ppb = temp;      //temp 에 아까 넣었던 &pa가  pb에 들어감
//}

//int main() {
//    int a = 100;  // 변수 a를 선언하고 값 100을 할당합니다.
//    int b = 200;  // 변수 b를 선언하고 값 200을 할당합니다.
//    int c = 0;        // 변수 c를 선언합니다. 아직 값은 할당되지 않았습니다.
//    c = a + b;
//    // c에 a + b를 저장하고 그 값을 출력합니다.
//    cout << c;
//
//    return 0;     // 프로그램 종료
//}
 
//#include <stdio.h>
//struct TEST {
//	int c;
//};
//int main() {
//	struct TEST t;
//	struct TEST* pt = &t;
//
//	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다*/
//	(*pt).c = 0;
//
//	printf("t.c : %d \n", t.c);
//
//	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 1 으로 한다*/
//	pt->c = 1;
//
//	printf("t.c : %d \n", t.c);
//
//	return 0;
//}
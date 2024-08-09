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
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* parr; // 정수형 포S인터
//	int i;
//	//parr포인터를 배열의 첫번째 요소의 주소를 저장
//	parr = &arr[0];
//
//	for (i = 0; i < 10; i++)
//	{
//		std::cout << "arr의 주소" << &arr[i] << std::endl;
//		std::cout << "parr의 값 : " << (parr + i) << std::endl;
//		std::cout << "parr의 원소값 : " << *(parr + i) << std::endl;
//
//	}
//}

//
//int main() {
//    const int num_students = 5; // 학생 수
//    int scores[num_students]; // 학생 성적을 저장할 배열
//
//    // 성적 입력 받기
//    std::cout << "학생들의 성적을 입력하세요:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "학생 " << (i + 1) << ": ";
//        std::cin >> scores[i];
//    }
//
//    // 성적을 높은 순서로 정렬
//    std::sort(scores, scores + num_students, std::greater<int>());  //std::greater<int>() 없으면 낮은순정렬
//
//    // 정렬된 성적 출력
//    std::cout << "성적을 높은 순서로 정렬한 결과:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "학생 " << (i + 1) << ": " << scores[i] << "\n";
//    }
//
//    return 0;
//}
//int main() {
//    const int num_students = 5; // 학생 수
//    int scores[num_students]; // 학생 성적을 저장할 배열
//
//    // 성적 입력 받기
//    std::cout << "학생들의 성적을 입력하세요 (0~100):\n";
//    for (int i = 0; i < num_students; ++i) {
//        int score;
//        while (true) {
//            std::cout << "학생 " << (i + 1) << ": ";
//            std::cin >> score;
//
//            if (score >= 0 && score <= 100) {
//                scores[i] = score;
//                break;
//            }
//            else {
//                std::cout << "잘못된 입력입니다. 0에서 100 사이의 값을 입력하세요.\n";
//            }
//        }
//    }
//
//
//    // 막대 그래프 출력
//    std::cout << "성적 막대 그래프:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "학생 " << (i + 1) << ": ";
//        for (int j = 0; j < scores[i]; ++j) {
//            std::cout << "#";
//        }
//        std::cout << " (" << scores[i] << ")\n";
//    }
//
//    return 0;
//}
	//
	//int main()
	//{
	//	int* z;
	//	int* p;
	//	int a = 2 ;
	//
	//	p = &a;
	//	z = p;
	//	cout << p << endl; //a의주소																			 p가 가리키는 주소
	//	cout << a << endl;  //2 																			 변수 a의 값
	//	cout << *p << endl; //포인터 p가 가리키고있는 메모리 주소에 저장된 값 출력 2 						    *p가 가리키는 값 (a의 값)
	//	cout << &p << endl; //포인터 변수 p의 메모리 주소를 출력합니다. &p는 p 변수 자체가 저장된 주소입니다.	   	포인터 p의 주소
	//	cout << z << endl; // p의주소																		 z가 가리키는 주소 (p와 같은 주소)
	//}
//#include <stdio.h>
//int main() {
//	int* p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a 의 값 : %d \n", a);
//	printf("*p 의 값 : %d \n", *p);
//
//	return 0;
//
// }

//int main() {
//    // 변수 선언
//    int chul, sue;
//    int* young;  // 포인터 선언
//
//    // 변철수와 변수철 초기화
//    chul = 0;
//    sue = 0;
//
//    // 포인터 young이 변철수의 주소를 가리킵니다.
//    young = &chul;
//    *young = 3;  // 변철수(chul)에 값 3을 할당합니다.
//
//    // 현재 상태 출력
//    cout << "변철수(chul) 값: " << chul << endl;  // 출력: 3
//    cout << "수철(sue) 값: " << sue << endl;   // 출력: 0
//    cout << "포인터 young이 가리키는 값: " << *young << endl;  // 출력: 3
//    cout << "포인터 young이 가리키는 주소: " << young << endl;  // 출력: chul의 주소
//
//    // 영희가 마음을 바꾸어 수철이네로 주소를 변경합니다.
//    young = &sue;
//    *young = 4;  // 수철(sue)에 값 4를 할당합니다.
//
//    // 현재 상태 출력
//    cout << "변철수(chul) 값: " << chul << endl;  // 출력: 3
//    cout << "수철(sue) 값: " << sue << endl;   // 출력: 4
//    cout << "포인터 young이 가리키는 값: " << *young << endl;  // 출력: 4
//    cout << "포인터 young이 가리키는 주소: " << young << endl;  // 출력: sue의 주소
//
//    return 0;
//}

//int main() {
//	const int z = 3;
//	int arr[z] = { 1, 2, 3 };
//	for (int i = 0; i < z; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int *parr;
//
//	parr = arr;
//	/* parr = &arr[0]; 도 동일하다! */
//
//	printf("arr[1] : %d \n", arr[1]);
//	printf("parr[1] : %d \n", parr[1]);
//	return 0;
//}
//int main() {
//    int rows = 3; // 책장의 수
//    int cols = 4; // 각 책장에 있는 책의 수
//
//    // 2차원 배열을 위한 포인터의 포인터를 선언합니다.
//    int** array;
//
//    // 책장을 위한 메모리를 할당합니다.
//    array = new int* [rows]; // 각 책장이 있을 공간을 확보합니다.
//
//    // 각 책장에 책을 놓을 공간을 확보합니다.
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols]; // 각 책장에 책을 놓을 공간을 확보합니다.
//    }
//
//    // 책에 데이터를 입력합니다.
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = i * cols + j; // 책에 번호를 붙입니다.
//        }
//    }
//
//    // 책의 데이터를 출력합니다.
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << array[i][j] << " "; // 각 책의 번호를 출력합니다.
//        }
//        std::cout << std::endl; // 책장마다 줄을 바꿉니다.
//    }
//
//    // 메모리를 해제합니다.
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i]; // 각 책장에 대한 메모리를 해제합니다.
//    }
//    delete[] array; // 책장 자체의 메모리를 해제합니다.
//
//    return 0;
//}
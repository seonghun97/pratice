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
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* parr; // ������ ��S����
//	int i;
//	//parr�����͸� �迭�� ù��° ����� �ּҸ� ����
//	parr = &arr[0];
//
//	for (i = 0; i < 10; i++)
//	{
//		std::cout << "arr�� �ּ�" << &arr[i] << std::endl;
//		std::cout << "parr�� �� : " << (parr + i) << std::endl;
//		std::cout << "parr�� ���Ұ� : " << *(parr + i) << std::endl;
//
//	}
//}

//
//int main() {
//    const int num_students = 5; // �л� ��
//    int scores[num_students]; // �л� ������ ������ �迭
//
//    // ���� �Է� �ޱ�
//    std::cout << "�л����� ������ �Է��ϼ���:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "�л� " << (i + 1) << ": ";
//        std::cin >> scores[i];
//    }
//
//    // ������ ���� ������ ����
//    std::sort(scores, scores + num_students, std::greater<int>());  //std::greater<int>() ������ ����������
//
//    // ���ĵ� ���� ���
//    std::cout << "������ ���� ������ ������ ���:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "�л� " << (i + 1) << ": " << scores[i] << "\n";
//    }
//
//    return 0;
//}
//int main() {
//    const int num_students = 5; // �л� ��
//    int scores[num_students]; // �л� ������ ������ �迭
//
//    // ���� �Է� �ޱ�
//    std::cout << "�л����� ������ �Է��ϼ��� (0~100):\n";
//    for (int i = 0; i < num_students; ++i) {
//        int score;
//        while (true) {
//            std::cout << "�л� " << (i + 1) << ": ";
//            std::cin >> score;
//
//            if (score >= 0 && score <= 100) {
//                scores[i] = score;
//                break;
//            }
//            else {
//                std::cout << "�߸��� �Է��Դϴ�. 0���� 100 ������ ���� �Է��ϼ���.\n";
//            }
//        }
//    }
//
//
//    // ���� �׷��� ���
//    std::cout << "���� ���� �׷���:\n";
//    for (int i = 0; i < num_students; ++i) {
//        std::cout << "�л� " << (i + 1) << ": ";
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
	//	cout << p << endl; //a���ּ�																			 p�� ����Ű�� �ּ�
	//	cout << a << endl;  //2 																			 ���� a�� ��
	//	cout << *p << endl; //������ p�� ����Ű���ִ� �޸� �ּҿ� ����� �� ��� 2 						    *p�� ����Ű�� �� (a�� ��)
	//	cout << &p << endl; //������ ���� p�� �޸� �ּҸ� ����մϴ�. &p�� p ���� ��ü�� ����� �ּ��Դϴ�.	   	������ p�� �ּ�
	//	cout << z << endl; // p���ּ�																		 z�� ����Ű�� �ּ� (p�� ���� �ּ�)
	//}
//#include <stdio.h>
//int main() {
//	int* p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a �� �� : %d \n", a);
//	printf("*p �� �� : %d \n", *p);
//
//	return 0;
//
// }

//int main() {
//    // ���� ����
//    int chul, sue;
//    int* young;  // ������ ����
//
//    // ��ö���� ����ö �ʱ�ȭ
//    chul = 0;
//    sue = 0;
//
//    // ������ young�� ��ö���� �ּҸ� ����ŵ�ϴ�.
//    young = &chul;
//    *young = 3;  // ��ö��(chul)�� �� 3�� �Ҵ��մϴ�.
//
//    // ���� ���� ���
//    cout << "��ö��(chul) ��: " << chul << endl;  // ���: 3
//    cout << "��ö(sue) ��: " << sue << endl;   // ���: 0
//    cout << "������ young�� ����Ű�� ��: " << *young << endl;  // ���: 3
//    cout << "������ young�� ����Ű�� �ּ�: " << young << endl;  // ���: chul�� �ּ�
//
//    // ���� ������ �ٲپ� ��ö�̳׷� �ּҸ� �����մϴ�.
//    young = &sue;
//    *young = 4;  // ��ö(sue)�� �� 4�� �Ҵ��մϴ�.
//
//    // ���� ���� ���
//    cout << "��ö��(chul) ��: " << chul << endl;  // ���: 3
//    cout << "��ö(sue) ��: " << sue << endl;   // ���: 4
//    cout << "������ young�� ����Ű�� ��: " << *young << endl;  // ���: 4
//    cout << "������ young�� ����Ű�� �ּ�: " << young << endl;  // ���: sue�� �ּ�
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
//	/* parr = &arr[0]; �� �����ϴ�! */
//
//	printf("arr[1] : %d \n", arr[1]);
//	printf("parr[1] : %d \n", parr[1]);
//	return 0;
//}
//int main() {
//    int rows = 3; // å���� ��
//    int cols = 4; // �� å�忡 �ִ� å�� ��
//
//    // 2���� �迭�� ���� �������� �����͸� �����մϴ�.
//    int** array;
//
//    // å���� ���� �޸𸮸� �Ҵ��մϴ�.
//    array = new int* [rows]; // �� å���� ���� ������ Ȯ���մϴ�.
//
//    // �� å�忡 å�� ���� ������ Ȯ���մϴ�.
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols]; // �� å�忡 å�� ���� ������ Ȯ���մϴ�.
//    }
//
//    // å�� �����͸� �Է��մϴ�.
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = i * cols + j; // å�� ��ȣ�� ���Դϴ�.
//        }
//    }
//
//    // å�� �����͸� ����մϴ�.
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << array[i][j] << " "; // �� å�� ��ȣ�� ����մϴ�.
//        }
//        std::cout << std::endl; // å�帶�� ���� �ٲߴϴ�.
//    }
//
//    // �޸𸮸� �����մϴ�.
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i]; // �� å�忡 ���� �޸𸮸� �����մϴ�.
//    }
//    delete[] array; // å�� ��ü�� �޸𸮸� �����մϴ�.
//
//    return 0;
//}
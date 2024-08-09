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
int add_book(string book_name[], string auth_name[], string publ_name[], int borrowed[], int& num_total_book);

int main() {
    int user_choice;        // ������ ������ �޴�
    int num_total_book = 0; // ���� å�� ��

    // ���� å, ����, ���ǻ縦 ������ �迭 ����. å�� �ִ� ������ 100 ��
    const int MAX_BOOKS = 100;
    string book_name[MAX_BOOKS], auth_name[MAX_BOOKS], publ_name[MAX_BOOKS];
    int borrowed[MAX_BOOKS] = { 0 }; // ���ȴ��� ���¸� ǥ��

    while (true) {
        cout << "���� ���� ���α׷� \n";
        cout << "�޴��� �����ϼ��� \n";
        cout << "1. å�� ���� �߰��ϱ� \n";
        cout << "2. å�� �˻��ϱ� \n";
        cout << "3. å�� ������ \n";
        cout << "4. å�� �ݳ��ϱ� \n";
        cout << "5. ���α׷� ���� \n";

        cout << "����� ������ : ";
        cin >> user_choice;

        switch (user_choice) {
        case 1:
            // å�� ���� �߰��ϴ� �Լ� ȣ��
            add_book(book_name, auth_name, publ_name, borrowed, num_total_book);
            break;
        case 2:
            // å�� �˻��ϴ� �Լ� ȣ��
            cout << "å �˻� ����� ���� �������� �ʾҽ��ϴ�.\n";
            break;
        case 3:
            // å�� ������ �Լ� ȣ��
            cout << "å ������ ����� ���� �������� �ʾҽ��ϴ�.\n";
            break;
        case 4:
            // å�� �ݳ��ϴ� �Լ� ȣ��
            cout << "å �ݳ� ����� ���� �������� �ʾҽ��ϴ�.\n";
            break;
        case 5:
            // ���α׷��� �����Ѵ�.
            cout << "���α׷��� �����մϴ�.\n";
            return 0;
        default:
            cout << "�ùٸ� ������ ���ּ���.\n";
            break;
        }
    }

    return 0;
}

// å�� �߰��ϴ� �Լ�
int add_book(string book_name[], string auth_name[], string publ_name[], int borrowed[], int& num_total_book) {
    if (num_total_book >= 100) {
        cout << "å�� �ִ� ������ �����߽��ϴ�.\n";
        return -1; // ���� �ڵ�
    }

    cout << "�߰��� å�� ���� : ";
    cin.ignore(); // ���� �Է� ���� �����
    getline(cin, book_name[num_total_book]);

    cout << "�߰��� å�� ���� : ";
    getline(cin, auth_name[num_total_book]);

    cout << "�߰��� å�� ���ǻ� : ";
    getline(cin, publ_name[num_total_book]);

    borrowed[num_total_book] = 0; // �������� ����
    cout << "�߰� �Ϸ�! \n";
    num_total_book++;

    return 0;
}
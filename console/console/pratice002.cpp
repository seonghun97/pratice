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
int add_book(string book_name[], string auth_name[], string publ_name[], int borrowed[], int& num_total_book);

int main() {
    int user_choice;        // 유저가 선택한 메뉴
    int num_total_book = 0; // 현재 책의 수

    // 각각 책, 저자, 출판사를 저장할 배열 생성. 책의 최대 개수는 100 권
    const int MAX_BOOKS = 100;
    string book_name[MAX_BOOKS], auth_name[MAX_BOOKS], publ_name[MAX_BOOKS];
    int borrowed[MAX_BOOKS] = { 0 }; // 빌렸는지 상태를 표시

    while (true) {
        cout << "도서 관리 프로그램 \n";
        cout << "메뉴를 선택하세요 \n";
        cout << "1. 책을 새로 추가하기 \n";
        cout << "2. 책을 검색하기 \n";
        cout << "3. 책을 빌리기 \n";
        cout << "4. 책을 반납하기 \n";
        cout << "5. 프로그램 종료 \n";

        cout << "당신의 선택은 : ";
        cin >> user_choice;

        switch (user_choice) {
        case 1:
            // 책을 새로 추가하는 함수 호출
            add_book(book_name, auth_name, publ_name, borrowed, num_total_book);
            break;
        case 2:
            // 책을 검색하는 함수 호출
            cout << "책 검색 기능은 아직 구현되지 않았습니다.\n";
            break;
        case 3:
            // 책을 빌리는 함수 호출
            cout << "책 빌리기 기능은 아직 구현되지 않았습니다.\n";
            break;
        case 4:
            // 책을 반납하는 함수 호출
            cout << "책 반납 기능은 아직 구현되지 않았습니다.\n";
            break;
        case 5:
            // 프로그램을 종료한다.
            cout << "프로그램을 종료합니다.\n";
            return 0;
        default:
            cout << "올바른 선택을 해주세요.\n";
            break;
        }
    }

    return 0;
}

// 책을 추가하는 함수
int add_book(string book_name[], string auth_name[], string publ_name[], int borrowed[], int& num_total_book) {
    if (num_total_book >= 100) {
        cout << "책의 최대 개수에 도달했습니다.\n";
        return -1; // 에러 코드
    }

    cout << "추가할 책의 제목 : ";
    cin.ignore(); // 이전 입력 버퍼 지우기
    getline(cin, book_name[num_total_book]);

    cout << "추가할 책의 저자 : ";
    getline(cin, auth_name[num_total_book]);

    cout << "추가할 책의 출판사 : ";
    getline(cin, publ_name[num_total_book]);

    borrowed[num_total_book] = 0; // 빌려지지 않음
    cout << "추가 완료! \n";
    num_total_book++;

    return 0;
}
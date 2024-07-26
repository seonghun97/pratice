#include<iostream>

using namespace std;


void main()
{
    int num;

    cout << "0 ~ 15 사이의 정수를 입력하세요: ";
    cin >> num;

    // 입력값이 범위를 벗어났을 경우 프로그램 종료
    if (num < 0 || num > 15)
    {
        cout << "잘못된 입력입니다. 프로그램을 종료합니다." << endl;
        return;
    }

    do
    {
        cout << "현재 값: " << num << endl;
        num += 3;
    } while (num <= 20);

    cout << "반복문이 종료되었습니다." << endl;
    return;


}
#include<iostream>

using namespace std;


void main()
{
    int num;

    cout << "0 ~ 15 ������ ������ �Է��ϼ���: ";
    cin >> num;

    // �Է°��� ������ ����� ��� ���α׷� ����
    if (num < 0 || num > 15)
    {
        cout << "�߸��� �Է��Դϴ�. ���α׷��� �����մϴ�." << endl;
        return;
    }

    do
    {
        cout << "���� ��: " << num << endl;
        num += 3;
    } while (num <= 20);

    cout << "�ݺ����� ����Ǿ����ϴ�." << endl;
    return;


}
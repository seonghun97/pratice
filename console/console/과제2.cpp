#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
void main()
{
	srand(time(NULL));
	int hdamage = 0;
	int sdamage = 0;
	int adamage = 0;
	int armor = 0;
	int helmet = 0;

	
	hdamage = rand() % 150 + 180;
	sdamage = rand() % 130 + 150;
	adamage = rand() % 120 + 190;
	armor = rand() % 120 + 190;
	helmet = rand() % 120 + 190;

	cout << "                ����                ������     ������                                                " << endl;
	cout << "                ��   ��              ��ޡޡޡ�     ��ޡޡޡ�                          " << endl;
	cout << "                ��    ��             ��ޡޡޡ�     ��ޡޡޡ�                          " << endl;
	cout << "                ��    ��             ��ޡޡޡ�     ��ޡޡޡ�                          " << endl;
	cout << "                ��    ��             ��ޡޡޡ������ޡޡޡޡ�                              " << endl;
	cout << "                ��    ��             ��ޡޡޡޡޡޡޡޡޡޡޡޡޡ�                        " << endl;
	cout << "              �����������           ��ޡޡޡޡޡޡޡޡޡޡޡޡޡ�                      " << endl;
	cout << "                ��    ��             ��ޡޡޡޡޡޡޡޡޡޡޡޡޡ�                        " << endl;
	cout << "                  ���               ��ޡޡޡޡޡޡޡޡޡޡޡޡޡ�                     " << endl;
	cout << "                  ���               ����������������                      " << endl;
	cout << "                  ���                                                          " << endl;
	cout << "                                                                                " << endl;

	cout << "���� ����                  ������               ����                    Ư��" << endl;
	cout << "   ��     "<<"                  " << sdamage << "                 " << "3000  " << "                ������ ������" << endl;
	cout << "   �б�    " << "                 " << hdamage << "                 " << "2800  " << "                ���̰� ���ϴ�" << endl;
	cout << "   Ȱ     " << "                  " << adamage << "                 " << "3500  " << "                ���Ÿ� ����" << endl;
	cout << "" << endl;
	cout << "�� ����                ����               ����                    Ư��" << endl;
	cout << "   ��     " << "              " << armor << "                 " << "2000  " << "                ưư�ϴ�" << endl;
	cout << "   ���     " << "                " << helmet << "                 " << "1500  " << "                �Ӹ��� ��ȣ���ش�" << endl;


	
}
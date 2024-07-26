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

	cout << "                ■■■                ■■■■■     ■■■■■                                                " << endl;
	cout << "                ■   ■              ■◇◇◇■     ■◇◇◇■                          " << endl;
	cout << "                ■    ■             ■◇◇◇■     ■◇◇◇■                          " << endl;
	cout << "                ■    ■             ■◇◇◇■     ■◇◇◇■                          " << endl;
	cout << "                ■    ■             ■◇◇◇■■■■■■◇◇◇◇■                              " << endl;
	cout << "                ■    ■             ■◇◇◇◇◇◇◇◇◇◇◇◇◇■                        " << endl;
	cout << "              ■■■■■■■■■■           ■◇◇◇◇◇◇◇◇◇◇◇◇◇■                      " << endl;
	cout << "                ■    ■             ■◇◇◇◇◇◇◇◇◇◇◇◇◇■                        " << endl;
	cout << "                  ■■               ■◇◇◇◇◇◇◇◇◇◇◇◇◇■                     " << endl;
	cout << "                  ■■               ■■■■■■■■■■■■■■■                      " << endl;
	cout << "                  ■■                                                          " << endl;
	cout << "                                                                                " << endl;

	cout << "무기 종류                  데미지               가격                    특성" << endl;
	cout << "   검     "<<"                  " << sdamage << "                 " << "3000  " << "                가볍고 빠르다" << endl;
	cout << "   둔기    " << "                 " << hdamage << "                 " << "2800  " << "                무겁고 강하다" << endl;
	cout << "   활     " << "                  " << adamage << "                 " << "3500  " << "                원거리 공격" << endl;
	cout << "" << endl;
	cout << "방어구 종류                방어력               가격                    특성" << endl;
	cout << "   방어구     " << "              " << armor << "                 " << "2000  " << "                튼튼하다" << endl;
	cout << "   헬멧     " << "                " << helmet << "                 " << "1500  " << "                머리를 보호해준다" << endl;


	
}
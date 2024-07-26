//#include <iostream>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//using namespace std;
//
//int money = 10000; // 초기 소지금
//int usedcard = 0; // 사용된 카드 수
//int minBet = 1000; // 최소 배팅 금액
//int usedCardsarr[52] = { 0 }; // 사용된 카드 추적 배열
//
//
//// 배팅 금액 입력 함수
//int betsystem()
//{
//    int bet = 0;
//    cout << "배팅 금액: ";
//    cin >> bet;
//
//    while (bet)
//    {
//        if (bet < minBet)
//        {
//            cout << "배팅 금액은 최소 1000원이어야 합니다. 다시 입력하세요: ";
//            cin >> bet;
//        }
//        else if (bet > money)
//        {
//            cout << "돈이 부족합니다. 다시 입력하세요: ";
//            cin >> bet;
//        }
//        else
//        {
//            return bet;
//        }
//    }
//}
//
//// 사용되지 않은 카드 생성 함수
//int generateCard() {
//
//    int card = 0;
//    card = rand() % 52;
//
//    for (int i = 0; i < usedcard; i++)
//    {
//        if (card == usedCardsarr[i])
//        {
//            return generateCard();
//        }
//    }
//    //내가 뽑은카드가 사용된 카드면 리트
//
//    usedCardsarr[usedcard] = card;
//    usedcard++;
//
//    return card;
//}
//int getCard(int card) {
//    return card % 13 + 1; // 숫자 (1 ~ 13)
//}
//
//void randcard(int bet)
//{
//    int card1 = generateCard();
//    int card2 = generateCard();
//    int myCard = generateCard();
//
//    int  cnum1, cnum2, mynum;
//    cnum1 = getCard(card1);
//    cnum2 = getCard(card2);
//    mynum = getCard(myCard);
//
//
//    // 결과 출력
//    cout << "컴퓨터 카드 1: " << card1 / 13 << " / " << cnum1 << endl;
//    cout << "컴퓨터 카드 2: " << card2 / 13 << " / " << cnum2 << endl;
//    cout << "내 카드: " << mynum / 13 << " / " << mynum << endl;
//
//    // 승리 조건 확인
//    int result = 0;
//    if ((mynum > cnum1 && mynum < cnum2) || (mynum < cnum1 && mynum > cnum2))
//    {
//        cout << "내가 이겼다!" << endl;
//        result = bet;
//    }
//    else if (mynum == cnum1 || mynum == cnum2)
//    {
//        cout << "내가 졌다. 배팅 금액만큼 까임." << endl;
//        result = -bet;
//    }
//    else
//    {
//        cout << "내가 졌다. 배팅 금액의 2배 차감." << endl;
//        result = -2 * bet;
//    }
//    money += result;
//}
//
//void myMoney()
//{
//    cout << "현재 소지금: " << money << "원" << endl;
//}
//
//int main()
//{
//    srand(time(NULL));
//    cout << "카드게임 시작" << endl;
//    cout << "===================================================" << endl;
//    cout << "남은 카드: " << usedcard << " / 소지금: " << money << " / 최소 배팅 금액: 1000" << endl;
//    cout << "남은 카드가 52장이 되거나 소지금이 최소 배팅 금액보다 떨어지면 종료됩니다." << endl;
//
//    while (usedcard < 52 && money >= minBet)
//    {
//        int bet = betsystem();
//        randcard(bet);
//        myMoney();
//    }
//
//    cout << "게임 종료!" << endl;
//}

#include<iostream>
using namespace std;
void main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++)
	{

	}

}
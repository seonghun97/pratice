//#include <iostream>
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//using namespace std;
//
//int money = 10000; // �ʱ� ������
//int usedcard = 0; // ���� ī�� ��
//int minBet = 1000; // �ּ� ���� �ݾ�
//int usedCardsarr[52] = { 0 }; // ���� ī�� ���� �迭
//
//
//// ���� �ݾ� �Է� �Լ�
//int betsystem()
//{
//    int bet = 0;
//    cout << "���� �ݾ�: ";
//    cin >> bet;
//
//    while (bet)
//    {
//        if (bet < minBet)
//        {
//            cout << "���� �ݾ��� �ּ� 1000���̾�� �մϴ�. �ٽ� �Է��ϼ���: ";
//            cin >> bet;
//        }
//        else if (bet > money)
//        {
//            cout << "���� �����մϴ�. �ٽ� �Է��ϼ���: ";
//            cin >> bet;
//        }
//        else
//        {
//            return bet;
//        }
//    }
//}
//
//// ������ ���� ī�� ���� �Լ�
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
//    //���� ����ī�尡 ���� ī��� ��Ʈ
//
//    usedCardsarr[usedcard] = card;
//    usedcard++;
//
//    return card;
//}
//int getCard(int card) {
//    return card % 13 + 1; // ���� (1 ~ 13)
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
//    // ��� ���
//    cout << "��ǻ�� ī�� 1: " << card1 / 13 << " / " << cnum1 << endl;
//    cout << "��ǻ�� ī�� 2: " << card2 / 13 << " / " << cnum2 << endl;
//    cout << "�� ī��: " << mynum / 13 << " / " << mynum << endl;
//
//    // �¸� ���� Ȯ��
//    int result = 0;
//    if ((mynum > cnum1 && mynum < cnum2) || (mynum < cnum1 && mynum > cnum2))
//    {
//        cout << "���� �̰��!" << endl;
//        result = bet;
//    }
//    else if (mynum == cnum1 || mynum == cnum2)
//    {
//        cout << "���� ����. ���� �ݾ׸�ŭ ����." << endl;
//        result = -bet;
//    }
//    else
//    {
//        cout << "���� ����. ���� �ݾ��� 2�� ����." << endl;
//        result = -2 * bet;
//    }
//    money += result;
//}
//
//void myMoney()
//{
//    cout << "���� ������: " << money << "��" << endl;
//}
//
//int main()
//{
//    srand(time(NULL));
//    cout << "ī����� ����" << endl;
//    cout << "===================================================" << endl;
//    cout << "���� ī��: " << usedcard << " / ������: " << money << " / �ּ� ���� �ݾ�: 1000" << endl;
//    cout << "���� ī�尡 52���� �ǰų� �������� �ּ� ���� �ݾ׺��� �������� ����˴ϴ�." << endl;
//
//    while (usedcard < 52 && money >= minBet)
//    {
//        int bet = betsystem();
//        randcard(bet);
//        myMoney();
//    }
//
//    cout << "���� ����!" << endl;
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
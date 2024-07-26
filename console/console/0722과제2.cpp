    #include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int money = 10000;

int UserChoice()
{
    int choice;
    cout << "가위(1), 바위(2), 보(3) 중 하나를 선택하세요: ";
    cin >> choice;
    return choice;
}

int ComputerChoice()
{
    return rand() % 3 + 1;
}

void gamechoice(int choice)
{
    switch (choice)
    {
    case 1: printf("가위"); break;
    case 2: printf("바위"); break;
    case 3: printf("보"); break;
    default: printf("잘못된 선택");
    }
    printf(" (%d)\n", choice);
}

int betMoney()
{
    int bet;
    cout << "배팅 금액을 입력하세요 (최소 1000원): ";
    cin >> bet;

    
        while (bet)
        {
            switch (bet < 1000)
            {
            case 1:
                cout << "배팅 금액은 최소 1000원이어야 합니다. 다시 입력하세요: ";
                cin >> bet;
                break;
            default:
                switch (bet > money)
                {
                case 1:
                    cout << "돈이 부족합니다. 다시 입력하세요: ";
                    cin >> bet;
                    break;
                default:
                    return bet;
                }
            }
        }

    

}

void game(int Uchoice, int Cchoice, int bet)
{
    cout << "나의 선택: ";
    gamechoice(Uchoice);
    cout << "컴퓨터의 선택: ";
    gamechoice(Cchoice);
    cout << endl;

    
        int result = 0; //얻는,잃는돈

    switch (Uchoice)
    {
    case 1:
        switch (Cchoice)
        {
        case 1: result = bet * 5; break;
        case 2: result = bet * -7; break;
        case 3: result = bet * 3; break;
        }
        break;
    case 2:
        switch (Cchoice)
        {
        case 1: result = bet * 3; break;
        case 2: result = bet * 5; break;
        case 3: result = bet * -7; break;
        }
        break;
    case 3:
        switch (Cchoice)
        {
        case 1: result = bet * -7; break;
        case 2: result = bet * 3; break;
        case 3: result = bet * 5; break;
        }
        break;
    default:
        result = -money; // 가위, 바위, 보 이외의 경우 모든 돈을 잃고 종료
    }

    switch (result > 0)
    {
    case 1:
        cout << "이겼습니다! " << result << "원을 얻었습니다." << endl;
        break;
    default:
        switch (result == 0)
        {
        case 1:
            cout << "비겼습니다! " << bet * 5 << "원을 얻었습니다." << endl;
            break;
        default:
            cout << "졌습니다... " << -result << "원을 잃었습니다." << endl;
        }
    }

    money += result;

    

}

void myMoney()
{
    cout << "현재 소지금: " << money << "원" << endl;
}

void main()
{
    srand(time(NULL));

    
        for (int rounds = 0; rounds < 5; rounds++)
        {
            switch (money <= 0)
            {
            case 1:
                cout << "돈을 모두 잃었습니다. 게임을 종료합니다.\n";
                return;
            default:
                myMoney();

                int bet = betMoney();
                int Cchoice = ComputerChoice();

                cout << "치트 : ";
                gamechoice(Cchoice);
                cout << endl;

                int Uchoice = UserChoice();

                switch (Uchoice < 1 || Uchoice > 3)
                {
                case 1:
                    cout << "잘못된 선택으로 게임이 종료됩니다.\n";
                    myMoney();
                    return;
                default:
                    game(Uchoice, Cchoice, bet);
                }

                switch (rounds == 4)
                {
                case 1:
                    cout << "5판이 종료되었습니다.\n";
                    myMoney();
                    return;
                }
            }
        }

    

}
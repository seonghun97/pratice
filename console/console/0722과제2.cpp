    #include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int money = 10000;

int UserChoice()
{
    int choice;
    cout << "����(1), ����(2), ��(3) �� �ϳ��� �����ϼ���: ";
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
    case 1: printf("����"); break;
    case 2: printf("����"); break;
    case 3: printf("��"); break;
    default: printf("�߸��� ����");
    }
    printf(" (%d)\n", choice);
}

int betMoney()
{
    int bet;
    cout << "���� �ݾ��� �Է��ϼ��� (�ּ� 1000��): ";
    cin >> bet;

    
        while (bet)
        {
            switch (bet < 1000)
            {
            case 1:
                cout << "���� �ݾ��� �ּ� 1000���̾�� �մϴ�. �ٽ� �Է��ϼ���: ";
                cin >> bet;
                break;
            default:
                switch (bet > money)
                {
                case 1:
                    cout << "���� �����մϴ�. �ٽ� �Է��ϼ���: ";
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
    cout << "���� ����: ";
    gamechoice(Uchoice);
    cout << "��ǻ���� ����: ";
    gamechoice(Cchoice);
    cout << endl;

    
        int result = 0; //���,�Ҵµ�

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
        result = -money; // ����, ����, �� �̿��� ��� ��� ���� �Ұ� ����
    }

    switch (result > 0)
    {
    case 1:
        cout << "�̰���ϴ�! " << result << "���� ������ϴ�." << endl;
        break;
    default:
        switch (result == 0)
        {
        case 1:
            cout << "�����ϴ�! " << bet * 5 << "���� ������ϴ�." << endl;
            break;
        default:
            cout << "�����ϴ�... " << -result << "���� �Ҿ����ϴ�." << endl;
        }
    }

    money += result;

    

}

void myMoney()
{
    cout << "���� ������: " << money << "��" << endl;
}

void main()
{
    srand(time(NULL));

    
        for (int rounds = 0; rounds < 5; rounds++)
        {
            switch (money <= 0)
            {
            case 1:
                cout << "���� ��� �Ҿ����ϴ�. ������ �����մϴ�.\n";
                return;
            default:
                myMoney();

                int bet = betMoney();
                int Cchoice = ComputerChoice();

                cout << "ġƮ : ";
                gamechoice(Cchoice);
                cout << endl;

                int Uchoice = UserChoice();

                switch (Uchoice < 1 || Uchoice > 3)
                {
                case 1:
                    cout << "�߸��� �������� ������ ����˴ϴ�.\n";
                    myMoney();
                    return;
                default:
                    game(Uchoice, Cchoice, bet);
                }

                switch (rounds == 4)
                {
                case 1:
                    cout << "5���� ����Ǿ����ϴ�.\n";
                    myMoney();
                    return;
                }
            }
        }

    

}
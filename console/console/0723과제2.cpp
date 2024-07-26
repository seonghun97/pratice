#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

/*
 오늘의 과제.
player VS computer

1 컴퓨터는 임의의 숫자 3개를 뽑는다.
2 플레이어는 차례대로 3개의 숫자를 입력한다.
3 비교
5 3 1이 나와서 내가
1 2 3을 입력했는대 13 이 중복 숫자는 동일 자리가 다름
자리가 다르고 숫자가 동일하면 볼
자리도 같고 숫자도 동일하면 스트라이크 (눈속임)

난수발생 범위는 1~10
만약 유저가  1~10외에 다른 숫자를 입력하면 재입력하라는 문구가 뜨게(제외처리)

종료 조건
3아웃

3스트라이크 1아웃
인덱스로 접근해서 셔플

*/





using namespace std;

int main()
{
    srand(time(NULL));

    int computer[3];
    int player[3];
    int strikes;
    int balls;
    int out = 0;
    int outs = 3;

    cout << "1 ~ 10 중 3개의 숫자를 뽑으시오" << endl;

    while (out < outs)
    {
        for (int i = 0; i < 3; i++)
        {
            computer[i] = (rand() % 10) + 1;
            for (int j = 0; j < i; j++)
            {
                if (computer[i] == computer[j])
                {
                    i--;
                    break;
                }
            }
        }

        cout << "컴퓨터가 선택한 숫자: " << computer[0] << " " << computer[1] << " " << computer[2] << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << "번째 숫자: ";
            cin >> player[i];
            if (player[i] < 1 || player[i] > 10)
            {
                cout << "잘못된 입력. 1~10 사이의 숫자를 입력하세요." << endl;
                i--;
            }
        }

        strikes = 0;
        balls = 0;

        for (int i = 0; i < 3; i++)
        {
            if (player[i] == computer[i])
            {
                strikes++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i != j && player[i] == computer[j])
                {
                    balls++;
                    break;
                }
            }
        }

        cout << player[0] << " " << player[1] << " " << player[2] << endl;
        cout << strikes << " 스트라이크, " << balls << " 볼" << endl;

        if (strikes == 3)
        {
            cout << "3 스트라이크! 아웃 1 증가!" << endl;
            out++;
            if (out >= outs)
            {
                cout << "게임 종료! 총 아웃 " << outs << "번 달성!" << endl;
                break;
            }
        }
    }

    return 0;


}




	
	





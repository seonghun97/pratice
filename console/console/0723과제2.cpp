#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

/*
 ������ ����.
player VS computer

1 ��ǻ�ʹ� ������ ���� 3���� �̴´�.
2 �÷��̾�� ���ʴ�� 3���� ���ڸ� �Է��Ѵ�.
3 ��
5 3 1�� ���ͼ� ����
1 2 3�� �Է��ߴ´� 13 �� �ߺ� ���ڴ� ���� �ڸ��� �ٸ�
�ڸ��� �ٸ��� ���ڰ� �����ϸ� ��
�ڸ��� ���� ���ڵ� �����ϸ� ��Ʈ����ũ (������)

�����߻� ������ 1~10
���� ������  1~10�ܿ� �ٸ� ���ڸ� �Է��ϸ� ���Է��϶�� ������ �߰�(����ó��)

���� ����
3�ƿ�

3��Ʈ����ũ 1�ƿ�
�ε����� �����ؼ� ����

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

    cout << "1 ~ 10 �� 3���� ���ڸ� �����ÿ�" << endl;

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

        cout << "��ǻ�Ͱ� ������ ����: " << computer[0] << " " << computer[1] << " " << computer[2] << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << "��° ����: ";
            cin >> player[i];
            if (player[i] < 1 || player[i] > 10)
            {
                cout << "�߸��� �Է�. 1~10 ������ ���ڸ� �Է��ϼ���." << endl;
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
        cout << strikes << " ��Ʈ����ũ, " << balls << " ��" << endl;

        if (strikes == 3)
        {
            cout << "3 ��Ʈ����ũ! �ƿ� 1 ����!" << endl;
            out++;
            if (out >= outs)
            {
                cout << "���� ����! �� �ƿ� " << outs << "�� �޼�!" << endl;
                break;
            }
        }
    }

    return 0;


}




	
	





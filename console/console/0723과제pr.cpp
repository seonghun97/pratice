#include<iostream>

using namespace std;


int main()
{
	srand(time(NULL));
	int number[10];
	int comNumber[3];
	int playerNumber[3];
	int dest, sour, temp;
	int ballCount;
	int strikeCount;

	for (int i = 0; i < 10; i++) //초기화
	{
		number[i] = i;
	}
	for (int i = 0; i < 500; i++) //섞고
	{
		dest = rand() % 10;
		sour = rand() % 10;

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;

	}
	//컴퓨터 숫자 받자.
	for (int i = 0; i < 3; i++)
	{
		comNumber[i] = number[i];
	}
	cout << "컴퓨터가 낸 숫자 :";
	for (int i = 0; i < 3; i++)
	{
		cout << comNumber[i] << " ";
	}
	cout << endl << endl;

	//게임이 돌아가는 루프
	while (true)
	{
		cout << "0~9까지 숫자를 입력해보시오 : ";

		//플레이어의 숫자를 3개입력하라.
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << "번째 숫자를 입력해라 : ";
			cin >> playerNumber[i];
		}
		// 0으로 초기화
		ballCount = 0;
		strikeCount = 0;


		//컴
		for (int i = 0; i < 3; i++)
		{
			//플
			for (int k = 0; k < 3; k++)
			{
				//컴퓨터 숫자와 내가입력한 숫자가 같냐?
				if (comNumber[i] == playerNumber[k])
				{
					// 자리까지 같냐?
					if (i == k)
					{
						strikeCount++;
					}
					else
					{
						ballCount++;
					}
				}
			}
		}// end of for


		cout << ballCount << "볼" << strikeCount << "스트라이크" << endl;

		if (strikeCount == 3)
		{
			cout << strikeCount << " 삼진 아웃" << endl;
			break;
		}







	}













}
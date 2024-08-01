#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));

		int bNumber[25] = {};

	// 1~25까지 숫자배열만들기
	for (int i = 0; i < 25; ++i)
	{
		bNumber[i] = i + 1;
	}

	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = bNumber[idx1];
		bNumber[idx1] = bNumber[idx2];
		bNumber[idx2] = iTemp;
	}

	int Bingo = 0;
	while (true)
	{
		system("cls");
		//숫자를 5x5로 출력
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (bNumber[i * 5 + j] == INT_MAX)
				{
					cout << "*\t";
				}
				else
				{
					cout << bNumber[i * 5 + j] << "\t";
				}

			}
			cout << endl;
		}
		// 3빙고일경우 게임종료
		if (Bingo >= 3)
		{
			cout << "3빙고 게임종료" << endl;
			break;
		}
		cout << "빙고 : " << Bingo << endl;
		cout << "숫자를 입력하세요 : ";
		int iInput;
		cin >> iInput;

		if (iInput < 1 || iInput > 25)
		{
			break;
		}
		//중복입력을 체크하기위한 변수, 기본적으로 중복되었다라고 하기위해 true.
		bool dup = true;

		for (int i = 0; i < 25; ++i)
		{
			// 같은숫자가 있을경우.
			if (iInput == bNumber[i])
			{
				//숫자를 찾았을경우 중복된 숫자가 아니므로 dup 변수를 false로 만듬
				dup = false;
				//숫자를 * 로 변경하기 위해 특수한값인 INT_MAX로 해준다
				bNumber[i] = INT_MAX;

				//더이상 다른숫자를 찾아볼 필요가 없으니 for문을 빠져나감
				break;

			}

		}
		// dup 변수가 true일 경우 중복된 숫자를 이볅해서 숫자를 *로
		//바꾸지 못했으니 다시 입력받게 continue해준다.
		if (dup)
			continue;

		//빙고 줄 수를 체크하는것은 매번 숫자를 입력할때마다 처음부터 카운트
		//그러므로 Bingo 변수를 0 으로 매번 초기화 하고 새롭게 줄 수를 구해주도록 한다.
		Bingo = 0;

		//가로 세로 줄 구하기
		int Star1 = 0, Star2 = 0;

		for (int i = 0; i < 5; ++i)
		{
			//한줄 체크하기전에 먼저 0으로 별개수 초기화
			Star1 = Star2 = 0;
			for (int j = 0; j < 5; ++j)
			{
				//가로 별 개수를 구한다.
				if (bNumber[i * 5 + j] == INT_MAX)
				{
					++Star1;
				}
				//세로 별 개수 구하기
				if (bNumber[j * 5 + i] == INT_MAX)
				{
					++Star2;
				}
			}

			// j for문 빠져나오고 나면 현재 줄의 가로 별 개수가 몇개인지
			// star1 변수에 들어가게 된다. star1 이 값이 5이면 한줄이
			// 모두 * 이라는 의미이므로  빙고줄 카운트를 추가
			if (Star1 == 5)
				++Bingo;
			if (Star2 == 5)
				++Bingo;
		}
		//왼 > 우 대각선 체크
		Star1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (bNumber[i] == INT_MAX)
				++Star1;
		}
		if (Star1 == 5)
			++Bingo;
		//우 > 왼 대각선 체크
		Star1 = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (bNumber[i] == INT_MAX)
				++Star1;
		}
		if (Star1 == 5)
			++Bingo;
	}

	return 0;


}
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));

		int bNumber[25] = {};

	// 1~25���� ���ڹ迭�����
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
		//���ڸ� 5x5�� ���
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
		// 3�����ϰ�� ��������
		if (Bingo >= 3)
		{
			cout << "3���� ��������" << endl;
			break;
		}
		cout << "���� : " << Bingo << endl;
		cout << "���ڸ� �Է��ϼ��� : ";
		int iInput;
		cin >> iInput;

		if (iInput < 1 || iInput > 25)
		{
			break;
		}
		//�ߺ��Է��� üũ�ϱ����� ����, �⺻������ �ߺ��Ǿ��ٶ�� �ϱ����� true.
		bool dup = true;

		for (int i = 0; i < 25; ++i)
		{
			// �������ڰ� �������.
			if (iInput == bNumber[i])
			{
				//���ڸ� ã������� �ߺ��� ���ڰ� �ƴϹǷ� dup ������ false�� ����
				dup = false;
				//���ڸ� * �� �����ϱ� ���� Ư���Ѱ��� INT_MAX�� ���ش�
				bNumber[i] = INT_MAX;

				//���̻� �ٸ����ڸ� ã�ƺ� �ʿ䰡 ������ for���� ��������
				break;

			}

		}
		// dup ������ true�� ��� �ߺ��� ���ڸ� �̓��ؼ� ���ڸ� *��
		//�ٲ��� �������� �ٽ� �Է¹ް� continue���ش�.
		if (dup)
			continue;

		//���� �� ���� üũ�ϴ°��� �Ź� ���ڸ� �Է��Ҷ����� ó������ ī��Ʈ
		//�׷��Ƿ� Bingo ������ 0 ���� �Ź� �ʱ�ȭ �ϰ� ���Ӱ� �� ���� �����ֵ��� �Ѵ�.
		Bingo = 0;

		//���� ���� �� ���ϱ�
		int Star1 = 0, Star2 = 0;

		for (int i = 0; i < 5; ++i)
		{
			//���� üũ�ϱ����� ���� 0���� ������ �ʱ�ȭ
			Star1 = Star2 = 0;
			for (int j = 0; j < 5; ++j)
			{
				//���� �� ������ ���Ѵ�.
				if (bNumber[i * 5 + j] == INT_MAX)
				{
					++Star1;
				}
				//���� �� ���� ���ϱ�
				if (bNumber[j * 5 + i] == INT_MAX)
				{
					++Star2;
				}
			}

			// j for�� ���������� ���� ���� ���� ���� �� ������ �����
			// star1 ������ ���� �ȴ�. star1 �� ���� 5�̸� ������
			// ��� * �̶�� �ǹ��̹Ƿ�  ������ ī��Ʈ�� �߰�
			if (Star1 == 5)
				++Bingo;
			if (Star2 == 5)
				++Bingo;
		}
		//�� > �� �밢�� üũ
		Star1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (bNumber[i] == INT_MAX)
				++Star1;
		}
		if (Star1 == 5)
			++Bingo;
		//�� > �� �밢�� üũ
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
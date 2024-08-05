#include<iostream>
#include<time.h>
//test
using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	srand(time(NULL));

		int bNumber[12] = {};

	for (int i = 0; i < 12; ++i)
	{
		bNumber[i] = i + 1;
	}
	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 12;
		idx2 = rand() % 12;

		iTemp = bNumber[idx1];
		bNumber[idx1] = bNumber[idx2];
		bNumber[idx2] = iTemp;
	}
	for (int i = 0; i < 12; ++i)
	{
		if (bNumber[i] == 12)
		{
			bNumber[i] = -1;
			break;
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (bNumber[i * 3 + j] == -1)
				cout << "*\t"; // -1을 '*'로 출력
			else
				cout << bNumber[i * 3 + j] << "\t";
		}
		cout << endl;
	}


}
// 1
#include <iostream>
#include <time.h>
#include <Windows.h>
// Sleep(1000) : 1�ʵ��� �����.
// Sleep(500) : 0.5�ʵ��� �����.
// 
// 2. 

using namespace std;

// 3.

/*
���𰡸� �����Ҷ���....

1. �ʿ��� ģ���� (���) �� �̸� ����� �� �ְ� ���縦 �صд�
�� ���α׷��Ӵ� ����� ������ �ǰ� ����� ��ǻ�Ͱ� �����Ѵ�.

2. ������ �������� �ش�.

3. ���� ������� �ϴ� ��ɿ� ���� �������� ������ ���´�.

4. �ʿ��� �������� �����.

5. ����� �� ������ �ʿ��ϴٸ� �ʱ�ȭ�� �����Ѵ�.

6. ����� ������ ���� �ݺ��� ������.

7. �ݺ��� ���ư��� �����ȿ��� ���α׷��� ������ �� �ִ� ����� �����Ѵ�.




*/

void main() 
{
	//5 .

	srand(time(NULL));


	int comNumber;
	int MyNumber;


	comNumber = rand() % 100 + 1;
	//cout << "ġƮ: " << comNumber << endl;

	// ���� �ݺ�
	while (true)
	{
		cout << " ���ٿ� ����: ���ڸ� �Է��Ͻÿ� �ִ� (100)" << endl;
		cin >> MyNumber;
		Sleep(1000);

		if (MyNumber == comNumber)
		{
			cout << "ã�Ҵ�." << endl;
			Sleep(3000);
			system("cls");
			//break;     //cls - clear system
		}

		else if (MyNumber > comNumber)
		{
			cout << "�� �������� ������ ���ÿ�." << endl;
		}
		else
		{
			cout << "�� ū���� ������ ���ÿ�." << endl;
		}
		cout << endl;
		
	}


}

//4.
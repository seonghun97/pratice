#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;;

void main() 
{

	srand(time(NULL));
	int num = 0;
	int comNum = 0;
	int i;
	
	
	

	for (i = 0; i < 5; i++)
	{
		comNum = rand() % 3 + 1;
		cout << "���� ���� �� �� �����ϰڽ��ϴ�.  " << endl;
		cout << "���� ���� ���� �� 5���̰� ����(1) , ����(2) ,��(3) ���ڷ� �Է����ּ���  " << endl;
		cout << "ġƮ :" << comNum << endl;
		cin >> num;

		if (num <= 0 || num > 3) 
		{
			cout << "�̿��� ���ڸ� ���� ���� ����˴ϴ�(�й�)." << endl;
			break;

		}
		else if (num == 1 && comNum == 3)
		{
			cout << "�̰���ϴ�. " << "��ǻ�Ͱ� ���� " << comNum << endl << endl;
		}
		else if (num == 3 && comNum == 1)
		{
			cout << "�����ϴ�. " << "��ǻ�Ͱ� ����" << comNum << endl << endl;
		}
		else if (num > comNum)
		{
			cout << "�̰���ϴ�. " << "��ǻ�Ͱ� ���� " << comNum << endl << endl;
		}
		else if (num < comNum)
		{
			cout << "�����ϴ�. " << "��ǻ�Ͱ� ���� " << comNum << endl << endl;
		}
		else
		{
			cout << "�����ϴ�. " << "��ǻ�Ͱ� ����" << comNum << endl << endl;
		}
		

		cout << '\n';
	}




	





}

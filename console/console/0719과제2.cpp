#include <iostream>
#include <stdio.h>

using namespace std;

void main() 
{

	int Num;
	int month;
	int i;
	int day;
	int j;


	/*for (i = 0; i < 5; i++)
	{
		cout << "�ϼ� ��±� " << endl;
		cout << "�˰���� ���� �����ּ��� �̿��� ���ڸ� ������ �ʱ�ȭ�˴ϴ� " << endl;
		cin >> Num;
		if (Num == 1 || Num == 3 || Num == 5 || Num == 7 || Num == 8 || Num == 10 || Num == 12)
		{
			j = 1;
		}
		else if (Num == 4 || Num == 6 || Num == 9 || Num == 11)
		{
			j = 2;
		}
		else if (Num == 2)
		{
			j = 3;
		}
		else {
			j = 4;
		}

		switch (j)
		{
		case 1:
			cout << "31�� " << endl;
			break;
		case 2:
			cout << "30��" << endl;
			break;
		case 3:
			cout << "28��, 29��" << endl;
			break;

		default:
			system("cls");*/


			/*for (i = 0; i < 5; i++)
			{
				cout << "�ϼ� ��±� " << endl;
				cout << "�˰���� ���� �����ּ��� �̿��� ���ڸ� ������ �ʱ�ȭ�˴ϴ� " << endl;
				cin >> Num;
				switch (Num) 
				{
				case 1:
					cout << "31�� " << endl;
					break;
				case 2:
					cout << "28��, 29�� " << endl;
					break;
				case 3:
					cout << "31�� " << endl;
					break;
				case 4:
					cout << "30�� " << endl;
					break;
				case 5:
					cout << "31�� " << endl;
					break;
				case 6:
					cout << "30�� " << endl;
					break;
				case 7:
					cout << "31�� " << endl;
					break;
				case 8:
					cout << "31�� " << endl;
					break;
				case 9:
					cout << "30�� " << endl;
					break;
				case 10:
					cout << "31�� " << endl;
					break;
				case 11:
					cout << "30�� " << endl;
					break;
				case 12:
					cout << "31�� " << endl;
					break;
				default:
					system("cls");
				}
}*/
	
	for (i = 0; i < 5; i++)
	{
		cout << "�ϼ� ��±� " << endl;
		cout << "�˰���� ���� �����ּ��� �̿��� ���ڸ� ������ �ʱ�ȭ�˴ϴ� " << endl;
		cin >> Num;
		switch (Num) 
		{

		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31�� " << endl;
			break;

		case 2:
			cout << "28��, 29�� " << endl;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30�� " << endl;
			break;



		default:

			system("cls");
			

		}
		
		
		}



	


}
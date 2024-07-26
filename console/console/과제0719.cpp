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
		cout << "가위 바위 보 를 시작하겠습니다.  " << endl;
		cout << "가위 바위 보는 총 5판이고 가위(1) , 바위(2) ,보(3) 숫자로 입력해주세요  " << endl;
		cout << "치트 :" << comNum << endl;
		cin >> num;

		if (num <= 0 || num > 3) 
		{
			cout << "이외의 숫자를 쓰면 강제 종료됩니다(패배)." << endl;
			break;

		}
		else if (num == 1 && comNum == 3)
		{
			cout << "이겼습니다. " << "컴퓨터가 낸것 " << comNum << endl << endl;
		}
		else if (num == 3 && comNum == 1)
		{
			cout << "졌습니다. " << "컴퓨터가 낸것" << comNum << endl << endl;
		}
		else if (num > comNum)
		{
			cout << "이겼습니다. " << "컴퓨터가 낸것 " << comNum << endl << endl;
		}
		else if (num < comNum)
		{
			cout << "졌습니다. " << "컴퓨터가 낸것 " << comNum << endl << endl;
		}
		else
		{
			cout << "비겼습니다. " << "컴퓨터가 낸것" << comNum << endl << endl;
		}
		

		cout << '\n';
	}




	





}

// 1
#include <iostream>
#include <time.h>
#include <Windows.h>
// Sleep(1000) : 1초동안 멈춘다.
// Sleep(500) : 0.5초동안 멈춘다.
// 
// 2. 

using namespace std;

// 3.

/*
무언가를 구현할때는....

1. 필요한 친구들 (기능) 을 미리 사용할 수 있게 복사를 해둔다
ㄴ 프로그래머는 명령을 내리면 되고 복사는 컴퓨터가 수행한다.

2. 지역을 구분지어 준다.

3. 내가 만들고자 하는 기능에 대해 지역별로 구분을 짓는다.

4. 필요한 변수등을 만든다.

5. 만들어 둔 변수를 필요하다면 초기화를 진행한다.

6. 만드는 로직에 맞춰 반복을 돌린다.

7. 반복이 돌아가는 로직안에서 프로그램을 종료할 수 있는 방안을 강구한다.




*/

void main() 
{
	//5 .

	srand(time(NULL));


	int comNumber;
	int MyNumber;


	comNumber = rand() % 100 + 1;
	//cout << "치트: " << comNumber << endl;

	// 무한 반복
	while (true)
	{
		cout << " 업다운 게임: 숫자를 입력하시오 최대 (100)" << endl;
		cin >> MyNumber;
		Sleep(1000);

		if (MyNumber == comNumber)
		{
			cout << "찾았다." << endl;
			Sleep(3000);
			system("cls");
			//break;     //cls - clear system
		}

		else if (MyNumber > comNumber)
		{
			cout << "더 작은수를 생각해 보시오." << endl;
		}
		else
		{
			cout << "더 큰수를 생각해 보시오." << endl;
		}
		cout << endl;
		
	}


}

//4.
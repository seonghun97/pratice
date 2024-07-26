#include <iostream>
#include <stdio.h>

using namespace std;

#pragma region 배열
/*

▶ 배열

- 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조

- 이런 배열은 같은 자료형을 가진 변수들이 여러개 필요할때 사용

- 많은 양의 데이터를 처리할때 유용


ㆍ 배열 선언방법

				   [배열 길이]
- 자료형 / 배열 이름[10];


ㆍ 배열 초기화 방법

1. 크기를 명시하고 초기화
EX) int arr[4] = {1, 2, 3, 4 };

2. 배열의 크기를 생략하고 초기화
EX) int arr[] = {1, 2, 3 };

3. 크기를 명시적으로 지정하고 일부 요소만 초기화
EX) int arr[5] = {1, 2, 3 };  << 나머지 요소는 0 으로 초기화됨

4. 모든 요소를 초기화하지 않음
EX) int arr[5] = {};




*/
#pragma endregion



int main()
{
#pragma region 배열 문제
	//int arr[4] = { 1,2,3,4 };

	//cout << "arr[0]번째의 데이터 :  " << arr[0] << endl;
	//cout << "arr[0]번째의 데이터 :  " << arr[1] << endl;
	//cout << "arr[0]번째의 데이터 :  " << arr[2] << endl;
	//cout << "arr[0]번째의 데이터 :  " << arr[3] << endl;

	//cout << "========================" << endl;

	//cout << &arr << endl;
	//cout << &arr[0] << endl;
	//cout << &arr[1] << endl;
	//cout << &arr[2] << endl;
	//cout << &arr[3] << endl;
	//// 주소값
	//// 인덱스0 의 주소는 배열의 시작주소와 같다

	//cout << "for 문을 이용한 배열 출력 " << endl;

	//for (int i = 0; i < 4; i++)
	//{
	//	cout << "arr[" << i << "] 번째 :" << arr[i] << endl;
	//}

	//int number[5];

	//for (int i = 0; i < 5; i++)
	//{
	//	// number[i] += i;
	//	number[i] = i + 1;

	//	/*
	//	number[0] = 0 + 1;
	//	number[1] = 1 + 1;
	//	number[2] = 2 + 1;
	//	*/

	//}
	/*
		10명의 학생성적을 - > 배열에 저장하고 총점을 구하려면 ?

		입력 -> 처리 -> 결과
		점수를 입력받을 배열 10개를 선언

	*/
		
		/*int students[10];
		int total = 0;
	
		for (int i = 0; i < 10; i++)
		{
			cout << " 점수 " << endl;
			cin >> students[10];
		}
		
		for (int i = 0; i < 10; i++)
		{
			total += students[i];
		}
			cout << "total = " << total << " avg = " << total / 10;*/
		


		////점수를 입력받을 배열1 0개를 선언
		//int jumsu[10];
		////점수합계
		//int sum = 0;
		////입력
		//for (int i = 0; i < 10; i++)
		//{
		//	cout << "내가 입력한 학생의 점수는" << endl;
		//	cout << i + 1 << " 번째 학생 :";
		//	cin >> jumsu[i];
		//}
		//// 연산하는 부분
		//for (int i = 0; i < 10; i++)
		//{
		//	sum += jumsu[i];
		//}
		//// 결과(출력)

		//cout << "총점 : " << sum << " " << "평균 :" << sum / 10;
#pragma endregion

		int arr1[4][3];

		arr1[0][0] = 1;
		arr1[0][1] = 2;
		arr1[0][2] = 3;

		arr1[1][0] = 4;
		arr1[1][1] = 5;
		arr1[1][2] = 6;

		arr1[2][0] = 7;
		arr1[2][1] = 8;
		arr1[2][2] = 9;
			 
		arr1[3][0] = 10;
		arr1[3][1] = 11;
		arr1[3][2] = 12;
	
		cout << endl << endl;

		cout << "0행 출력 결과" << arr1[0][0] << " ," << arr1[0][1] << " ," << arr1[0][2] << endl;
		cout << "1행 출력 결과" << arr1[1][0] << " ," << arr1[1][1] << " ," << arr1[1][2] << endl;
		cout << "2행 출력 결과" << arr1[2][0] << " ," << arr1[2][1] << " ," << arr1[2][2] << endl;
		cout << "3행 출력 결과" << arr1[3][0] << " ," << arr1[3][1] << " ," << arr1[3][2] << endl;


		for (size_t i = 0; i < 4; i++)
		{
			for (size_t j = 0; j < 3; j++)
			{
				cout << arr1[i][j]  << endl;
			}

		}





	return 0;
}
/*
1. 지금부터 4교시 종료 까지 배열 활용하기

   인풋을 받아서 입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하기

2. 다음 표에서 가로 합과 세로합, 모든 수의 합을 구해라.

EX) 
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55
	
	랜덤으로 뽑아라

// 오늘의 과제.
player VS computer

1 컴퓨터는 임의의 숫자 3개를 뽑는다.
2 플레이어는 차례대로 3개의 숫자를 입력한다.
3 비교
5 3 1이 나와서 내가 
1 2 3을 입력했는대 13 이 중복 숫자는 동일 자리가 다름
자리가 다르고 숫자가 동일하면 볼
자리도 같고 숫자도 동일하면 스트라이크 (눈속임)

난수발생 범위는 1~10
만약 유저가  1~10외에 다른 숫자를 입력하면 재입력하라는 문구가 뜨게(제외처리)

종료 조건
3아웃

3스트라이크 1아웃
인덱스로 접근해서 셔플


*/
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

/*
1. 지금부터 4교시 종료 까지 배열 활용하기

   인풋을 받아서 입력받은 숫자의 구구단 의 단의 결과를 배열에 저장하고 출력하기



*/
//int main() 
//{
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//
//	int i;
//	cout << "원하는 구구단의 단을 써주세요" << endl;
//	
//
//	for (int i = 1; arr[i] < 10; i++)
//	{
//		cin >> i;
//		
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d 곱하기 %d = %d\n" , i, j, i * j);
//		}
//	}
//	
//}

/*
2. 다음 표에서 가로 합과 세로합, 모든 수의 합을 구해라.

EX)
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55

	랜덤으로 뽑아라
*/

int main() 
{
	int arr1[4][5] = {};
	int arrk[4] = {};
	int arrp[5] = {};
	int ksum = 0;
	int psum = 0;
	int k = 0;
	int p = 0;
	
	for (k = 0; k < 4; k++)
	{
		
		for (p = 0; p < 5; p++)
		{
			int i = rand() % 99 + 1;
			arr1[k][p] = i;
			cout << i << endl;
		}
		
	}
	
	cout << endl;
	cout << endl;
	
	for (k = 0; k < 4; k++)
	{

		for (p = 0; p < 5; p++)
		{
			ksum += arr1[k][p];
		}

		arrk[k] = ksum;

		ksum = 0;
	}

	for (p = 0; p < 5; p++)
	{

		for (k = 0; k < 4; k++)
		{
			psum += arr1[k][p];
		}

		arrp[p] = psum;

		psum = 0;
	}


	printf("가로줄의 합  1번째 : %d, 두번째 :%d, 3번째 :%d, 네번째 :%d\n", arrk[0], arrk[1], arrk[2], arrk[3]);
	printf("세로줄의 합  1번째 : %d, 두번째 :%d, 3번째 :%d, 네번째 :%d, 다섯번째 : %d\n", arrp[0], arrp[1], arrp[2], arrp[3], arrp[4]);
	printf("총합 : %d", arrk[0]+ arrk[1] + arrk[2] + arrk[3] );
	


}
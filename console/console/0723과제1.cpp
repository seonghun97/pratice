#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

/*
1. ���ݺ��� 4���� ���� ���� �迭 Ȱ���ϱ�

   ��ǲ�� �޾Ƽ� �Է¹��� ������ ������ �� ���� ����� �迭�� �����ϰ� ����ϱ�



*/
//int main() 
//{
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//
//	int i;
//	cout << "���ϴ� �������� ���� ���ּ���" << endl;
//	
//
//	for (int i = 1; arr[i] < 10; i++)
//	{
//		cin >> i;
//		
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d ���ϱ� %d = %d\n" , i, j, i * j);
//		}
//	}
//	
//}

/*
2. ���� ǥ���� ���� �հ� ������, ��� ���� ���� ���ض�.

EX)
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55
	90 78 77 65 55

	�������� �̾ƶ�
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


	printf("�������� ��  1��° : %d, �ι�° :%d, 3��° :%d, �׹�° :%d\n", arrk[0], arrk[1], arrk[2], arrk[3]);
	printf("�������� ��  1��° : %d, �ι�° :%d, 3��° :%d, �׹�° :%d, �ټ���° : %d\n", arrp[0], arrp[1], arrp[2], arrp[3], arrp[4]);
	printf("���� : %d", arrk[0]+ arrk[1] + arrk[2] + arrk[3] );
	


}
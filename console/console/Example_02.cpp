#include <iostream>
#include <time.h>

//���ϴ� -> ���̴�.
using namespace std;

/*using ������ : ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� ��������
				������ �Ҽ� �������� ����ϰڴ�.*/
using std::cin;
using std::cout;
using std::endl;


namespace A
{
	namespace B 
	{
		namespace C 
		{
			int EnemyAttack;
		}
	}
}
namespace ABC = A::B::C;	
#pragma region �ڷ��� + ���� ����
/*
�� �ڷ��� 
- ������ ������ �ǹ��ϸ� ���� �ڷ���(Data Type)�̶�� �����ϸ� �ȴ�.

- ������?

- ���� �� �ִ� ���ڳ� �����͸� �ǹ�
- ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸��� �ǰڴ�.
- ������ �̿��ϸ� Ư�� ���� ���� �� �ش� ���� �̿��� �������� ������ �����ϴ�. (Ȥ�� ó���� �� �ִ�.)

�� �ڷ����� ���� (C / C++)

- ������ (�Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���)
- �Ǽ��� (�Ҽ����� �����ϴ� ���� ǥ���ϱ� ���� �ڷ���)
- ������ (���ڸ� ǥ���ϱ� ���� �ڷ���)
- ���� (�� / ������ �Ǻ��ϴ� �ڷ���)

- �ڷ����� ���� (������)

- short			(2 ����Ʈ)
- int			(4 ����Ʈ)
�� - long		(4 ~ 8 ����Ʈ) (Ȯ�强 ����ؼ� ����)
- long long		(8 ����Ʈ)

- �ڷ����� ���� (�Ǽ���)

- float			(0.0000000)
- double		(14�ڸ� ~ 16�ڸ� 8����Ʈ)

��decimal
29�ڸ� ������
16����Ʈ


- �ڷ����� ���� (������)

- char (1����Ʈ)


- �ڷ����� ���� (����)

- bool	(1 ����Ʈ -? 0 (����) / 1 (��)�� ��Ÿ���� �ڷ���)
�� bool �ڷ����� ������ �;� �� ��ġ�� ���� �Ǹ� ���� 1�� 0���� ��ȯ�� �ɻ� ���� ������
 �ǹ��ϴ°� �ƴϴ�.


- �⺻������  C ���� ������ �ش��ϴ� �� / �����̶�� �ڷ����� ������ �������� �ʾҴ�.
�� �׷��� ������ ���� 0�� ����/ 0�� ������ ������ ������ ������ ���״�.
�� ����� C ���� bool �ڷ����� �����ϴ� �򰥸��� ����
	�� #include <stdbool.h>

-C++�� �Ѿ� ���鼭 �� �Ǵ� ������ ��Ÿ���� Ű���带 �߰��߰� �̰� true/ false�� �ǰڴ�.

- �׸��� C / C++ �ڷ����� �⺻������ ������ ǥ���ϴ°��� ���������� ��쿡 ���� ������ ǥ������ �ʴ� 
��ſ� ����� ���� ũ�� ǥ���ϴ� ����� �ִ�. ( signed (��)/ unsigned (��))

�� �ڷ����� ũ��

1. ������

�ڷ��� Ÿ��				ũ��						����
short					2����Ʈ			-32767 ~ 32767������ ���� ��´�.
unsigned short			2����Ʈ			0 ~ 65535������ ���� ��´�.
int						4����Ʈ			-21�� ~ 21�� ������ ���� ��´�.
unsigned int			4����Ʈ			0 ~ �� 43������� ���� ��´�.
long					4����Ʈ(32)		-21�� ~ 21�� ������ ���� ��´�.


2. �Ǽ���

float					4����Ʈ			�Ҽ����� ��´�.
double					8����Ʈ		  	�Ҽ����� ��´�.

3. ������

char					1����Ʈ			������ ��´�. (����)
unsigned char			1����Ʈ			���� ������ ��´�. (����)

4. ���� 

bool					1����Ʈ			0 (����) /1 (��)

�� ���� ����

- ���� �����̶� ?
�� ���� ������ �� �ִ� �޸� ������ �̸��� �����ϴ°� ���Ѵ�.

EX: �⺻ ���� -> ���� ����(����) ������
�� int number;

EX: int number = 20; �����ʿ��� �������� ��
�� ������ �������� ���ؼ� number ��� �̸����� �޸� ������ �Ҵ��� �Ǿ���.
�� int number = 20; �� �ܼ��� number�� 20�� �����ϴ°� �ƴ� number �� �ǹ��ϴ� �޸𸮰����� 20��
 �־�� ��� �ǹ̰� �ǰڴ�.

*/
#pragma endregion


void main()
{
	// ABC::EnemyAttack;
	// A::B::C::EnemyAttack;

	// unsigned int
	//cout << endl;
	//ȿ�����̴�. -> �����ڰ� ���� �޴´�.
	//std::cout << std::endl;


	// 1.
	// int EnemyAttack;
	//int EnemyAttack;
	//�̸��� �ߺ��̵Ǿ(x)

	//int TestNumA = true;
	//int TestNumB = false;
	//int TestResult = TestNumA + TestNumB;

	//cout << "boolean: " << TestResult << endl;

	//cout << endl;*/

	// ���� �ʱ�ȭ -> �ϴ� �پ��� ����� �����Ѵ�. 
	
	//A
	// �������� �Ҵ�
	//int Num0;
	//Num0 = 10;

	//// ���� �ʱ�ȭ
	////B 
	//int Num1 = 3;
	//int Num2 = 6;



	//int Total;
	//int Num3;
	//int Num4;
	//int Num5;
	//int Num6, Num7, Num8;
	//Num6 = Num7 = Num8 = 100;


	//sizeof(): Ű������ �� ������ ���� �Ǵ� �ڷ����� ũ�⸦ ����ϴ� ���� �����ϴ�.
	//cout << "���� ������ : " << sizeof(1) << endl;
	//cout << "���� ������ : " << sizeof(2) << endl;
	//cout << "true ������ : " << sizeof(true) << endl;
	//cout << "false ������ : " << sizeof(false) << endl;

	//cout << endl;

	////�Է�
	//int nValue = 0;


	//// C++
	//cout << "���� �Է� : " << endl;
	//cin >> nValue;
	//
	//cout << "���� �Է��� ���� : " << nValue << endl;

	//cout << endl;

	////C
	//printf("���� �Է�: ");
	//scanf_s("%d", &nValue);

	//cout << endl;

	//short ValueA = 10;
	//int ValueB = 20;
	//long ValueC = 30;
	//long long ValueD = 40;

	//cout << "C++ Short: " << ValueA << "," << "������: " << sizeof(ValueA) << endl;
	//cout << "C++ int: " << ValueB << "," << "������: " << sizeof(ValueB) << endl;
	//cout << "C++ long: " << ValueC << "," << "������: " << sizeof(ValueC) << endl;
	//cout << "C++ long long: " << ValueD << "," << "������: " << sizeof(ValueD) << endl;


	//printf("C��� short: %d, %d \n", ValueA, sizeof(ValueA));
	//printf("C��� int: %d, %d \n", ValueB, sizeof(ValueB));
	//printf("C��� long: %ld, %ld \n", ValueC, sizeof(ValueC));
	//printf("C��� long long: %lld, %lld \n", ValueD, sizeof(ValueD));

	/*
	�� ���� ǥ���
	
	1. �밡����
	- ���� ������������ ������� �ڵ��� �Ҷ� ���� ���� ǥ���
	�� �� ������ � �������� �˱� ���Ͽ� ���� ����ϵ��� �տ� �׺������°� ���ϴ� ���ڸ� ���δ�.

	EX
	int num		    <->		nNum;
	float ValueA	<->		fValueA;
	double ValueA	<->		dbValueA;
	char ValueA		<->		chValueA;
	bool ValueA		<->		bValueA;

	-���� ����Ƽ�� �ڵ� ��Ŀ����� ���� ä����� �ʴ´�.
		�� ��ü������ ����ϱ� ����


	2. ī���

	- ��ü�������� ����� �ڵ����� ��ȯ�� �Ǹ鼭 �������� ì�� ǥ���

	EX
	int playerselctnum		<->		playerSelctNum
	
	playerselctnum
	playerSelctNum


	3. �Ľ�Į ���̽� (�𸮾��� �⺻ǥ���)

	int playerselctnum		<->		PlayerSelctNum

	playerselctnum
	playerSelctNum
	PlayerSelctNum

	4. ������ũ

	int playerselctnum		<->		Player_Selct_Num

	playerselctnum
	playerSelctNum
	PlayerSelctNum
	Player_Selct_Num

	5. ���� (��������)

	int playerselctnum		<->		PlSelN

		-���� �̸��� Ư¡
		
		- �⺻������ ������ �̸��� ���ĺ�, ����, _ �� �����ȴ�.
		- C���� ��ҹ��ڸ� �����ϸ� Num�� num�� �ٸ� ���� �̸��̴�.

		a. ������ �̸��� ���ڷ� ������ �� ����.
		b. Ű���� ���� ���� �̸����� ����� �� ����.
		c. �̸� ���̿� ������ ���� �� �� ����.
		
		int Num100;
		int Num101;
		int _Num102;
		int 6Num;
		int Num look;
		int bool;

		*/
	//�����õ� �ʱ�ȭ
	srand(time(NULL));
	
	int numR;
	//rand = �Ҿ��� �ܼ�
	
	
	// 0, 1, 2, 3, 4
	numR = rand() % 5;
	cout << numR << endl;


	//RAND_MAX
	

	int weaponA = 0;
	weaponA = rand() % 6 + 20;
	

	// 20 ~ 25 
	cout << " �̹��� ���� ������ ���ݷ�: " << weaponA << endl;

}
/*
����1. �����ϴ� ĳ���� ��� II

= ���� ĳ���� ��� ����

- ���� ������ ������ ���� ������ �÷�Ǯ �ϰ� ����� �´�.

- �ּ� ������ : 50 x 50

����2. ������ ������ �����

- ������ ������, �׸��� ������ �ٸ� ���� �� �� 5���� ����� ȭ�鿡 ����Ѵ�.

- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� �����Ǿ� �Ѵ�.

-���� 1�� + �� 1������ �ݵ�� ��Ʈ�� �����ؾ��Ѵ�.
�� �� 2��

����3. ���� ���� ���
- 1 ~ 5 ������ ���� ����

- 6 ~ 19 ������ ��������

- 23 ~ 189������ ���� ����
�� ����� �ɶ� �ּҿ� �ִ밪�� ����ؾ� �Ѵ�.


���� ����. �ݺ��� + ������

- �ݺ����� ���� + �������� ���� 

- ��Ʈ�� ����´�.






*/
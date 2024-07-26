#include <iostream>

// ���ڿ��� ���õ� ���
// �� STL -> string -> �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� �����Ѵ�.
// �� char

#include <string>
// world wide
#include <wchar.h>

using namespace std;

#pragma region �Լ�
/*

�� �Լ�

- ������ ���α׷��ֿ� ��ǥ ����

- �밭 ����� ���Ǳ� (����� ���Ǳ�� ������� �����ϴ� ���)


�� �Լ��� ����ϴ�����

- �ߺ� ���� ����

- ���� ������

- ������ ���

- ����

EX) �Լ��� �����ϴ� ���

��ȯ �ڷ��� �Լ��̸�(�Է� �ڷ��� (���� or �μ���� �Ҹ���.)
{ <- �Լ��� ����

	�Լ��� ����

} <- �Լ��� ��

void main()
{

}

�� ����

�Լ� �̸� : �� �״�� �Լ��� �̸� ( �Լ��� �����Ҷ� ����� �ȴ�.)
����(�μ�): �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾� �Ÿ���� �� �� �ִ�.
��ȯ �ڷ���: �Լ��� �����ϴ°��� ������ ���̸� �Լ��� �۾� ���
�Լ� ����: {} �ȿ� �Լ��� ���� �ڵ尡 ����

- �Լ��� �̸��� "�⺻��" ���� �����ؾ� �Ѵ�.
�� ������ �̸��� �Լ��� N���̻� �����ϴ°��� �Ұ����ϴ�.

�� void�� �Լ���?

- ���� (��ȯ)�� ���� ���� �Լ���.
- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� ���ٴ°��� ����ؾ� �Ѵ�.

-�츮�� ����� �Լ�?
�� rand(): �������� �̴� �Լ�
�� sleep(1000): 1�ʰ� ���߰� ����� �Լ�


�� �Լ��� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.

�� C / C++ ����� �Լ� ������ �ʿ��� ����

- C / C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.

- �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ�� �� ��� �����Ϸ��� �̿� ����
������ �𸣱� ������ ������ �߻��Ѵ�.

- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �˷����
�Ѵ�.

- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ�

- ���� �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

�Ծ�
�� ����Ƽ�� -> ī��� / ��� ���� -> �Ľ�Į ���̽�


*/
#pragma endregion

// �Լ� ����
void OutputValueA();

// ��Ʈ���� ������ ��ȯ�� �����ʴ´�. (void)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// ���ڿ� (��ȯ o / ��ȯ x)
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

//��ȯ���� ���� (int)
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

void EnemyAttack();
void OrcAttack();
void SkelAttack();

namespace NS_A
{
	void EnemyAttack()
	{
		cout << "���� �ٷ� NS_A �Լ�" << endl;
	}
}
namespace NS_B
{
	void EnemyAttack()
	{
		cout << "���� �ٷ� NS_B �Լ�" << endl;
	}
}


void main() 
{
	//NS_A::EnemyAttack();
	//NS_B::EnemyAttack();

	cout << "\n";

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1,9);

	OutputString("������ �ʹ� ��մ�.");

	int nResultA = GetAddValue(18, 25);

	// ���� ���·�
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("����", "����");
	OutputString(sResultB);

	nResultA = CheckingString("������ �ʹ� ��մ�.", "������ �ʹ� ��մ�.");
	OutputValueB(nResultA);

	cout << "\n";

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է�: " << endl;

	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, GetDivideValue(numL, numR));

	/*
	- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	C / C++ ����� �Լ� ����

	- �Է� O, ��� O
	- �Է� O, ��� X
	- �Է� X, ��� O
	- �Է� X, ��� X

	EX)
	// �Է� O, ��� X
	void ShowInfo(int nAge, char psName);
	// �Է� X, ��� O
	int GetRandomValue(void);
	// �Է� X, ��� X
	void Some Function(void);

	
	*/


	
}

/*
- �̹���
���� ����1. ���ڿ� ���� �׽�Ʈ

- �޾��

<���� ����>
C++ ���� Ǯ����ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.
C ��Ÿ�� ���̺귯�� /STL�� ��Ÿ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.
Ư�� STL String�� ���� �ٷ� Ż��ó���Ǵ� ���ǹٶ��ϴ�.
�׸��� �ش� ����� ���� �� �׷��� �ۼ��� �ߴ��� ª�� �ּ��� �־� �ּ���.

����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�.
<��>
�Է� ��: "Hello World this is Pearl Abyss"
��ȯ ��: "Pearl Abyss is this World Hello"

<����>
�Է� ���ڿ��� �յڿ� ������ ���ٰ� ����
��� �ܾ�� ���� �� ĭ���� ���еȴٰ� ����

void ReverseWorlds(char* output, int outptArraySize, const char* input)
{

	//�̰��� ä�� �����ÿ�

}
�ۼ��� ������ �ð� ���⵵�� ����ϴ� ������ ������ �Լ��� �����ϰ� ���۹�İ� �� �׷��� �ۼ��ߴ��� ����Ͻÿ�.
*/

// ������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ��Ī�� ���ִ�.
// ���� C / C++���� �Լ� ������ �����ϱ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ��� �ݵ�� �ش� ������
//�Լ��ȿ� �ۼ��� ��� �Ѵ�.
void OutputValueA()
{
	cout << "���� �ٷ� �Լ���." << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutpuString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// �Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ��� ���� ��ȯ�ϴ°��� �����ϴ�.
	// �Լ��� ������� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�. (�Լ� ����)
	
	// string�� ���ڿ��� �ٷ� �� �ִ� �پ��� ����� �����ϰ� �ִ�. (+ ����ó��)
	return strA + strB;
	// return strA.append(strB);
}

int CheckingString(string strA, string strB)
{
	// ������ 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}

#include<iostream>

using namespace std;

#pragma region ���׿�����
/*
��	���� ������

- �ڵ��� ������ ���̰� ������ ������ ǥ���ϴµ� �����ϰ� ����.
- �ʹ� ������ ���ǽ� �϶��� �Ⱦ��°����� . �б⹮�� ����ϴ°� ����.

	result = (num1 > num2) ? num1 : num2;    ���̸� �� �����̸� ��


	int main()
{
	/*int num1 = 2;
	int num2 = 3;

	int result;

	result = (num1 > num2) ? num1 : num2;

	cout << result << endl;

	int a = 5;
	int b = 10;
	int c = 15;

	int result;

	if (a < b)
	{
		if (b < c)
		{
			result = a + b;
		}
		else
		{
			result = a - b;
		}
	}
	
	else
	{
		if (b < c)
		{
			result = a * b;
		}
		else
		{
			result = a / b;
		}
	}
	cout << "��� : " << result << endl;



int a = 5;
int b = 10;
int c = 15;

int result;

//1 ������ ���ǹ�.
result = (a < b) ? ((b < c) ? a + b : a - b) : (b > c ? a * b : a / b);
cout << "��� : " << result << endl;

}

*/
#pragma endregion

#pragma region str�Լ�
/*
int main()
{
	//char c = 'a';

	////c��Ÿ�� ���ڿ��� null���ڰ� �� '\0'
	//char h[4] = "��";
	//
	////���� �迭
	//char str[] = "Hello World";
	//// Hello World > 12 ���鵵 1ĭ�԰� �������� null���� ���� 
	//cout << str << endl;
	//cout << sizeof(str) << endl;

	//char str[50];

	////����
	//strcpy_s(str, "Hello world");
	//cout << str << endl;

	////���ڿ� ���� ���
	//cout << strlen(str) << endl;

	//char str1[] = "Hello";

	//for (int i = 0; i < strlen(str1); ++i)
	//{
	//	cout << "����" << i << " : " << str1[i] <<endl;
	//}

	//for (int i = 0; str1[i] !='\0'; ++i)
	//{
	//	cout << "����" << i << " : " << str1[i] << endl;
	//}
	//
	////strcat_s ���ڿ��� ���� �����ش�

	//char str3[50] = "Hello, ";

	//char str4[] = "world";

	//strcat_s(str3, str4);
	//cout << str3 << endl;

	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";

	int result1 = strcmp(str1, str2);
	int result2 = strcmp(str1, str3);

	cout << "str1, str2 ��� " << result1 << endl; //0 �ι��ڿ��� �����Ҷ�
	cout << "str1, str3 ��� " << result2 << endl; //-1 �񱳸� �Ҷ� ù��° ���ڿ��� �ι�° ���ڿ��� �۰ų� �ڿ������� ����������
												   // 1 ù��° ���ڿ��� �ι�° ���ڿ����� ũ�ų� �տ������� ����� ���´� (�ƽ�Ű�ڵ�)
	//strcmp ���ڿ� �ΰ��� �����ִ��Լ� ���ڿ��� ���� �����ϸ� �񱳸� ����
}
*/
#pragma endregion

#pragma region String Class(str �Լ�)
/*
- ���ڿ��� ����  null���ڰ� ��������.
- string s;  ���ڿ��� �ٷ���ְ� ���ش�.




void StringLength(); // ����
void StringCopy();
void StringCopy(string src); // ī��
void StringConnection(); // ����
void StringCompare(); // ��
void StringSubstr(); //
void StringReplace(); //
void StringErase(); //


//String Class
int main()
{
	StringLength(); // ����
	StringCopy();
	StringConnection(); // ����
	StringCompare(); // ��
	StringSubstr(); //
	StringReplace(); //
	StringErase(); //
}

void StringLength()
{
	string str = "Hello world";
	cout << "���ڿ��� ���� " << str.length() << endl;
}

void StringCopy()
{
	string str = "Hello world";
	string dest = str; // ����
	cout << "����� ���ڿ� " << dest << endl;
}

void StringCopy(const string src) // const���̱� ������������
{
	string dest = src;
	cout << "����� ���ڿ�" << dest << endl;

}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "world";
	str1 += str2; // ���ڿ��� ����
	cout << "����� ���ڿ� : " << str1 << endl;
	// �̰� �Ǵ������� �����ڰ� �����ε��� �Ǿ�����
}

void StringCompare()
{
	string str1 = "Hello";
	string str2 = "Hello";
	string str3 = "world";

	if (str1 == str2)cout << "���ڿ��� ����" << endl;
	if (str1 < str3)cout << "str1�� str3���� �տ�����" << endl;
}

void StringSubstr()
{
	string str = "Hello, World";//7��°���� 5���� ���ڿ� Hello, <���� 5��
	string subStr = str.substr(7, 5); //  �������ڿ��� Ư�� ������ġ���� ���� ������ ���̸�ŭ �߶� return�� ���ش�.
	cout << "subStr ���ڿ� : " << subStr << endl;
}

void StringReplace()
{
	string str = "Hello, World";  //7��°���� 5���� ���ڿ� Hello, < ���� C++�� �ٲٰڴ�
	str.replace(7, 5, "C++"); // ���ڿ��� Ư����ġ���� ������ ���ڸ� �����ڿ��� ��ġ�����ش�
	cout << "replace ���ڿ� : " << str << endl;
}

void StringErase()
{
	string str = "Hello, World";
	str.erase(5,7); //  
	cout << "erase ���ڿ� : " << str << endl;
}
*/
#pragma endregion

#pragma region �Լ� �����ε�
/*
- �������� ���������� ������

������
EX) 
int sum(int a, int b, int c)
{
	return a + b + c;
}
int sum1(int a, int b, int c)
{
	return a + b + c ;
}

�Ű������� �ٸ� sum = 2 sum = 3 

�ر�Ģ
�� �Ű� ������ ������ �޶���Ѵ�
- �Լ� �̸��� ������ �Ű������� ������ �ٸ��� ���� �ٸ� �Լ��� �ν����Ѵ�.

�� Ÿ���� �޶� ���� �ٸ� �Լ��� �ν��Ѵ�
- �Լ� �̸��� ������ �Ű������� Ÿ���� �ٸ��� �ٸ� �Լ��� �ν��Ѵ�.

��Ÿ���� ������ �������ٸ��� ���δٸ� �Լ��� �ν��Ѵ�.
- �Լ� �̸��� �����ϰ� �ŰԺ����� Ÿ���� ������ �������ٸ��� �ٸ��Լ��� �ν��Ѵ�



int func(int a);
double func(int b);      - ���� Ÿ���� �����ε� �������ǿ� ���ʺ��� �������ʴ´�. ����

�� ����
- �ϳ��� �̸����� �����Ҽ�����.
- �پ��� Ÿ���� �Է��� �����Ҽ� ������ �������� ����. - ������ ����� �ϳ�

�ʹ������ϸ� ��������.
�������Ҷ� ��������


�� ����Ʈ �Ű�����
- �Ű������� �⺻���� ��������.
int sum(int a, int b, int c = 3)
{
	return a + b + c ;
}
int main()
{
	sum(1, 2);      �Լ�ȣ�����Ҷ� �Ű������� ��������������� �⺻������ó������ c= 3
}

- ���� ����
�� �Լ������ε��� ����Ʈ �Ű������� �Բ����� �����ؾ��� 
�� ����Ʈ �Ű������� �ǿ����� ���� �����ؾ���.

�� inline �Լ�( ����� �����Ϸ��� �˾Ƽ����ֱ���) = �Լ��� ǥ��������� �߻��ϴ� ������尡�߻��ϴ´� �Լ��� ȣ����ڸ����� �ٷ� ������ �ϴ��Լ� 
Ư���� �ݺ����� ȣ�⿡ �ɸ��� �ð��������Ҽ������� �ڵ尡 �ſ�ª�� �ֱ������� ����ȣ��Ǵ� �Լ��� �����ϸ� ������
�׷��� �ֽ� �����Ϸ����� �˾Ƽ� inlineȭ �ع��� �츮������ �Ⱥ��� �˾Ƽ� ����ȭ���ִ� ���ʿ�¾���.

inline void Test(int left, int right) { return left < right ? left : right;}

int sum(int a, int b)
{
	return a + b;
}
int sum(int a, int b, int c = 3)
{
	return a + b + c ;
}
int sum(double a, int b, int c)
{
	return a + b + c ;
}
int sum(int a, double b, int c)
{
	return a + b + c;
}


int main()
{
	int result = sum(1, 2, 10);
	cout << result;
}
*/

#pragma endregion


/*
����
1.�Լ� �����ε��� Ȱ���� ĳ���� ��ų �����

ex)
��ų�̸��� �Է¹޾� ����ϴ� �Լ�
��ų�̸��̶� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
��ų�̸�, ������, ũ��Ƽ�� Ȯ��
��ų�̸�, ������, ũ��Ƽ�� Ȯ��, �ǰ� �Ÿ� �̷��� 


2. ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ �����ض�.
ex)
	18324 = 1+8+3+2+4 = 18
	3849 = 3+8+4+9 =24

*/

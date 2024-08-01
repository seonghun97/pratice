#include<iostream>

#pragma region �迭�� ������
/*
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << &arr[i] << std::endl;
	}

	�迭�� �������� ����
	�����ͷε� �迭 ���ҿ� ������ �����ϴ�
	�� , �迭�� ���ۺκ��� ����Ű�� �����͸� �����ϰ�
	�����Ϳ� 1�����ϸ� �״��� ���Ҹ� ����Ű��
	2�����ϸ� �� �������� ���Ҹ� ����Ű�� �ȴ�.



 int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
 int* parr; // ������ ��S����
 int i;
 //parr�����͸� �迭�� ù��° ����� �ּҸ� ����
 parr = &arr[0];
 
 for (i = 0; i < 10; i++)
 {
 	std::cout << "arr�� �ּ�" << &arr[i] << std::endl;
 	std::cout << "parr�� �� : " << (parr + i) << std::endl;
 	std::cout << "parr�� ���Ұ� : " << *(parr + i) << std::endl; 
 }
 */
 //������
 //callbyRef
 //callbyValue

#pragma endregion

/*
���� ���� ���� - >CallByValue
�Լ��� �μ��� �����Ҷ� �μ��� ���� ����Ǿ� �Լ��� �Ű������� ����.
�Լ� ���ο��� �Ű������� �����ϴ���, ȣ���� �Լ��� ���� �μ��� ������ �ʴ´�.
*/
void Value(int n);

/*
������ ���� ȣ��
�Լ� ȣ��� �μ��� ������ �ּҸ� �����ϴ� ���
�Լ��� �谳������ ���� ������ ���� ���� �μ��� ���� ���� ��������
�Լ� ���ο��� �Ű������� ���� �����ϸ� ȣ���� �Լ��� ���� �μ��� ����
���� �����ϴ´�� �ּҸ� ���� -> �޸𸮿� ����ȿ���� ����.
����ü�� Ŭ������
*/
void Address(int* n); 


/*
������ �ٸ��̸��� ���� �Լ��� ���������Ϳ� ���������Ͽ� �����Ҽ��ְ���
int* n ���� ����
*/
void Reference(int& n); //������ ������ ��������. &  �Լ�ȣ���Ҷ� ������ ȣ���� �Ͻ�������

void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapReference(int& a, int& b);

int main()
{
	int num = 30;
	Value(num);
	std::cout << "n�� �� : " << num << std::endl;
	std::cout << "n�� �ּҰ� :" << &num << std::endl;

	std::cout << "===================" << std::endl;
	std::cout << "Address(&num1)" << std::endl;

	int num1 = 30;
	Address(&num1);
	std::cout << "num1�� �� : " << num1 << std::endl;
	std::cout << "num1�� �ּҰ� : " << &num1 << std::endl;
	std::cout << "===================" << std::endl;

	std::cout << "Reference(num2)" << std::endl;
	int num2 = 30;
	Reference(num2);
	std::cout << "num2 �� �� :" << num2 << std::endl;
	std::cout << "num2 ���ּ� �� :" << &num2 << std::endl;
	std::cout << "===================" << std::endl;

	int num3 = 10;
	int num4 = 20;
	std::cout << "������ ������ : " << num3 << ", " << num4 << std::endl;
	Swap(num3, num4);
	std::cout << "������ ������ : " << num3 << ", " << num4 << std::endl;
	std::cout << "===================" << std::endl;
	int swapAddNum1 = 10;
	int swapAddNum2 = 20;
	std::cout << "������ ������ : " << swapAddNum1 << ", " << swapAddNum2 << std::endl;
	SwapAddress(&swapAddNum1, &swapAddNum2);
	std::cout << "������ ������ : " << swapAddNum1 << ", " << swapAddNum2 << std::endl;

	//int num = 10;

	//int* p = &num;
	//*p = 777;
	//int** pp; //����������
	//pp = &p;
	//std::cout <<"pp�� �� : (p�� �ּҰ�)" << pp << std::endl;

	//std::cout << *pp << std::endl; // num �� �ּҰ��� ����



//void Pointer
//�ڷ����� ���� ������ ����
//�ڷ����� ������ ���� �ʰ� � �ڷ����� �ּҵ� ���尡��.
	//���� �����Ϸ��� ��������ȯ�ؾ��Ѵ�.
	//���� : �ڷ����� ������ ����x
	//���� : ����ȯ�� �ʿ�, Ÿ���� �������� �����Ҽ�����

	void* vp = nullptr;
	int c = 3;
	double d = 3.1;


	int a = 1;
	int* p = &a;
	*p = 3;

	vp = &d;
	// *vp = 1; error//�츮�� �˰��ִ¹�����δ� �Ұ���
	//(�ڷ���*)�� �������� �� �����ϰ��� : ���� ����ȯ
	*(double*)vp = 5.1;
	std::cout << *(double*)vp << std::endl;



//int* ptr = (int*)malloc(sizeof(int) * 10);//10���� int�� �����Ҽ��ִ� �޸𸮸��l��
//int* ptr = new int(10); // int�� �����ϳ��� �����Ҵ��ϰ� 10���� �ʱ�ȭ �ϰڴ�.
	
	int* array = new int[5]; //5���� int�� �����Ҽ� �ִ� �迭�� �Ҵ�
	int* ptr = new int(10);
	delete ptr;
	for (int i = 0; i < 5; i++)
	{
		array[i] = 1 * 2;
	}
	delete[] array;
	array = nullptr;  //�޸� ���� �� null �����ͷ� ���� ��������ϳ� 
}


void Value(int n)
{
	n = 10;
	std::cout << "n�� �� : " << n << std::endl;
	std::cout << "n�� �ּҰ� :" << &n << std::endl;
}

void Address(int* n)
{
	*n = 10;
	std::cout << "n�� �� :" << *n << std::endl;
	std::cout << "n�� �ּҰ� :" << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;
	std::cout << "n�� �� : " << n << std::endl;
	std::cout << "n�� �ּҰ� : " << &n << std::endl;
}


//�Ʒ��� ���� ���´� ������ �ƴ϶� ������ ����
//num1, num2 �� ���� ����� 10, 20 �� ����
//Swap ���ο����� ���� ����ǰ� �����Լ��� �ִ� num1, num2�� ���� ���� x
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "Swap() �Լ� ������ �� : ";
	std::cout << a << " , " << b << std::endl;
}

void SwapAddress(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//
void SwapReference(int& a, int& b)
{
}

//����
/*
1.�����Ҵ�� �����Ҵ��� ������ �����ؼ� ��Ʈ.(�޸𸮿���)
2.Ŭ������ �����ΰ�?
3.����ü�� Ȱ���� �л����� ����ϱ�
�� �л������� ����ϴ� �Լ�
�� �л������� �߰��ϴ� �Լ�
void(����ü)
void(Student& s)
{
	���縻�� �����������
}

�����Ҵ�-  ���α׷��� ���ư��� ���ȿ� �ʿ��� ��ŭ �޸𸮸� �l���ϴ¿���
�ݵ�� �޸𸮸� �����ؾ��� (�ݳ�)�� �ؾ��� ���ϸ� �޸� ������ �߻�

C - > malloc
	free �޸� �����ϴ³༮ c
C++ - > new   < �̰ž���
	delete �޸����� C++
*/
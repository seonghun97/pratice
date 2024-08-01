#include<iostream>

#pragma region 배열과 포인터
/*
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << &arr[i] << std::endl;
	}

	배열과 포인터의 관계
	포인터로도 배열 원소에 접근이 가능하다
	즉 , 배열의 시작부분을 가리키는 포인터를 정의하고
	포인터에 1을더하면 그다음 원소를 가리키고
	2를더하면 그 다음다음 원소를 가리키게 된다.



 int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
 int* parr; // 정수형 포S인터
 int i;
 //parr포인터를 배열의 첫번째 요소의 주소를 저장
 parr = &arr[0];
 
 for (i = 0; i < 10; i++)
 {
 	std::cout << "arr의 주소" << &arr[i] << std::endl;
 	std::cout << "parr의 값 : " << (parr + i) << std::endl;
 	std::cout << "parr의 원소값 : " << *(parr + i) << std::endl; 
 }
 */
 //포인터
 //callbyRef
 //callbyValue

#pragma endregion

/*
값에 의한 전달 - >CallByValue
함수에 인수를 전달할때 인수의 값이 복사되어 함수의 매개변수로 전달.
함수 내부에서 매개변수를 변경하더라도, 호출한 함수의 실제 인수는 변하지 않는다.
*/
void Value(int n);

/*
참조에 의한 호출
함수 호출시 인수로 변수의 주소를 전달하는 방식
함수가 배개변수로 받은 참조를 통해 실제 인수의 값을 직접 수정가능
함수 내부에서 매개변수의 값을 변경하면 호출한 함수의 실제 인수도 변경
값을 복사하는대신 주소를 전달 -> 메모리와 성능효율이 좋다.
구조체나 클래스나
*/
void Address(int* n); 


/*
변수에 다른이름을 만들어서 함수가 원본데이터에 직접접근하여 추정할수있게함
int* n 보다 안전
*/
void Reference(int& n); //변수의 별명을 전달해줌. &  함수호출할때 변수의 호출을 암시적으로

void Swap(int a, int b);
void SwapAddress(int* a, int* b);
void SwapReference(int& a, int& b);

int main()
{
	int num = 30;
	Value(num);
	std::cout << "n의 값 : " << num << std::endl;
	std::cout << "n의 주소값 :" << &num << std::endl;

	std::cout << "===================" << std::endl;
	std::cout << "Address(&num1)" << std::endl;

	int num1 = 30;
	Address(&num1);
	std::cout << "num1의 값 : " << num1 << std::endl;
	std::cout << "num1의 주소값 : " << &num1 << std::endl;
	std::cout << "===================" << std::endl;

	std::cout << "Reference(num2)" << std::endl;
	int num2 = 30;
	Reference(num2);
	std::cout << "num2 의 값 :" << num2 << std::endl;
	std::cout << "num2 의주소 값 :" << &num2 << std::endl;
	std::cout << "===================" << std::endl;

	int num3 = 10;
	int num4 = 20;
	std::cout << "스왑전 데이터 : " << num3 << ", " << num4 << std::endl;
	Swap(num3, num4);
	std::cout << "스왑후 데이터 : " << num3 << ", " << num4 << std::endl;
	std::cout << "===================" << std::endl;
	int swapAddNum1 = 10;
	int swapAddNum2 = 20;
	std::cout << "스왑전 데이터 : " << swapAddNum1 << ", " << swapAddNum2 << std::endl;
	SwapAddress(&swapAddNum1, &swapAddNum2);
	std::cout << "스왑전 데이터 : " << swapAddNum1 << ", " << swapAddNum2 << std::endl;

	//int num = 10;

	//int* p = &num;
	//*p = 777;
	//int** pp; //다중포인터
	//pp = &p;
	//std::cout <<"pp의 값 : (p의 주소값)" << pp << std::endl;

	//std::cout << *pp << std::endl; // num 의 주소값이 나옴



//void Pointer
//자료형이 없는 포인터 변수
//자료형에 제약을 받지 않고 어떤 자료형의 주소든 저장가능.
	//값을 참조하려면 강제형변환해야한다.
	//장점 : 자료형이 없으니 제약x
	//단점 : 형변환이 필요, 타입의 안정성을 보장할수없음

	void* vp = nullptr;
	int c = 3;
	double d = 3.1;


	int a = 1;
	int* p = &a;
	*p = 3;

	vp = &d;
	// *vp = 1; error//우리가 알고있는방법으로는 불가능
	//(자료형*)을 붙임으로 써 가능하게함 : 강제 형변환
	*(double*)vp = 5.1;
	std::cout << *(double*)vp << std::endl;



//int* ptr = (int*)malloc(sizeof(int) * 10);//10개의 int를 저장할수있는 메모리를햘당
//int* ptr = new int(10); // int의 변수하나를 동적할당하고 10으로 초기화 하겠다.
	
	int* array = new int[5]; //5개의 int를 저장할수 있는 배열을 할당
	int* ptr = new int(10);
	delete ptr;
	for (int i = 0; i < 5; i++)
	{
		array[i] = 1 * 2;
	}
	delete[] array;
	array = nullptr;  //메모리 해제 후 null 포인터로 지정 예방법중하나 
}


void Value(int n)
{
	n = 10;
	std::cout << "n의 값 : " << n << std::endl;
	std::cout << "n의 주소값 :" << &n << std::endl;
}

void Address(int* n)
{
	*n = 10;
	std::cout << "n의 값 :" << *n << std::endl;
	std::cout << "n의 주소값 :" << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;
	std::cout << "n의 값 : " << n << std::endl;
	std::cout << "n의 주소값 : " << &n << std::endl;
}


//아래와 같은 형태는 전달이 아니라 복사의 형태
//num1, num2 에 각각 저장된 10, 20 이 복사
//Swap 내부에서만 값이 변경되고 메인함수에 있는 num1, num2는 전혀 영향 x
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "Swap() 함수 내부의 값 : ";
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

//과제
/*
1.정적할당과 동적할당의 차이점 조사해서 노트.(메모리영역)
2.클래스란 무엇인가?
3.구조체를 활용한 학생정보 출력하기
ㄴ 학생정보를 출력하는 함수
ㄴ 학생정보를 추가하는 함수
void(구조체)
void(Student& s)
{
	복사말고 참조방식으로
}

동적할당-  프로그램이 돌아가는 동안에 필요한 만큼 메모리를 햘당하는영역
반드시 메모리를 해제해야함 (반납)을 해야함 안하면 메모리 누수가 발생

C - > malloc
	free 메모리 해제하는녀석 c
C++ - > new   < 이거쓰자
	delete 메모리해제 C++
*/
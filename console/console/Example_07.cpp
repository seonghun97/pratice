#include<iostream>

using namespace std;

#pragma region 삼항연산자
/*
▶	삼항 연산자

- 코드의 가독성 높이고 간결한 조건을 표현하는데 유용하게 쓰임.
- 너무 복잡한 조건식 일때는 안쓰는게좋음 . 분기문을 사용하는게 좋다.

	result = (num1 > num2) ? num1 : num2;    참이면 앞 거짓이면 뒤


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
	cout << "결과 : " << result << endl;



int a = 5;
int b = 10;
int c = 15;

int result;

//1 복잡한 조건문.
result = (a < b) ? ((b < c) ? a + b : a - b) : (b > c ? a * b : a / b);
cout << "결과 : " << result << endl;

}

*/
#pragma endregion

#pragma region str함수
/*
int main()
{
	//char c = 'a';

	////c스타일 문자열은 null문자가 들어감 '\0'
	//char h[4] = "ㅁ";
	//
	////문자 배열
	//char str[] = "Hello World";
	//// Hello World > 12 공백도 1칸먹고 마지막에 null문자 들어가서 
	//cout << str << endl;
	//cout << sizeof(str) << endl;

	//char str[50];

	////복사
	//strcpy_s(str, "Hello world");
	//cout << str << endl;

	////문자열 길이 출력
	//cout << strlen(str) << endl;

	//char str1[] = "Hello";

	//for (int i = 0; i < strlen(str1); ++i)
	//{
	//	cout << "문자" << i << " : " << str1[i] <<endl;
	//}

	//for (int i = 0; str1[i] !='\0'; ++i)
	//{
	//	cout << "문자" << i << " : " << str1[i] << endl;
	//}
	//
	////strcat_s 문자열을 연결 시켜준다

	//char str3[50] = "Hello, ";

	//char str4[] = "world";

	//strcat_s(str3, str4);
	//cout << str3 << endl;

	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";

	int result1 = strcmp(str1, str2);
	int result2 = strcmp(str1, str3);

	cout << "str1, str2 결과 " << result1 << endl; //0 두문자열이 동일할때
	cout << "str1, str3 결과 " << result2 << endl; //-1 비교를 할때 첫번째 문자열이 두번째 문자열이 작거나 뒤에있으면 음수가나옴
												   // 1 첫번째 문자열이 두번째 문자열보다 크거나 앞에있으면 양수가 나온다 (아스키코드)
	//strcmp 문자열 두개를 비교해주는함수 문자열의 끝에 도달하면 비교를 종료
}
*/
#pragma endregion

#pragma region String Class(str 함수)
/*
- 문자열의 끝에  null문자가 들어가지않음.
- string s;  문자열만 다룰수있게 해준다.




void StringLength(); // 길이
void StringCopy();
void StringCopy(string src); // 카피
void StringConnection(); // 연결
void StringCompare(); // 비교
void StringSubstr(); //
void StringReplace(); //
void StringErase(); //


//String Class
int main()
{
	StringLength(); // 길이
	StringCopy();
	StringConnection(); // 연결
	StringCompare(); // 비교
	StringSubstr(); //
	StringReplace(); //
	StringErase(); //
}

void StringLength()
{
	string str = "Hello world";
	cout << "문자열의 길이 " << str.length() << endl;
}

void StringCopy()
{
	string str = "Hello world";
	string dest = str; // 복사
	cout << "복사된 문자열 " << dest << endl;
}

void StringCopy(const string src) // const붙이기 안정성을보장
{
	string dest = src;
	cout << "복사된 문자열" << dest << endl;

}

void StringConnection()
{
	string str1 = "Hello, ";
	string str2 = "world";
	str1 += str2; // 문자열을 연결
	cout << "연결된 문자열 : " << str1 << endl;
	// 이게 되는이유는 연산자가 오버로딩이 되어있음
}

void StringCompare()
{
	string str1 = "Hello";
	string str2 = "Hello";
	string str3 = "world";

	if (str1 == str2)cout << "문자열이 같다" << endl;
	if (str1 < str3)cout << "str1이 str3보다 앞에있음" << endl;
}

void StringSubstr()
{
	string str = "Hello, World";//7번째부터 5개의 문자열 Hello, <이후 5개
	string subStr = str.substr(7, 5); //  원본문자열에 특정 시작위치에서 부터 지정한 길이만큼 잘라서 return을 해준다.
	cout << "subStr 문자열 : " << subStr << endl;
}

void StringReplace()
{
	string str = "Hello, World";  //7번째부터 5개의 문자열 Hello, < 이후 C++로 바꾸겠다
	str.replace(7, 5, "C++"); // 문자열의 특정위치에서 지정된 문자를 새문자열로 배치를해준다
	cout << "replace 문자열 : " << str << endl;
}

void StringErase()
{
	string str = "Hello, World";
	str.erase(5,7); //  
	cout << "erase 문자열 : " << str << endl;
}
*/
#pragma endregion

#pragma region 함수 오버로딩
/*
- 쓰는이유 유지보수가 좋아짐

▶조건
EX) 
int sum(int a, int b, int c)
{
	return a + b + c;
}
int sum1(int a, int b, int c)
{
	return a + b + c ;
}

매개변수가 다름 sum = 2 sum = 3 

※규칙
ㆍ 매개 변수의 갯수가 달라야한다
- 함수 이름이 같더라도 매개변수의 갯수가 다르면 서로 다른 함수로 인식을한다.

ㆍ 타입이 달라도 서로 다른 함수로 인식한다
- 함수 이름이 같더라도 매개변수의 타입이 다르면 다른 함수로 인식한다.

ㆍ타입이 같더라도 순서가다르면 서로다른 함수로 인식한다.
- 함수 이름이 동일하고 매게변수의 타입이 같더라도 순서가다르면 다른함수로 인식한다



int func(int a);
double func(int b);      - 리턴 타입은 오버로딩 성립조건에 애초부터 들어오지않는다. 오류

▶ 장점
- 하나의 이름으로 관리할수있음.
- 다양한 타입의 입력을 연산할수 있으니 유연성이 증가. - 강력한 기능중 하나

너무난발하면 좋지않음.
랜더링할때 쓸수있음


▶ 디폴트 매개변수
- 매개변수에 기본값을 지정해줌.
int sum(int a, int b, int c = 3)
{
	return a + b + c ;
}
int main()
{
	sum(1, 2);      함수호출을할때 매개변수를 지정하지않은경우 기본값으로처리해줌 c= 3
}

- 주의 사항
ㄴ 함수오버로딩과 디폴트 매개변수를 함께쓸때 주의해야함 
ㄴ 디폴트 매개변수는 맨오른쪽 부터 지정해야함.

ㄴ inline 함수( 현재는 컴파일러가 알아서해주긴함) = 함수의 표출과정에서 발생하는 오버헤드가발생하는대 함수의 호출된자리에서 바로 삽입을 하는함수 
특정상 반복적인 호출에 걸리는 시간을절약할수는있음 코드가 매우짧고 주기적으로 자주호출되는 함수를 선언하면 좋긴함
그러나 최신 컴파일러들은 알아서 inline화 해버림 우리눈에는 안보임 알아서 최적화해주니 할필요는없다.

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
과제
1.함수 오버로딩을 활용한 캐릭터 스킬 만들기

ex)
스킬이름만 입력받아 사용하는 함수
스킬이름이랑 데미지 값을 입력받아 스킬을 사용하는 함수
스킬이름, 데미지, 크리티컬 확률
스킬이름, 데미지, 크리티컬 확률, 피격 거리 이런식 


2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라.
ex)
	18324 = 1+8+3+2+4 = 18
	3849 = 3+8+4+9 =24

*/

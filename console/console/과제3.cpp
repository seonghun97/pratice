#include <iostream>
#include <time.h>

void main()
{
	srand(time(NULL));

	int a;
	int b;
	int c;
	int cmax = 189;
	int cmin = 23;

	a = rand() % 4 + 1;
	b = rand() % 14 + 6;
	c = rand() % 168 + 23;

	std::cout << "a�� ���� :" << a << std::endl;
	std::cout << "b�� ���� :" << b << std::endl;
	std::cout << "c�� ���� :" << c << std::endl;
	std::cout << "c�� �ִ�ġ :" << cmax << "        c�� �ּ�ġ : " << cmin << std::endl;
	
}
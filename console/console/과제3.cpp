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

	std::cout << "a의 숫자 :" << a << std::endl;
	std::cout << "b의 숫자 :" << b << std::endl;
	std::cout << "c의 숫자 :" << c << std::endl;
	std::cout << "c의 최대치 :" << cmax << "        c의 최소치 : " << cmin << std::endl;
	
}
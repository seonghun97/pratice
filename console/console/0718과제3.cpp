#include <iostream>

using namespace std;

void main() 
{
	int i;
	for (i = 0; i <= 20; i++) 
	{
		if (i % 2 == 1) continue;

		cout << i << endl;

	}



	int y = 0;
	while (y < 20) 
	{
		y++;
		if (y % 2 == 1) continue;
		cout << y << endl;
	}


	int j = 0;
	do
	{
		cout << j*2 << endl;
		j++;
		
	} while (j < 11);
	
	cout << endl;
	
	
	
	int i;
	for (i = 20; i > 0; i--) 
	{
		
		cout << i << endl;
		
	}

	int y = 20;
	while (y > 0) 
	{
		y--;
		
		cout << y << endl;
	}
	
	int j = 20;
	do 
	{ 
		j--;
		cout << j << endl;
	} while (j > 0);
	
	


}
#include<iostream>

using namespace std;

void main() 
	{
	
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++) 
		{
			cout << i << " ���ϱ�   " << j << "    =" << i * j << endl;
		}
	}

	
	
	
	
	
	int x = 1;
	while (x < 9)
	{
		x++;
		int y = 0;
		while (y < 9){
			y++;
		
		int z = x * y;
		cout << x << "���ϱ�   " << y << "     =" << z << "\n";
		}
		cout << "\n\n";
	}
	
	    
	

	int q = 2;

	do 
	{
		int w = 1;

		do {
			
			cout << q << "���ϱ� " << w << " =          " << q * w << "\n";
			w++;
		} while (w <= 9);

		cout << "\n\n";

		q++;
	} while (q <= 9);



}


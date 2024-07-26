#include <iostream>

using namespace std;

void main() 
{
	    int num;
	
	    cout << "정수를 입력하세요 (-10 ~ 10): ";
	    cin >> num;
	
	    while (num >= -10 && num <= 10) 
		{
	        while (num > -15) 
			{
	            cout << num << endl;
	            num = num - 5;
	        }
	    }
	

	}
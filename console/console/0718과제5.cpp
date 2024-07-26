#include<iostream>

using namespace std;

void main() 
{
    int y = 6;

    
        for (int i = 0; i < y; ++i)
        {

            for (int j = 0; j < y - i - 1; j++) 
            {
                cout << " ";
            }

            for (int j = 0; j < 2 * i + 2; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

    for (int i = y - 2; i >= 0; --i)
    {

        for (int j = 0; j < y - i - 1; j++) 
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 2; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    

}
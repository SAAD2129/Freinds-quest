#include <iostream>

using namespace std;

int main()
{
        
    int rows;
    cout << "Enter the Number of rows ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            cout << i+j << " ";
        }
        cout << endl;
    }

    return 0;
}
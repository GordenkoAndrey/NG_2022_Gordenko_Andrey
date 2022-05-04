#include <iostream>

using namespace std;

int main()
{
    int star = 0;

    cout << "Enter the size of the square: ";
    cin >> star;
    cout << endl;

    for (int i = 0; i < star; i++)
    {
        for (int j = 0; j < star; j++)
        {
            if (i != 0 && i != star - 1 && j != 0 && j != star - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

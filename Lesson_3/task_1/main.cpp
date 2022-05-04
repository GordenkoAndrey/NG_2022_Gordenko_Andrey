#include <iostream>>

using namespace std;

int main()
{
    int size_input = 0;
    int num_check = 0;

    cout << "Enter size of array: ";
    cin >> size_input;
    int array[size_input];

    for(int i = 0; i < size_input; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> array[i];
    }

    cout << endl;
    cout << "What number you want to check: ";
    cin >> num_check;

    for(int i = 0; i < size_input; i++)
    {
        if (array[i] == num_check)
        {
            cout << "I know that number!" << endl;
            break;
        }
        else if (i == size_input - 1)
            cout << "I dont know that number)" << endl;
    }
}

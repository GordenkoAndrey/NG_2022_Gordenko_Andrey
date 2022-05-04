#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int sum = 0;

    cout << "Enter number: ";
    cin >> num;

    for(int i = num; i != 0;)
    {
        if (i % 10 % 2 == 0)
            sum += i % 10;
        i /= 10;
    }
    cout << "Sum = " << sum << endl;
}

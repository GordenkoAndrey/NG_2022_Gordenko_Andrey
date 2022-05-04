#include <iostream>
#include <random>

using namespace std;

int main()
{
    srand(time(NULL));

    int arr1[4];
    int arr2[4];
    int num_1 = 0;
    int num_2 = 0;
    int mull = 1000;

    for (int i = 0; i < 4; i++)
    {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
        num_1 += (arr1[i] % 10 * mull);
        num_2 += (arr2[i] % 10 * mull);
        mull /= 10;
    }
    cout << "Your first array: " << num_1 << endl;
    cout << "Your second array: " << num_2 << endl;
    if (num_1 > num_2)
        cout << num_1 << " > " << num_2 << endl;
    else
        cout << num_2 << " > " << num_1 << endl;
}

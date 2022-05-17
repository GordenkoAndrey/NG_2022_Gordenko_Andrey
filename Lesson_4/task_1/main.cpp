#include <iostream>

using namespace std;

int main()
{
    char str1[255];
    char str2[255];

    int str_1 = 0;
    int str_2 = 0;

    cout << "Enter your first string: ";
    cin.getline(str1, 255);
    cout << "Enter your second string: ";
    cin.getline(str2, 255);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str_1++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str_2++;
    }

    if (str_1 > str_2)
        cout << "First ";
    else
        cout << "Second ";
    cout << "string is bigger!" << endl;
}

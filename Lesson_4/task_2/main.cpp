#include <iostream>

using namespace std;

int main()
{
    char str1[] = {"gjh8weotr uryweKDFS w7uy6 grruEE ryER  GEHgTr REuYiyew rgiuwrfg "};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'A' ||
            str1[i] == 'e' || str1[i] == 'E' ||
            str1[i] == 'i' || str1[i] == 'I' ||
            str1[i] == 'o' || str1[i] == 'O' ||
            str1[i] == 'u' || str1[i] == 'U' ||
            str1[i] == 'y' || str1[i] == 'Y')
        {
            if (i % 2 == 0)
            {
                cout << str1[i];
            }
        }
            else
                cout << " ";
    }
    cout << endl;
}

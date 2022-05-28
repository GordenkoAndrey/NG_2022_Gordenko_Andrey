#include <iostream>

using namespace std;

int sq_size ()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    return size;
}

void d_symbol(char symbol)
{
    cout << symbol;
}

void d_line(int size, int line_num, int i)
{
    if (i != size)
    {
        if (line_num != 0 && line_num != size - 1 && i != 0 && i != size - 1)
            d_symbol(' ');
        else
            d_symbol('*');
        d_line(size, line_num, i + 1);
    }
}

void d_square(int size, int line_num)
{
    if (line_num != size)
    {
        d_line(size, line_num, 0);
        cout << endl;
        d_square(size, line_num + 1);
    }

}


int main()
{
    d_square(sq_size(), 0);
}

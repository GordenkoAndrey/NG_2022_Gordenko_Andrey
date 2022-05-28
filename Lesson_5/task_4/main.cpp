#include <iostream>
#include <math.h>

using namespace std;

int num_A()
{
    int a = 0;
    cout << "Enter a: ";
    cin >> a;
    return a;
}

int num_B()
{
    int b = 0;
    cout << "Enter b: ";
    cin >> b;
    return b;
}

int num_C()
{
    int c = 0;
    cout << "Enter c: ";
    cin >> c;
    return c;
}

void solution(int c, int b, int a)
{
    if ((b * b - 4 * a * c) > 0) {
        cout << "x1 = " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
    }
    if ((b * b - 4 * a * c) == 0) {
        cout << "x1 = " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
    }
    if ((b * b - 4 * a * c) < 0) {
        cout << "No roots!!!" << endl;
    }
}


int main()
{
    solution(num_C(), num_B(), num_A());
}

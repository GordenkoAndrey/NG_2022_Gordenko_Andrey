#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << endl;

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
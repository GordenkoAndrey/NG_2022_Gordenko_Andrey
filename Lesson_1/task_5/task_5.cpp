#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int Discriminant = 0;
	int x1 = 0;
	int x2 = 0;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << endl;

	Discriminant = b * b - 4 * a * c;

	if (Discriminant > 0) {
		x1 = (-b + sqrt(Discriminant)) / (2 * a);
		x2 = (-b - sqrt(Discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	if (Discriminant == 0) {
		x1 = (-b + sqrt(Discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;
	}
	if (Discriminant < 0) {
		cout << "No roots!!!" << endl;
	}
}
#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int hash_code = 0;

	cout << "Enter please number: ";
	cin >> num;
	cout << endl;
	int num1 = num;
	int last_num = num1 % 10;

	while (num1 != 0)
	{
		if (num1 % 10 == num1 / 10 % 10)
			hash_code += num1 % 10;

		if (num1 < 10 && num1 == last_num)
			hash_code += num1;
		num1 /= 10;
	}
	cout << "Hash-code: " << hash_code << endl;
}
﻿#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int sum = 0;

	cout << "Enter number: ";
	cin >> num;
	int num_1 = num;

	while (num_1 > 0)
	{
		if (num_1 % 10 % 2 == 0)
			sum += num_1 % 10;
		num_1 /= 10;
	}
	cout << "Sum = " << sum << endl;
}
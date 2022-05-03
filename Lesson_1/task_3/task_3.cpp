#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	int study = 0;

	cout << "Enter your age: ";
	cin >> age;

	if (age > 10)
	{
		cout << "Do you study? (1/0) :";
		cin >> study;

		if (study == 0)
		{
			cout << "Why?" << endl;
		}
		else
		{
			cout << "You are awesome!" << endl;
		}
	}
	else
	{
		cout << "Wow you are so big!" << endl;
	}
}
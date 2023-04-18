#include <iostream>
#include <string>
using namespace std;

int main()
{
	int inputNumber;
	string inputName;

	cout << "Введите селое число: ";
	cin >> inputNumber;
	cout << "Введите ваше имя: ";
	cin >> inputName;
	
	cout << inputName << " ввел " << inputNumber << endl;

	return 0;
}


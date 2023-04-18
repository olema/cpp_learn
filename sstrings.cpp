#include <iostream>
#include <string>

#define C cout<<

using namespace std;

int main()
{
	string greetString("Hello std::string!\n");
	cout << greetString;

	cout << "Введите текстовую строку: " << endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "Введите другую строку: " << endl;
	string secondLine;
	getline(cin, secondLine);

	cout << "Рез-т конкатенации: " << endl;
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;

	C "Копия полученной строки: " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;

	cout << "Длина строки: " << concatString.length() << endl;

	return 0;
}

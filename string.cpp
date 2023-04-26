#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main() {
	string s;
	
	cout << "Input string: ";	
	cin >> s;
	cout << "You input string is " << s << endl;

	if (s.empty())
		cout << "string empty" << endl;
	else
		cout << "string not empty" << endl;

	cout << "string empty? " << s.empty() << endl;
	
	auto i = s.size();
		
	if ( i > 5) {
		auto cp = s[4];
		cout << "5 symbol is " << cp << endl;
	}

	cout << "number of symbols in string s is " << i << endl;

	return 0;
}

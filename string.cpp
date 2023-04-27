#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main() {
	string s, s1, word;
    string st1(10, 'a'), str_get;
    string str_ru1 = "аест";
    string str_ru2 = "бест";
    
    cout << "str_ru1.size() = " << str_ru1.size() << endl;
    cout << (str_ru1>str_ru2) << endl;
    cout << (str_ru1 == str_ru2) << endl;

    cout << "input line for getline" << endl;
    getline(cin, str_get);
    cout << "input string from getline(cin, str_get):" << endl;
    cout << str_get << endl;
    cout << st1 << endl;	
	cout << "Input string: ";	
	cin >> s >> s1;
	cout << s << endl << s1 << endl;
	cout << "input long text, и заверши его ctrl-d:" << endl;
	while (cin >> word)
		cout<<word<<endl;
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

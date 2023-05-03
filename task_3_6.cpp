#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main() {
    string str, str1;
    decltype(str.size()) i = 0;

    cout << "Input string: ";
    getline(cin,str);
    cout << str << endl;
    
    if (!str.empty())
        for (char &c: str) {
            if (c != ' ')
                c = 'X';
        }
    cout << str << endl << endl;

    cout << "Input string2: ";
    getline(cin,str1);
    cout << str1 << endl;

    i = 0;
    if (!str1.empty())
        while (i < str1.size()) {
            if (str1[i] != ' ')
                str1[i] = 'X';
            i++;
        }
    cout << str1 << endl;

}



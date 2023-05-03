#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main() {
    string str, str1;
    const string s = "Keep out!";

    cout << "Input str: ";
    getline(cin, str);

    if (!str.empty())
        for (auto &c: str)
            if (c!=',' && c!='.' && c!=':')
                str1 += c;

    cout << str1 << endl;

    for (auto &x: s)
        x = '*';
}

#include <iostream>
#include <string>
//#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
    string str("test.!!.!!");
    decltype(str.size()) punct_cnt = 0;

    cout << str << endl;

    for (auto c: str)
        if (ispunct(c))
            ++punct_cnt;
    cout << "punct char in " << str << " is "<< punct_cnt << endl;

    for (auto &d: str)
        d = toupper(d);
     cout << str << endl;

    if (!str.empty())
        str[0] = 'G';
     cout << str << endl;

    return 0;
}

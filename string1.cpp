#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main() {
    string str;

    cout << "Input string:" << endl;
    getline(cin, str);
    cout << str << endl;
    
    auto str_len = str.size();

    if (!str.empty()) {
        decltype(str.size()) ch_num;
        cout << "Input char number from 0 to " << str_len - 1 << endl;
        cin >> ch_num;
        if (ch_num > (str_len - 1)) {
            cerr << ch_num << " wrong value" << endl;
            return -1;
        }
        cout << str[ch_num] << endl;
        return 0;
    }

}


#include "using_define.h"

int main() {
    vector<int> ivec = {10, 11, 12, 13, 14};
    vector<string> svec = {"abs", "sqrt", "add", "odd"};
    vector<string> v6{10}; // вектор содержит 10 пустых строк
    vector<int> v2;

    cout << "i'm vector testing" << endl;
    cout << "vector<int> ivec[2] = " << ivec[2] << endl;

    cout << "vector ivec:" << endl;
    for (auto i: ivec)
        cout << i << endl;

    cout <<  "\nvector svec:" << endl;
    for (auto s: svec)
        cout << s << endl;

    cout << "vector<string> v6{10}: " << v6[0] << endl;

    for (int i = 0; i != 100; ++i)
        v2.push_back(i);

    cout << "\nvector<int> v2 :" << endl;
    for (auto i: v2)
        cout << i << endl;
}

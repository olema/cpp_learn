#include "using_define.h"

int main() {
    vector<int> ivec = {10, 11, 12, 13, 14};
    vector<string> svec = {"abs", "sqrt", "add", "odd"};
    vector<string> v6{10}; // вектор содержит 10 пустых строк
    vector<int> v2, v3;
    vector<int> v4{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> words;
    string s;
    int i;

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

// task 3.17
    cout << "\ninput string for vector words:" << endl;
    while (cin >> s)
        words.push_back(s);
    if (!words.empty())
        for (auto &s: words)
            for (auto &c: s) c = toupper(c);
    int cw = 0;
    for (auto s: words)
        if (cw < 8) {
            cout << s << " ";
            ++cw;
        } else {
            cw = 0;
            cout << endl << s << " ";
        }
// end task        

    cout << "\ninput int numbers: " << endl;
    while (cin >> i)
        v3.push_back(i);
    cout << "v3 contains " << v3.size() << " elements:" << endl;
    for (auto i: v3)
        cout << i << endl;

    for (auto &i: v4)
        i *= i;
    cout << "squares v4: ";
    for (auto i: v4)
        cout << i << " ";
    cout << endl;
}

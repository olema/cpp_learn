#include "using_define.h"

int main() {
    vector<int> v;
    int a;

    cout << "input numbers then press ctrl-D:" << endl;
    while (cin >> a) 
        v.push_back(a);

    cout << "\nколичество введенных номеров: " << v.size() << endl;

    int sum = 0;
    int p = 0;
    
    for (auto elem: v)
        if (!p) {
            sum += elem;
            p += 1;
        }
        else {
            sum += elem;
            cout << sum << endl;
            sum = 0;
            p = 0;
        }
        
        if (p)
            cout << "last elem: " << sum << endl;

}


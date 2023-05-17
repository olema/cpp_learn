#include "using_define.h"

int main() {
    vector<int> v1(10,42);
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};

    cout << "v1 size = " << v1.size() << endl;
    cout << "v1[2] = " << v1[2] << endl;
    cout << "v2 size = " << v2.size() << ", v2[2] = " << v2[2] << endl;
}

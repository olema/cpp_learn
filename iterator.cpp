#include "using_define.h"

// *iter - ссылка на элемент
// iter->mem - обращение к значению итератора и выборка члена mem основного элемента.
//             эквивалентно (*iter).mem
// ++iter - инкремент итератора для обращения к следующему элементу
// --iter - декремент
// iter1 == iter2
// iter1 != iter2 - сравнение 

int main() {
    string s("some string");
    vector<int> v{11,12,13,14,15};

    if (s.begin() != s.end()) {
        auto iter_b = s.begin(), iter_e = s.end();
        cout << *iter_b << endl;
        cout << *(--iter_e) << endl;
    }

    if (v.begin() != v.end()) {
        auto iter_v_b = v.begin(), 
             iter_v_e = v.end();
        cout << *iter_v_b << endl;
    }

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    cout << s << endl;
}
